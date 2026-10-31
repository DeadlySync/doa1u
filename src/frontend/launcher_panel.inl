/* Included in graphics_settings.cpp: one settings model for startup and F1. */
int page = 0, device_type = 0, keyboard_player = 0;
ImFont* ui_font = nullptr, * heading_font = nullptr;
float ui_scale = 1;
bool focus_navigation = true;

void dependent_combo(const char* label, int* value, const char* items)
{
    ImGui::Indent(18 * ui_scale);
    settings_combo(label, value, items);
    ImGui::Unindent(18 * ui_scale);
}


void label_at(float x, float y, const char* text, float size = 20)
{
	ImGui::SetCursorPos(ImVec2(x * ui_scale, y * ui_scale));
	ImGui::PushFont(heading_font, size * ui_scale);
	ImGui::TextUnformatted(text);
	ImGui::PopFont();
}

void nav_icon(int icon, ImVec2 min)
{
	auto* d = ImGui::GetWindowDrawList();
	float s = ui_scale, x = min.x + 18 * s, y = min.y + 19 * s;
	ImU32 color = IM_COL32(235, 225, 206, 255);

	if (icon == 0)
	{
		d->AddRect(ImVec2(x, y), ImVec2(x + 24 * s, y + 16 * s), color, 0, 0, 1.5f * s);
		d->AddLine(ImVec2(x + 12 * s, y + 16 * s), ImVec2(x + 12 * s, y + 22 * s), color, 1.5f * s);
		d->AddLine(ImVec2(x + 5 * s, y + 22 * s), ImVec2(x + 19 * s, y + 22 * s), color, 1.5f * s);
	}
	else if (icon == 1)
	{
		d->AddRect(ImVec2(x, y), ImVec2(x + 24 * s, y + 22 * s), color, 0, 0, 1.5f * s);
		d->AddCircle(ImVec2(x + 17 * s, y + 6 * s), 2 * s, color);
		d->AddLine(ImVec2(x + 2 * s, y + 19 * s), ImVec2(x + 10 * s, y + 9 * s), color, 1.5f * s);
		d->AddLine(ImVec2(x + 10 * s, y + 9 * s), ImVec2(x + 21 * s, y + 19 * s), color, 1.5f * s);
	}
	else
	{
		d->AddRect(ImVec2(x, y + 2 * s), ImVec2(x + 27 * s, y + 20 * s), color, 6 * s, 0, 1.5f * s);
		d->AddLine(ImVec2(x + 4 * s, y + 10 * s), ImVec2(x + 12 * s, y + 10 * s), color, 1.5f * s);
		d->AddLine(ImVec2(x + 8 * s, y + 6 * s), ImVec2(x + 8 * s, y + 14 * s), color, 1.5f * s);
		d->AddCircleFilled(ImVec2(x + 20 * s, y + 8 * s), 1.7f * s, color);
		d->AddCircleFilled(ImVec2(x + 23 * s, y + 13 * s), 1.7f * s, color);
	}
}

void controls_page()
{
	const char* types[] = { "Keyboard", "PS4", "PS5", "Switch Pro", "Xbox" };
	for (int t = 0; t < HOST_TYPES; ++t)
	{
		if (t)
			ImGui::SameLine();

		ImGui::BeginDisabled(!host_input_available(t));

		if (t == device_type)
			ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(.32f, .24f, .40f, 1));

		if (ImGui::Button(types[t]))
		{
			device_type = t;
			host_capture_cancel();
		}

		if (t == device_type)
			ImGui::PopStyleColor();

		ImGui::EndDisabled();
	}

	ImGui::TextDisabled("Press a button to add Controler.");

	if (ImGui::BeginTable("Players", 2, ImGuiTableFlags_SizingStretchSame | ImGuiTableFlags_BordersInnerV))
	{
		for (int p = 0; p < 2; ++p)
		{
			ImGui::TableNextColumn();
			ImGui::PushID(p);
			ImGui::Text("P%d  |  %s", p + 1, host_input_type(p) < 0 ? "Press a button to join" : types[host_input_type(p)]);

			if (ImGui::Button("Restore default bindings"))
			{
				host_binding_defaults(p, device_type);
				host_capture_cancel();
				keyboard_player = p;
			}

			if (ImGui::BeginTable("Bindings", 2, ImGuiTableFlags_SizingStretchProp))
			{
				ImGui::TableSetupColumn("Target", ImGuiTableColumnFlags_WidthStretch, 1.2f);
				ImGui::TableSetupColumn("Binding", ImGuiTableColumnFlags_WidthStretch, 1.f);

				for (int i = 0; i < HOST_TARGETS; ++i)
				{
					ImGui::PushID(i);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::AlignTextToFramePadding();
					ImGui::TextUnformatted(host_target_name(i));
					ImGui::TableNextColumn();

					const bool capturing = host_capture_active() && capture_player == p && capture_row == i;
					const char* name = capturing ? "Press input..." : host_binding_name(device_type, host_binding_get(p, device_type, i));

					if (ImGui::Button(name, ImVec2(-1, 0)))
					{
						host_capture_begin(p, device_type, i);
						capture_player = p;
						capture_row = i;
						keyboard_player = p;
						capture_clicked = true;
					}

					if (ImGui::IsItemFocused() || ImGui::IsItemHovered())
						keyboard_player = p;

					ImGui::PopID();
				}
				ImGui::EndTable();
			}
			ImGui::PopID();
		}
		ImGui::EndTable();
	}
}

void dismiss(bool play)
{
	save_error = !save();
	notice = save_error ? "Could not save settings. Please check folder permissions." : "Settings saved.";

	if (save_error)
		return;

	if (play)
	{
		if (startup)startup = false;
		visible = false;
		host_capture_cancel();
		host_input_menu(0);
		wide.store(prefs.aspect);
	}
}

void panel()
{
	auto& io = ImGui::GetIO();
	ui_scale = std::min(io.DisplaySize.x / 1280.f, io.DisplaySize.y / 720.f);
	ui_scale = std::max(.4f, ui_scale);

	float w = io.DisplaySize.x, h = io.DisplaySize.y;
	launcher_art_draw(w, h);

	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowRounding = 0;
	style.ChildRounding = 9 * ui_scale;
	style.FrameRounding = 6 * ui_scale;
	style.FrameBorderSize = 1;
	style.FramePadding = ImVec2(10 * ui_scale, 7 * ui_scale);
	style.ItemSpacing = ImVec2(10 * ui_scale, 12 * ui_scale);

	ImGui::PushFont(ui_font, 17 * ui_scale);
	ImGui::SetNextWindowPos(ImVec2(0, 0));
	ImGui::SetNextWindowSize(io.DisplaySize);
	ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0, 0, 0, 0));

	ImGui::Begin("Dead or Alive: ULTIMATE PC Settings", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoBringToFrontOnFocus);
	label_at(45, 140, "P C  S E T T I N G S", 17);
	label_at(45, 165, "Pressing ESC will restart the game.", 12);

	const Preferences before = prefs;
	float navX = w * .022f, navY = h * .265f, navW = w * .19f, panelX = w * .22f, panelW = w * .56f, bottom = h * .87f;

	ImGui::SetCursorPos(ImVec2(navX, navY));
	ImGui::PushStyleColor(ImGuiCol_ChildBg, ImVec4(.055f, .055f, .065f, .82f));
	ImGui::BeginChild("Navigation", ImVec2(navW, bottom - navY - 15 * ui_scale), ImGuiChildFlags_Borders | ImGuiChildFlags_NavFlattened);

	const char* pages[] = { "Display", "Graphics", "Controls" };
	for (int i = 0; i < 3; ++i)
	{
		bool selected = i == page;
		if (selected)
			ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(.32f, .24f, .40f, 1));

		if (selected && focus_navigation) ImGui::SetKeyboardFocusHere();
		if (ImGui::Button(pages[i], ImVec2(-1, 58 * ui_scale)))
		{
			page = i;
			host_capture_cancel();
		}

		nav_icon(i, ImGui::GetItemRectMin());

		if (selected)
			ImGui::PopStyleColor();
	}

	focus_navigation = false;
	ImGui::EndChild();
	ImGui::SetCursorPos(ImVec2(panelX, navY));

	ImGui::BeginChild("Settings content", ImVec2(panelW, bottom - navY - 15 * ui_scale), ImGuiChildFlags_Borders | ImGuiChildFlags_NavFlattened);
	ImGui::PushFont(heading_font, 34 * ui_scale);
	ImGui::TextUnformatted(pages[page]);
	ImGui::PopFont();
	ImGui::TextDisabled("%s", page == 0 ? "Window, monitor and presentation." : page == 1 ? "Rendering quality and texture filtering." : "Assign and customize each player's controls.");
	ImGui::Separator();
	ImGui::Spacing();

	if (page == 0)
	{
		ImGui::PushStyleColor(ImGuiCol_ChildBg, ImVec4(.10f, .10f, .11f, .70f));
		ImGui::BeginChild("Aspect row", ImVec2(0, 78 * ui_scale), ImGuiChildFlags_Borders | ImGuiChildFlags_NavFlattened);
		ImGui::SetCursorPos(ImVec2(14 * ui_scale, 20 * ui_scale));
		ImGui::TextUnformatted("Aspect Ratio");

		float col = ImGui::GetWindowWidth() * .51f;
		ImGui::SetCursorPos(ImVec2(col, 10 * ui_scale));

		for (int a = 0; a < 2; ++a)
		{
			if (a)
				ImGui::SameLine(0, 8 * ui_scale);

			if (prefs.aspect == a)
				ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(.32f, .24f, .40f, 1));

			bool selected = prefs.aspect == a;
			if (ImGui::Button(a ? "16:9" : "4:3", ImVec2((ImGui::GetWindowWidth() - col - 20 * ui_scale) * .5f, 39 * ui_scale)))
			{
				prefs.aspect = a;
				if (!startup)
					wide.store(a);
			}

			if (selected)
				ImGui::PopStyleColor();
		}

		ImGui::SetCursorPos(ImVec2(14 * ui_scale, 46 * ui_scale));
		ImGui::PushFont(ui_font, 11 * ui_scale);
		ImGui::TextUnformatted("Menus, HUD and FMVs retain 4:3 proportions.");
		ImGui::PopFont();
		ImGui::EndChild();

		ImGui::BeginChild("Size row", ImVec2(0, 60 * ui_scale), ImGuiChildFlags_Borders | ImGuiChildFlags_NavFlattened);
		ImGui::SetCursorPos(ImVec2(14 * ui_scale, 19 * ui_scale));
		ImGui::TextUnformatted("Window size");
		ImGui::SetCursorPos(ImVec2(col, 14 * ui_scale));
		ImGui::SetNextItemWidth(-12 * ui_scale);

		const Size* sizes = prefs.aspect ? sizes169 : sizes43;
		int& index = prefs.aspect ? prefs.window169 : prefs.window43;
		char size_label[60];
		snprintf(size_label, sizeof size_label, "%d x %d", sizes[index].w, sizes[index].h);

		if (ImGui::BeginCombo("##Window size", size_label))
		{
			int count = prefs.aspect ? (int)IM_ARRAYSIZE(sizes169) : 5;

			for (int i = 0; i < count; ++i)
			{
				snprintf(size_label, sizeof size_label, "%d x %d", sizes[i].w, sizes[i].h);

				ImGui::BeginDisabled(!fits(sizes[i]));
				if (ImGui::Selectable(size_label, index == i))
					index = i;

				ImGui::EndDisabled();
			}
			ImGui::EndCombo();
		}
		ImGui::EndChild();

        ImGui::BeginChild("Internal resolution row", ImVec2(0, 60 * ui_scale), ImGuiChildFlags_Borders | ImGuiChildFlags_NavFlattened);
        ImGui::SetCursorPos(ImVec2(14 * ui_scale, 19 * ui_scale));
        ImGui::TextUnformatted("Internal Resolution");
        ImGui::SetCursorPos(ImVec2(col, 14 * ui_scale));
        ImGui::SetNextItemWidth(-12 * ui_scale);
        int& render_index = prefs.aspect ? prefs.render169 : prefs.render43;
        snprintf(size_label, sizeof size_label, "%d x %d", sizes[render_index].w, sizes[render_index].h);
        if (ImGui::BeginCombo("##Internal resolution", size_label))
        {
            const int count = prefs.aspect ? (int)IM_ARRAYSIZE(sizes169) : (int)IM_ARRAYSIZE(sizes43);
            for (int i = 0; i < count; ++i)
            {
                snprintf(size_label, sizeof size_label, "%d x %d", sizes[i].w, sizes[i].h);
                if (ImGui::Selectable(size_label, render_index == i)) render_index = i;
            }
            ImGui::EndCombo();
        }
        ImGui::EndChild();

		ImGui::BeginChild("Monitor row", ImVec2(0, 60 * ui_scale), ImGuiChildFlags_Borders | ImGuiChildFlags_NavFlattened);
		ImGui::SetCursorPos(ImVec2(14 * ui_scale, 19 * ui_scale));
		ImGui::TextUnformatted("Monitor");
		ImGui::SetCursorPos(ImVec2(col, 14 * ui_scale));
		ImGui::SetNextItemWidth(-12 * ui_scale);
		std::string current = "Primary monitor";

		for (auto& m : monitors)
		{
			if (m.key == prefs.monitor || (prefs.monitor.empty() && m.label.find("(Primary)") != std::string::npos))
				current = m.label;
		}

		if (ImGui::BeginCombo("##Monitor", current.c_str()))
		{
			for (auto& m : monitors)
			{
				ImGui::PushID(m.key.c_str());

				if (ImGui::Selectable(m.label.c_str(), m.key == prefs.monitor))
					prefs.monitor = m.key;

				ImGui::PopID();
			}
			ImGui::EndCombo();
		}

		ImGui::EndChild();
		ImGui::PopStyleColor();
	}
	else if (page == 1)
	{
        combo_label("Rendering backend");
        const char* backends[] = {"DirectX 11", "DirectX 12", "Vulkan"};
        const float backend_width = (ImGui::GetContentRegionAvail().x - 2 * style.ItemSpacing.x) / 3;
        for (int backend = 0; backend < 3; ++backend)
        {
            if (backend) ImGui::SameLine();
            const bool selected = prefs.backend == backend;
            if (selected) ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(.32f, .24f, .40f, 1));
            if (ImGui::Button(backends[backend], ImVec2(backend_width, 0)) && !selected)
            {
                prefs.backend = backend;
                if (!startup) ImGui::OpenPopup("Restart required");
            }
            if (selected) ImGui::PopStyleColor();
        }

		settings_combo("3D texture filtering", &prefs.filtering, "Nearest\0Bilinear\0Trilinear\0Anisotropic\0");

		if (prefs.filtering == 3)
			dependent_combo("Anisotropy", &prefs.anisotropy, "2x\0" "4x\0" "8x\0" "16x\0");

        const std::string filtering_id = combo_label("2D filtering");
        const float filtering_x = ImGui::GetCursorPosX();
        ImGui::Checkbox(filtering_id.c_str(), &prefs.lanczos2d);
        ImGui::BeginDisabled(!prefs.lanczos2d);
        ImGui::SameLine();
        ImGui::TextUnformatted("Anti-ringing strength");
        ImGui::SetCursorPosX(filtering_x);
        ImGui::SetNextItemWidth(-1);
        ImGui::SliderInt("##Anti-ringing strength", &prefs.lanczos_ar, 0, 100, "%d%%");
        ImGui::EndDisabled();

		settings_combo("Anti-aliasing", &prefs.aa, "Off\0SSAA\0MSAA\0FXAA\0SMAA\0");

		if (prefs.aa == 1)
			dependent_combo("SSAA quality", &prefs.ssaa, "2x\0" "4x\0");

		if (prefs.aa == 2)
			dependent_combo("MSAA quality", &prefs.msaa, "2x\0" "4x\0" "8x\0");

		if (ImGui::BeginPopupModal("Restart required", nullptr, ImGuiWindowFlags_AlwaysAutoResize))
		{
			ImGui::TextUnformatted("Changing the rendering backend requires restarting the game.\nThe selected backend will be used on the next launch.");

			if (ImGui::Button("OK"))
				ImGui::CloseCurrentPopup();

			ImGui::EndPopup();
		}
	}
	else
		controls_page();

	ImGui::EndChild();
	ImGui::PopStyleColor();

	if (prefs.differs(before))
	{
		notice = "Unsaved changes.";
		save_error = false;
	}

	host_input_keyboard_player(keyboard_player);

	if (host_capture_active() && ImGui::IsMouseClicked(0) && !capture_clicked)
		host_capture_cancel();

	capture_clicked = false;
	
	auto* draw = ImGui::GetWindowDrawList();
	draw->AddLine(ImVec2(w * .03f, bottom), ImVec2(w * .975f, bottom), IM_COL32(105, 99, 96, 180));
	
	ImGui::SetCursorPos(ImVec2(w * .03f, bottom + 30 * ui_scale));
	ImGui::PushFont(heading_font, 13 * ui_scale);
	ImGui::TextWrapped("%s", notice.empty() ? "Play saves your settings before starting the game." : notice.c_str());
	ImGui::PopFont();
	ImGui::SetCursorPos(ImVec2(w * .65f, bottom + 12 * ui_scale));
	
	if (ImGui::Button("Quit", ImVec2(w * .09f, 50 * ui_scale)))
		PostMessageW(hwnd, WM_CLOSE, 0, 0);

	ImGui::SameLine();
	
	if (ImGui::Button("Save", ImVec2(w * .09f, 50 * ui_scale)))
		dismiss(false);

	ImGui::SameLine();
	ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(.73f, .55f, .28f, 1));
	ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(.09f, .065f, .035f, 1));
	
	if (ImGui::Button("Play", ImVec2(w * .115f, 50 * ui_scale)))
		dismiss(true);

	ImGui::PopStyleColor(2);
	ImGui::End();
	ImGui::PopStyleColor();
	ImGui::PopFont();
}
