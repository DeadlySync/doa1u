// Headless acquisition + full DOA1 decode digest. No guest, window or audio device.
extern "C" {
#include "fmv/sofdec.h"
#ifndef SOFDEC_HOST_REFERENCE
#include "fmv/sofdec_io.h"
#include "kernel_virtual_disk.h"
#endif
}
#ifndef SOFDEC_HOST_REFERENCE
#include "xbox_image_file.h"
extern "C" void xbox_log(int, const char *, const char *, ...) {}
extern "C" const char *xbox_LookupSymbolicLink(const char *) { return nullptr; }
#endif
#include <windows.h>
#include <bcrypt.h>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
namespace {
namespace fs = std::filesystem;
void check(bool ok, const char *why) { if (!ok) throw std::runtime_error(why); }
struct Digest {
    BCRYPT_ALG_HANDLE algorithm = nullptr;
    BCRYPT_HASH_HANDLE hash = nullptr;
    Digest() {
        check(BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA256_ALGORITHM, nullptr, 0) >= 0, "SHA provider");
        check(BCryptCreateHash(algorithm, &hash, nullptr, 0, nullptr, 0, 0) >= 0, "SHA state");
    }
    ~Digest() { if (hash) BCryptDestroyHash(hash); if (algorithm) BCryptCloseAlgorithmProvider(algorithm, 0); }
    void add(const void *p, size_t n) {
        check(n <= MAXDWORD && BCryptHashData(hash, (PUCHAR)p, static_cast<ULONG>(n), 0) >= 0, "SHA update");
    }
    std::string finish() {
        unsigned char bytes[32]; char hex[65];
        check(BCryptFinishHash(hash, bytes, sizeof(bytes), 0) >= 0, "SHA finish");
        for (size_t i = 0; i < sizeof(bytes); ++i) std::snprintf(hex + i * 2, 3, "%02x", bytes[i]);
        return hex;
    }
};
const char *movies[] = {"DOA1/ss_opn.sfd", "DOA1/ss_end.sfd", "DOA2/2_VI_WIDE_B.sfd",
    "DOA2/4_VI_STD_B.sfd", "DOA2/DOA_G4.sfd", "DOA2/doa2_op.sfd"};
} // namespace
int wmain(int argc, wchar_t **argv) {
    try {
        check(argc == 4, "Usage: sofdec_check <folder|image> <source> <new manifest.json>");
        const fs::path source = fs::absolute(argv[2]);
        std::ofstream output(argv[3]); check(bool(output), "Cannot create manifest");
#ifdef SOFDEC_HOST_REFERENCE
        check(!std::wcscmp(argv[1], L"folder"), "Reference needs extracted folder");
#else
        const bool image_mode = !std::wcscmp(argv[1], L"image");
        check(image_mode || !std::wcscmp(argv[1], L"folder"), "Invalid source mode");
        _putenv_s("RECOMP_SAVE_DIR", ""); // Never follow an external save override in an offline probe.
        xbox_virtual_disk_enable();
        xbox_path_init(source.u8string().c_str(), fs::absolute(argv[3]).parent_path().u8string().c_str());
        if (image_mode) { char error[512]{};
            check(doa1u_image_mount(source.c_str(), error, sizeof(error)) == XISO_OK, error); }
#endif
        output.precision(17); output << "{\n  \"acquisition\": [\n";
        for (size_t i = 0; i < std::size(movies); ++i) {
            const char *movie = movies[i];
            size_t length = 0;
            std::unique_ptr<uint8_t, decltype(&std::free)> bytes(nullptr, &std::free);
#ifdef SOFDEC_HOST_REFERENCE
            const auto path = source / movie;
            const uint64_t size = fs::file_size(path);
            if (size && size <= 512 * 1024 * 1024) {
                length = static_cast<size_t>(size);
                bytes.reset(static_cast<uint8_t *>(std::malloc(length))); check(bool(bytes), "Allocation failed");
                std::ifstream file(path, std::ios::binary);
                file.read(reinterpret_cast<char *>(bytes.get()), static_cast<std::streamsize>(length));
                check(bool(file), "Reference acquisition failed");
            }
#else
            const std::string path = std::string("D:\\") + movie;
            uint8_t *data = nullptr;
            const bool accepted = sofdec_read_file(path.c_str(), &data, &length) != 0;
            bytes.reset(data);
            check(accepted == (i != 5), "Acquisition acceptance differs from existing 512 MiB policy");
#endif
            output << "    {\"path\":\"" << movie << "\",\"bytes\":" << length << ",\"sha256\":\"";
            if (bytes) { Digest digest; digest.add(bytes.get(), length); output << digest.finish(); }
            output << "\"}" << (i + 1 == std::size(movies) ? "\n" : ",\n");
        }
        output << "  ],\n  \"decoded\": [\n";
        for (size_t i = 0; i < 2; ++i) {
#ifdef SOFDEC_HOST_REFERENCE
            const std::string path = (source / movies[i]).string();
#else
            const std::string path = std::string("D:\\") + movies[i];
#endif
            std::unique_ptr<Sofdec, decltype(&sofdec_close)> movie(sofdec_open(path.c_str()), &sofdec_close);
            check(bool(movie), "Movie decode open failed");
            unsigned rate, channels; size_t samples;
            const int16_t *pcm = sofdec_audio(movie.get(), &rate, &channels, &samples);
            check(pcm && rate && channels && samples, "Missing decoded ADX audio");
            Digest audio; audio.add(pcm, samples * channels * sizeof(*pcm));
            Digest video; uint64_t frames = 0;
            const size_t pixels = size_t(sofdec_width(movie.get())) * sofdec_height(movie.get());
            std::vector<uint8_t> bgr(pixels * 3);
            while (const auto *frame = sofdec_next_frame(movie.get())) {
                // plm_frame_to_bgra writes B/G/R, NOT alpha. Hash every defined
                // color byte, not untouched malloc bytes in the fourth lane.
                for (size_t p = 0; p < pixels; ++p) {
                    bgr[p * 3] = frame[p * 4]; bgr[p * 3 + 1] = frame[p * 4 + 1]; bgr[p * 3 + 2] = frame[p * 4 + 2];
                }
                video.add(bgr.data(), bgr.size()); ++frames;
            }
            check(frames > 30, "Too few video frames");
            output << "    {\"path\":\"" << movies[i] << "\",\"width\":" << sofdec_width(movie.get())
                << ",\"height\":" << sofdec_height(movie.get()) << ",\"fps\":" << sofdec_fps(movie.get())
                << ",\"frames\":" << frames << ",\"rate\":" << rate << ",\"channels\":" << channels
                << ",\"samples\":" << samples << ",\"pcm_sha256\":\"" << audio.finish()
                << "\",\"bgr_sha256\":\"" << video.finish() << "\"}" << (i == 1 ? "\n" : ",\n");
            std::printf("Decoded %s: %llu frames, %zu ADX samples/channel\n", movies[i], (unsigned long long)frames, samples);
        }
        output << "  ]\n}\n"; check(bool(output), "Manifest write failed");
#ifndef SOFDEC_HOST_REFERENCE
        doa1u_image_unmount();
#endif
        return 0;
    } catch (const std::exception &e) { std::fprintf(stderr, "FAIL: %s\n", e.what()); return 1; }
}
