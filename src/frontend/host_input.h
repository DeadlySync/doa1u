#pragma once
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif

	enum
	{
		HOST_TARGETS = 24, 
		HOST_TYPES = 5
	};

	void host_input_init(void);
	void host_input_update(void);
	int host_input_key(int key, int down);
	void host_input_clear(void);
	void host_input_menu(int visible);
	int host_input_available(int type);
	int host_input_type(int player);
	int host_input_connected(int player);
	int host_input_disconnected(void);
	int host_input_read(unsigned player, void* state);
	int host_input_rumble(unsigned player, unsigned left, unsigned right);
	int host_binding_get(int player, int type, int target);
	void host_binding_set(int player, int type, int target, int value);
	void host_binding_undo(int player, int type);
	void host_binding_defaults(int player, int type);
	const char* host_target_name(int target);
	const char* host_binding_name(int type, int value);
	void host_capture_begin(int player, int type, int target);
	void host_capture_cancel(void);
	int host_capture_active(void);
	int host_input_load(const wchar_t* path);
	void host_input_focus(int focused);
	int host_input_serialize(char* buffer, int capacity);
	void host_input_navigation(void);
	void host_input_keyboard_player(int player);

#ifdef __cplusplus
}
#endif
