
#if defined(ENABLE_SDL)
BEGIN_ENUM(SDLControllerAxis, int32_t)
	EV(LeftX, SDL_CONTROLLER_AXIS_LEFTX)
	EV(LeftY, SDL_CONTROLLER_AXIS_LEFTY)
	EV(RightX, SDL_CONTROLLER_AXIS_RIGHTX)
	EV(RightY, SDL_CONTROLLER_AXIS_RIGHTY)
	EV(TriggerLeft, SDL_CONTROLLER_AXIS_TRIGGERLEFT)
	EV(TriggerRight, SDL_CONTROLLER_AXIS_TRIGGERRIGHT)
END_ENUM()

BEGIN_ENUM(SDLControllerButton, int32_t)
	EV(A, SDL_CONTROLLER_BUTTON_A)
	EV(B, SDL_CONTROLLER_BUTTON_B)
	EV(X, SDL_CONTROLLER_BUTTON_X)
	EV(Y, SDL_CONTROLLER_BUTTON_Y)
	EV(Back, SDL_CONTROLLER_BUTTON_BACK)
	EV(Guide, SDL_CONTROLLER_BUTTON_GUIDE)
	EV(Start, SDL_CONTROLLER_BUTTON_START)
	EV(LeftStick, SDL_CONTROLLER_BUTTON_LEFTSTICK)
	EV(RightStick, SDL_CONTROLLER_BUTTON_RIGHTSTICK)
	EV(LeftShoulder, SDL_CONTROLLER_BUTTON_LEFTSHOULDER)
	EV(RightShoulder, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)
	EV(DPadUp, SDL_CONTROLLER_BUTTON_DPAD_UP)
	EV(DPadDown, SDL_CONTROLLER_BUTTON_DPAD_DOWN)
	EV(DPadLeft, SDL_CONTROLLER_BUTTON_DPAD_LEFT)
	EV(DPadRight, SDL_CONTROLLER_BUTTON_DPAD_RIGHT)
	EV(Misc1, SDL_CONTROLLER_BUTTON_MISC1)
	EV(Paddle1, SDL_CONTROLLER_BUTTON_PADDLE1)
	EV(Paddle2, SDL_CONTROLLER_BUTTON_PADDLE2)
	EV(Paddle3, SDL_CONTROLLER_BUTTON_PADDLE3)
	EV(Paddle4, SDL_CONTROLLER_BUTTON_PADDLE4)
	EV(Touchpad, SDL_CONTROLLER_BUTTON_TOUCHPAD)
END_ENUM()

BEGIN_ENUM(SDLKeyEvent, int32_t)
	E(KeyDown)
	E(KeyUp)
END_ENUM()

BEGIN_BITMASK(SDLKeyModifier, int32_t)
	EV(LShift, KMOD_LSHIFT)
	EV(RShift, KMOD_RSHIFT)
	EV(LCtrl, KMOD_LCTRL)
	EV(RCtrl, KMOD_RCTRL)
	EV(LAlt, KMOD_LALT)
	EV(RAlt, KMOD_RALT)
	EV(LGui, KMOD_LGUI)
	EV(RGui, KMOD_RGUI)
	EV(Num, KMOD_NUM)
	EV(Caps, KMOD_CAPS)
	EV(Mode, KMOD_MODE)
	EV(Scroll, KMOD_SCROLL)
END_ENUM()

BEGIN_ENUM(SDLScanCode, int32_t)
	EV(UNKNOWN, SDL_SCANCODE_UNKNOWN)

	EV(A, SDL_SCANCODE_A)
	EV(B, SDL_SCANCODE_B)
	EV(C, SDL_SCANCODE_C)
	EV(D, SDL_SCANCODE_D)
	EV(E, SDL_SCANCODE_E)
	EV(F, SDL_SCANCODE_F)
	EV(G, SDL_SCANCODE_G)
	EV(H, SDL_SCANCODE_H)
	EV(I, SDL_SCANCODE_I)
	EV(J, SDL_SCANCODE_J)
	EV(K, SDL_SCANCODE_K)
	EV(L, SDL_SCANCODE_L)
	EV(M, SDL_SCANCODE_M)
	EV(N, SDL_SCANCODE_N)
	EV(O, SDL_SCANCODE_O)
	EV(P, SDL_SCANCODE_P)
	EV(Q, SDL_SCANCODE_Q)
	EV(R, SDL_SCANCODE_R)
	EV(S, SDL_SCANCODE_S)
	EV(T, SDL_SCANCODE_T)
	EV(U, SDL_SCANCODE_U)
	EV(V, SDL_SCANCODE_V)
	EV(W, SDL_SCANCODE_W)
	EV(X, SDL_SCANCODE_X)
	EV(Y, SDL_SCANCODE_Y)
	EV(Z, SDL_SCANCODE_Z)

	EV(NUM_1, SDL_SCANCODE_1)
	EV(NUM_2, SDL_SCANCODE_2)
	EV(NUM_3, SDL_SCANCODE_3)
	EV(NUM_4, SDL_SCANCODE_4)
	EV(NUM_5, SDL_SCANCODE_5)
	EV(NUM_6, SDL_SCANCODE_6)
	EV(NUM_7, SDL_SCANCODE_7)
	EV(NUM_8, SDL_SCANCODE_8)
	EV(NUM_9, SDL_SCANCODE_9)
	EV(NUM_0, SDL_SCANCODE_0)

	EV(RETURN, SDL_SCANCODE_RETURN)
	EV(ESCAPE, SDL_SCANCODE_ESCAPE)
	EV(BACKSPACE, SDL_SCANCODE_BACKSPACE)
	EV(TAB, SDL_SCANCODE_TAB)
	EV(SPACE, SDL_SCANCODE_SPACE)

	EV(MINUS, SDL_SCANCODE_MINUS)
	EV(EQUALS, SDL_SCANCODE_EQUALS)
	EV(LEFTBRACKET, SDL_SCANCODE_LEFTBRACKET)
	EV(RIGHTBRACKET, SDL_SCANCODE_RIGHTBRACKET)
	EV(BACKSLASH, SDL_SCANCODE_BACKSLASH) 
	EV(NONUSHASH, SDL_SCANCODE_NONUSHASH) 
	EV(SEMICOLON, SDL_SCANCODE_SEMICOLON)
	EV(APOSTROPHE, SDL_SCANCODE_APOSTROPHE)
	EV(GRAVE, SDL_SCANCODE_GRAVE)
	EV(COMMA, SDL_SCANCODE_COMMA)
	EV(PERIOD, SDL_SCANCODE_PERIOD)
	EV(SLASH, SDL_SCANCODE_SLASH)

	EV(CAPSLOCK, SDL_SCANCODE_CAPSLOCK)

	EV(F1, SDL_SCANCODE_F1)
	EV(F2, SDL_SCANCODE_F2)
	EV(F3, SDL_SCANCODE_F3)
	EV(F4, SDL_SCANCODE_F4)
	EV(F5, SDL_SCANCODE_F5)
	EV(F6, SDL_SCANCODE_F6)
	EV(F7, SDL_SCANCODE_F7)
	EV(F8, SDL_SCANCODE_F8)
	EV(F9, SDL_SCANCODE_F9)
	EV(F10, SDL_SCANCODE_F10)
	EV(F11, SDL_SCANCODE_F11)
	EV(F12, SDL_SCANCODE_F12)

	EV(PRINTSCREEN, SDL_SCANCODE_PRINTSCREEN)
	EV(SCROLLLOCK, SDL_SCANCODE_SCROLLLOCK)
	EV(PAUSE, SDL_SCANCODE_PAUSE)
	EV(INSERT, SDL_SCANCODE_INSERT) 
	EV(HOME, SDL_SCANCODE_HOME)
	EV(PAGEUP, SDL_SCANCODE_PAGEUP)
	EV(DEL, SDL_SCANCODE_DELETE)
	EV(END, SDL_SCANCODE_END)
	EV(PAGEDOWN, SDL_SCANCODE_PAGEDOWN)
	EV(RIGHT, SDL_SCANCODE_RIGHT)
	EV(LEFT, SDL_SCANCODE_LEFT)
	EV(DOWN, SDL_SCANCODE_DOWN)
	EV(UP, SDL_SCANCODE_UP)

	EV(NUMLOCKCLEAR, SDL_SCANCODE_NUMLOCKCLEAR)
	EV(KP_DIVIDE, SDL_SCANCODE_KP_DIVIDE)
	EV(KP_MULTIPLY, SDL_SCANCODE_KP_MULTIPLY)
	EV(KP_MINUS, SDL_SCANCODE_KP_MINUS)
	EV(KP_PLUS, SDL_SCANCODE_KP_PLUS)
	EV(KP_ENTER, SDL_SCANCODE_KP_ENTER)
	EV(KP_1, SDL_SCANCODE_KP_1)
	EV(KP_2, SDL_SCANCODE_KP_2)
	EV(KP_3, SDL_SCANCODE_KP_3)
	EV(KP_4, SDL_SCANCODE_KP_4)
	EV(KP_5, SDL_SCANCODE_KP_5)
	EV(KP_6, SDL_SCANCODE_KP_6)
	EV(KP_7, SDL_SCANCODE_KP_7)
	EV(KP_8, SDL_SCANCODE_KP_8)
	EV(KP_9, SDL_SCANCODE_KP_9)
	EV(KP_0, SDL_SCANCODE_KP_0)
	EV(KP_PERIOD, SDL_SCANCODE_KP_PERIOD)

	EV(NONUSBACKSLASH, SDL_SCANCODE_NONUSBACKSLASH)
	EV(APPLICATION, SDL_SCANCODE_APPLICATION)
	EV(POWER, SDL_SCANCODE_POWER)
	EV(KP_EQUALS, SDL_SCANCODE_KP_EQUALS)
	EV(F13, SDL_SCANCODE_F13)
	EV(F14, SDL_SCANCODE_F14)
	EV(F15, SDL_SCANCODE_F15)
	EV(F16, SDL_SCANCODE_F16)
	EV(F17, SDL_SCANCODE_F17)
	EV(F18, SDL_SCANCODE_F18)
	EV(F19, SDL_SCANCODE_F19)
	EV(F20, SDL_SCANCODE_F20)
	EV(F21, SDL_SCANCODE_F21)
	EV(F22, SDL_SCANCODE_F22)
	EV(F23, SDL_SCANCODE_F23)
	EV(F24, SDL_SCANCODE_F24)
	EV(EXECUTE, SDL_SCANCODE_EXECUTE)
	EV(HELP, SDL_SCANCODE_HELP)
	EV(MENU, SDL_SCANCODE_MENU)
	EV(SELECT, SDL_SCANCODE_SELECT)
	EV(STOP, SDL_SCANCODE_STOP)
	EV(AGAIN, SDL_SCANCODE_AGAIN)
	EV(UNDO, SDL_SCANCODE_UNDO)
	EV(CUT, SDL_SCANCODE_CUT)
	EV(COPY, SDL_SCANCODE_COPY)
	EV(PASTE, SDL_SCANCODE_PASTE)
	EV(FIND, SDL_SCANCODE_FIND)
	EV(MUTE, SDL_SCANCODE_MUTE)
	EV(VOLUMEUP, SDL_SCANCODE_VOLUMEUP)
	EV(VOLUMEDOWN, SDL_SCANCODE_VOLUMEDOWN)
	EV(KP_COMMA, SDL_SCANCODE_KP_COMMA)
	EV(KP_EQUALSAS400, SDL_SCANCODE_KP_EQUALSAS400)

	EV(INTERNATIONAL1, SDL_SCANCODE_INTERNATIONAL1)
	EV(INTERNATIONAL2, SDL_SCANCODE_INTERNATIONAL2)
	EV(INTERNATIONAL3, SDL_SCANCODE_INTERNATIONAL3)
	EV(INTERNATIONAL4, SDL_SCANCODE_INTERNATIONAL4)
	EV(INTERNATIONAL5, SDL_SCANCODE_INTERNATIONAL5)
	EV(INTERNATIONAL6, SDL_SCANCODE_INTERNATIONAL6)
	EV(INTERNATIONAL7, SDL_SCANCODE_INTERNATIONAL7)
	EV(INTERNATIONAL8, SDL_SCANCODE_INTERNATIONAL8)
	EV(INTERNATIONAL9, SDL_SCANCODE_INTERNATIONAL9)
	EV(LANG1, SDL_SCANCODE_LANG1) 
	EV(LANG2, SDL_SCANCODE_LANG2) 
	EV(LANG3, SDL_SCANCODE_LANG3) 
	EV(LANG4, SDL_SCANCODE_LANG4) 
	EV(LANG5, SDL_SCANCODE_LANG5) 
	EV(LANG6, SDL_SCANCODE_LANG6) 
	EV(LANG7, SDL_SCANCODE_LANG7) 
	EV(LANG8, SDL_SCANCODE_LANG8) 
	EV(LANG9, SDL_SCANCODE_LANG9) 

	EV(ALTERASE, SDL_SCANCODE_ALTERASE)
	EV(SYSREQ, SDL_SCANCODE_SYSREQ)
	EV(CANCEL, SDL_SCANCODE_CANCEL)
	EV(CLEAR, SDL_SCANCODE_CLEAR)
	EV(PRIOR, SDL_SCANCODE_PRIOR)
	EV(RETURN2, SDL_SCANCODE_RETURN2)
	EV(SEPARATOR, SDL_SCANCODE_SEPARATOR)
	EV(KEY_OUT, SDL_SCANCODE_OUT)
	EV(OPER, SDL_SCANCODE_OPER)
	EV(CLEARAGAIN, SDL_SCANCODE_CLEARAGAIN)
	EV(CRSEL, SDL_SCANCODE_CRSEL)
	EV(EXSEL, SDL_SCANCODE_EXSEL)

	EV(KP_00, SDL_SCANCODE_KP_00)
	EV(KP_000, SDL_SCANCODE_KP_000)
	EV(THOUSANDSSEPARATOR, SDL_SCANCODE_THOUSANDSSEPARATOR)
	EV(DECIMALSEPARATOR, SDL_SCANCODE_DECIMALSEPARATOR)
	EV(CURRENCYUNIT, SDL_SCANCODE_CURRENCYUNIT)
	EV(CURRENCYSUBUNIT, SDL_SCANCODE_CURRENCYSUBUNIT)
	EV(KP_LEFTPAREN, SDL_SCANCODE_KP_LEFTPAREN)
	EV(KP_RIGHTPAREN, SDL_SCANCODE_KP_RIGHTPAREN)
	EV(KP_LEFTBRACE, SDL_SCANCODE_KP_LEFTBRACE)
	EV(KP_RIGHTBRACE, SDL_SCANCODE_KP_RIGHTBRACE)
	EV(KP_TAB, SDL_SCANCODE_KP_TAB)
	EV(KP_BACKSPACE, SDL_SCANCODE_KP_BACKSPACE)
	EV(KP_A, SDL_SCANCODE_KP_A)
	EV(KP_B, SDL_SCANCODE_KP_B)
	EV(KP_C, SDL_SCANCODE_KP_C)
	EV(KP_D, SDL_SCANCODE_KP_D)
	EV(KP_E, SDL_SCANCODE_KP_E)
	EV(KP_F, SDL_SCANCODE_KP_F)
	EV(KP_XOR, SDL_SCANCODE_KP_XOR)
	EV(KP_POWER, SDL_SCANCODE_KP_POWER)
	EV(KP_PERCENT, SDL_SCANCODE_KP_PERCENT)
	EV(KP_LESS, SDL_SCANCODE_KP_LESS)
	EV(KP_GREATER, SDL_SCANCODE_KP_GREATER)
	EV(KP_AMPERSAND, SDL_SCANCODE_KP_AMPERSAND)
	EV(KP_DBLAMPERSAND, SDL_SCANCODE_KP_DBLAMPERSAND)
	EV(KP_VERTICALBAR, SDL_SCANCODE_KP_VERTICALBAR)
	EV(KP_DBLVERTICALBAR, SDL_SCANCODE_KP_DBLVERTICALBAR)
	EV(KP_COLON, SDL_SCANCODE_KP_COLON)
	EV(KP_HASH, SDL_SCANCODE_KP_HASH)
	EV(KP_SPACE, SDL_SCANCODE_KP_SPACE)
	EV(KP_AT, SDL_SCANCODE_KP_AT)
	EV(KP_EXCLAM, SDL_SCANCODE_KP_EXCLAM)
	EV(KP_MEMSTORE, SDL_SCANCODE_KP_MEMSTORE)
	EV(KP_MEMRECALL, SDL_SCANCODE_KP_MEMRECALL)
	EV(KP_MEMCLEAR, SDL_SCANCODE_KP_MEMCLEAR)
	EV(KP_MEMADD, SDL_SCANCODE_KP_MEMADD)
	EV(KP_MEMSUBTRACT, SDL_SCANCODE_KP_MEMSUBTRACT)
	EV(KP_MEMMULTIPLY, SDL_SCANCODE_KP_MEMMULTIPLY)
	EV(KP_MEMDIVIDE, SDL_SCANCODE_KP_MEMDIVIDE)
	EV(KP_PLUSMINUS, SDL_SCANCODE_KP_PLUSMINUS)
	EV(KP_CLEAR, SDL_SCANCODE_KP_CLEAR)
	EV(KP_CLEARENTRY, SDL_SCANCODE_KP_CLEARENTRY)
	EV(KP_BINARY, SDL_SCANCODE_KP_BINARY)
	EV(KP_OCTAL, SDL_SCANCODE_KP_OCTAL)
	EV(KP_DECIMAL, SDL_SCANCODE_KP_DECIMAL)
	EV(KP_HEXADECIMAL, SDL_SCANCODE_KP_HEXADECIMAL)

	EV(LCTRL, SDL_SCANCODE_LCTRL)
	EV(LSHIFT, SDL_SCANCODE_LSHIFT)
	EV(LALT, SDL_SCANCODE_LALT) 
	EV(LGUI, SDL_SCANCODE_LGUI) 
	EV(RCTRL, SDL_SCANCODE_RCTRL)
	EV(RSHIFT, SDL_SCANCODE_RSHIFT)
	EV(RALT, SDL_SCANCODE_RALT) 
	EV(RGUI, SDL_SCANCODE_RGUI) 

	EV(MODE, SDL_SCANCODE_MODE)

	EV(AUDIONEXT, SDL_SCANCODE_AUDIONEXT)
	EV(AUDIOPREV, SDL_SCANCODE_AUDIOPREV)
	EV(AUDIOSTOP, SDL_SCANCODE_AUDIOSTOP)
	EV(AUDIOPLAY, SDL_SCANCODE_AUDIOPLAY)
	EV(AUDIOMUTE, SDL_SCANCODE_AUDIOMUTE)
	EV(MEDIASELECT, SDL_SCANCODE_MEDIASELECT)
	EV(WWW, SDL_SCANCODE_WWW)             
	EV(MAIL, SDL_SCANCODE_MAIL)
	EV(CALCULATOR, SDL_SCANCODE_CALCULATOR)      
	EV(COMPUTER, SDL_SCANCODE_COMPUTER)
	EV(AC_SEARCH, SDL_SCANCODE_AC_SEARCH)       
	EV(AC_HOME, SDL_SCANCODE_AC_HOME)         
	EV(AC_BACK, SDL_SCANCODE_AC_BACK)         
	EV(AC_FORWARD, SDL_SCANCODE_AC_FORWARD)      
	EV(AC_STOP, SDL_SCANCODE_AC_STOP)         
	EV(AC_REFRESH, SDL_SCANCODE_AC_REFRESH)      
	EV(AC_BOOKMARKS, SDL_SCANCODE_AC_BOOKMARKS)    

	EV(BRIGHTNESSDOWN, SDL_SCANCODE_BRIGHTNESSDOWN)
	EV(BRIGHTNESSUP, SDL_SCANCODE_BRIGHTNESSUP)
	EV(DISPLAYSWITCH, SDL_SCANCODE_DISPLAYSWITCH)
	EV(KBDILLUMTOGGLE, SDL_SCANCODE_KBDILLUMTOGGLE)
	EV(KBDILLUMDOWN, SDL_SCANCODE_KBDILLUMDOWN)
	EV(KBDILLUMUP, SDL_SCANCODE_KBDILLUMUP)
	EV(EJECT, SDL_SCANCODE_EJECT)
	EV(SLEEP, SDL_SCANCODE_SLEEP)
	EV(APP1, SDL_SCANCODE_APP1)
	EV(APP2, SDL_SCANCODE_APP2)

	EV(AUDIOREWIND, SDL_SCANCODE_AUDIOREWIND)
	EV(AUDIOFASTFORWARD, SDL_SCANCODE_AUDIOFASTFORWARD)

	EV(SOFTLEFT, SDL_SCANCODE_SOFTLEFT)
	EV(SOFTRIGHT, SDL_SCANCODE_SOFTRIGHT)
	EV(CALL, SDL_SCANCODE_CALL)
	EV(ENDCALL, SDL_SCANCODE_ENDCALL)
END_ENUM()
#endif

#if defined(ENABLE_IMGUI)

BEGIN_ENUM(GuiStyleVar, int32_t)
	EV(Alpha, (int32_t)ImGuiStyleVar_Alpha)
	EV(DisabledAlpha, (int32_t)ImGuiStyleVar_DisabledAlpha)
	EV(WindowPadding, (int32_t)ImGuiStyleVar_WindowPadding)
	EV(WindowRounding, (int32_t)ImGuiStyleVar_WindowRounding)
	EV(WindowBorderSize, (int32_t)ImGuiStyleVar_WindowBorderSize)
	EV(WindowMinSize, (int32_t)ImGuiStyleVar_WindowMinSize)
	EV(WindowTitleAlign, (int32_t)ImGuiStyleVar_WindowTitleAlign)
	EV(ChildRounding, (int32_t)ImGuiStyleVar_ChildRounding)
	EV(ChildBorderSize, (int32_t)ImGuiStyleVar_ChildBorderSize)
	EV(PopupRounding, (int32_t)ImGuiStyleVar_PopupRounding)
	EV(PopupBorderSize, (int32_t)ImGuiStyleVar_PopupBorderSize)
	EV(FramePadding, (int32_t)ImGuiStyleVar_FramePadding)
	EV(FrameRounding, (int32_t)ImGuiStyleVar_FrameRounding)
	EV(FrameBorderSize, (int32_t)ImGuiStyleVar_FrameBorderSize)
	EV(ItemSpacing, (int32_t)ImGuiStyleVar_ItemSpacing)
	EV(ItemInnerSpacing, (int32_t)ImGuiStyleVar_ItemInnerSpacing)
	EV(IndentSpacing, (int32_t)ImGuiStyleVar_IndentSpacing)
	EV(CellPadding, (int32_t)ImGuiStyleVar_CellPadding)
	EV(ScrollbarSize, (int32_t)ImGuiStyleVar_ScrollbarSize)
	EV(ScrollbarRounding, (int32_t)ImGuiStyleVar_ScrollbarRounding)
	EV(GrabMinSize, (int32_t)ImGuiStyleVar_GrabMinSize)
	EV(GrabRounding, (int32_t)ImGuiStyleVar_GrabRounding)
	EV(TabRounding, (int32_t)ImGuiStyleVar_TabRounding)
	EV(TabBarBorderSize, (int32_t)ImGuiStyleVar_TabBarBorderSize)
	EV(ButtonTextAlign, (int32_t)ImGuiStyleVar_ButtonTextAlign)
	EV(SelectableTextAlign, (int32_t)ImGuiStyleVar_SelectableTextAlign)
	EV(SeparatorTextBorderSize, (int32_t)ImGuiStyleVar_SeparatorTextBorderSize)
	EV(SeparatorTextAlign, (int32_t)ImGuiStyleVar_SeparatorTextAlign)
	EV(SeparatorTextPadding, (int32_t)ImGuiStyleVar_SeparatorTextPadding)
END_ENUM()

BEGIN_ENUM(GuiColor, int32_t)
	EV(Text, (int32_t)ImGuiCol_Text)
	EV(TextDisabled, (int32_t)ImGuiCol_TextDisabled)
	EV(WindowBg, (int32_t)ImGuiCol_WindowBg)
	EV(ChildBg, (int32_t)ImGuiCol_ChildBg)
	EV(PopupBg, (int32_t)ImGuiCol_PopupBg)
	EV(Border, (int32_t)ImGuiCol_Border)
	EV(BorderShadow, (int32_t)ImGuiCol_BorderShadow)
	EV(FrameBg, (int32_t)ImGuiCol_FrameBg)
	EV(FrameBgHovered, (int32_t)ImGuiCol_FrameBgHovered)
	EV(FrameBgActive, (int32_t)ImGuiCol_FrameBgActive)
	EV(TitleBg, (int32_t)ImGuiCol_TitleBg)
	EV(TitleBgActive, (int32_t)ImGuiCol_TitleBgActive)
	EV(TitleBgCollapsed, (int32_t)ImGuiCol_TitleBgCollapsed)
	EV(MenuBarBg, (int32_t)ImGuiCol_MenuBarBg)
	EV(ScrollbarBg, (int32_t)ImGuiCol_ScrollbarBg)
	EV(ScrollbarGrab, (int32_t)ImGuiCol_ScrollbarGrab)
	EV(ScrollbarGrabHovered, (int32_t)ImGuiCol_ScrollbarGrabHovered)
	EV(ScrollbarGrabActive, (int32_t)ImGuiCol_ScrollbarGrabActive)
	EV(CheckMark, (int32_t)ImGuiCol_CheckMark)
	EV(SliderGrab, (int32_t)ImGuiCol_SliderGrab)
	EV(SliderGrabActive, (int32_t)ImGuiCol_SliderGrabActive)
	EV(Button, (int32_t)ImGuiCol_Button)
	EV(ButtonHovered, (int32_t)ImGuiCol_ButtonHovered)
	EV(ButtonActive, (int32_t)ImGuiCol_ButtonActive)
	EV(Header, (int32_t)ImGuiCol_Header)
	EV(HeaderHovered, (int32_t)ImGuiCol_HeaderHovered)
	EV(HeaderActive, (int32_t)ImGuiCol_HeaderActive)
	EV(Separator, (int32_t)ImGuiCol_Separator)
	EV(SeparatorHovered, (int32_t)ImGuiCol_SeparatorHovered)
	EV(SeparatorActive, (int32_t)ImGuiCol_SeparatorActive)
	EV(ResizeGrip, (int32_t)ImGuiCol_ResizeGrip)
	EV(ResizeGripHovered, (int32_t)ImGuiCol_ResizeGripHovered)
	EV(ResizeGripActive, (int32_t)ImGuiCol_ResizeGripActive)
	EV(Tab, (int32_t)ImGuiCol_Tab)
	EV(TabHovered, (int32_t)ImGuiCol_TabHovered)
	EV(TabActive, (int32_t)ImGuiCol_TabActive)
	EV(TabUnfocused, (int32_t)ImGuiCol_TabUnfocused)
	EV(TabUnfocusedActive, (int32_t)ImGuiCol_TabUnfocusedActive)
	EV(PlotLines, (int32_t)ImGuiCol_PlotLines)
	EV(PlotLinesHovered, (int32_t)ImGuiCol_PlotLinesHovered)
	EV(PlotHistogram, (int32_t)ImGuiCol_PlotHistogram)
	EV(PlotHistogramHovered, (int32_t)ImGuiCol_PlotHistogramHovered)
	EV(TableHeaderBg, (int32_t)ImGuiCol_TableHeaderBg)
	EV(TableBorderStrong, (int32_t)ImGuiCol_TableBorderStrong)
	EV(TableBorderLight, (int32_t)ImGuiCol_TableBorderLight)
	EV(TableRowBg, (int32_t)ImGuiCol_TableRowBg)
	EV(TableRowBgAlt, (int32_t)ImGuiCol_TableRowBgAlt)
	EV(TextSelectedBg, (int32_t)ImGuiCol_TextSelectedBg)
	EV(DragDropTarget, (int32_t)ImGuiCol_DragDropTarget)
	EV(NavHighlight, (int32_t)ImGuiCol_NavHighlight)
	EV(NavWindowingHighlight, (int32_t)ImGuiCol_NavWindowingHighlight)
	EV(NavWindowingDimBg, (int32_t)ImGuiCol_NavWindowingDimBg)
	EV(ModalWindowDimBg, (int32_t)ImGuiCol_ModalWindowDimBg)
END_ENUM()

BEGIN_BITMASK(GuiWindowFlags, uint32_t)
	EV(NoTitleBar, (uint32_t)ImGuiWindowFlags_NoTitleBar)
	EV(NoResize, (uint32_t)ImGuiWindowFlags_NoResize)
	EV(NoMove, (uint32_t)ImGuiWindowFlags_NoMove)
	EV(NoScrollbar, (uint32_t)ImGuiWindowFlags_NoScrollbar)
	EV(NoScrollWithMouse, (uint32_t)ImGuiWindowFlags_NoScrollWithMouse)
	EV(NoCollapse, (uint32_t)ImGuiWindowFlags_NoCollapse)
	EV(AlwaysAutoResize, (uint32_t)ImGuiWindowFlags_AlwaysAutoResize)
	EV(NoBackground, (uint32_t)ImGuiWindowFlags_NoBackground)
	EV(NoSavedSettings, (uint32_t)ImGuiWindowFlags_NoSavedSettings)
	EV(NoMouseInputs, (uint32_t)ImGuiWindowFlags_NoMouseInputs)
	EV(MenuBar, (uint32_t)ImGuiWindowFlags_MenuBar)
	EV(HorizontalScrollbar, (uint32_t)ImGuiWindowFlags_HorizontalScrollbar)
	EV(NoFocusOnAppearing, (uint32_t)ImGuiWindowFlags_NoFocusOnAppearing)
	EV(NoBringToFrontOnFocus, (uint32_t)ImGuiWindowFlags_NoBringToFrontOnFocus)
	EV(AlwaysVerticalScrollbar, (uint32_t)ImGuiWindowFlags_AlwaysVerticalScrollbar)
	EV(AlwaysHorizontalScrollbar, (uint32_t)ImGuiWindowFlags_AlwaysHorizontalScrollbar)
	EV(NoNavInputs, (uint32_t)ImGuiWindowFlags_NoNavInputs)
	EV(NoNavFocus, (uint32_t)ImGuiWindowFlags_NoNavFocus)
	EV(UnsavedDocument, (uint32_t)ImGuiWindowFlags_UnsavedDocument)
	EV(NoNav, (uint32_t)ImGuiWindowFlags_NoNav)
	EV(NoDecoration, (uint32_t)ImGuiWindowFlags_NoDecoration)
	EV(NoInputs, (uint32_t)ImGuiWindowFlags_NoInputs)
END_ENUM()

BEGIN_BITMASK(GuiChildFlags, uint32_t)
	EV(Border, (uint32_t)ImGuiChildFlags_Border)
	EV(AlwaysUseWindowPadding, (uint32_t)ImGuiChildFlags_AlwaysUseWindowPadding)
	EV(ResizeX, (uint32_t)ImGuiChildFlags_ResizeX)
	EV(ResizeY, (uint32_t)ImGuiChildFlags_ResizeY)
	EV(AutoResizeX, (uint32_t)ImGuiChildFlags_AutoResizeX)
	EV(AutoResizeY, (uint32_t)ImGuiChildFlags_AutoResizeY)
	EV(ChildAlwaysAutoResize, (uint32_t)ImGuiChildFlags_AlwaysAutoResize)
	EV(FrameStyle, (uint32_t)ImGuiChildFlags_FrameStyle)
	EV(NavFlattened, (uint32_t)ImGuiChildFlags_NavFlattened)
END_ENUM()

BEGIN_BITMASK(GuiTreeNodeFlags, uint32_t)
	EV(Selected, (uint32_t)ImGuiTreeNodeFlags_Selected)
	EV(Framed, (uint32_t)ImGuiTreeNodeFlags_Framed)
	EV(AllowOverlap, (uint32_t)ImGuiTreeNodeFlags_AllowOverlap)
	EV(NoTreePushOnOpen, (uint32_t)ImGuiTreeNodeFlags_NoTreePushOnOpen)
	EV(NoAutoOpenOnLog, (uint32_t)ImGuiTreeNodeFlags_NoAutoOpenOnLog)
	EV(DefaultOpen, (uint32_t)ImGuiTreeNodeFlags_DefaultOpen)
	EV(OpenOnDoubleClick, (uint32_t)ImGuiTreeNodeFlags_OpenOnDoubleClick)
	EV(OpenOnArrow, (uint32_t)ImGuiTreeNodeFlags_OpenOnArrow)
	EV(Leaf, (uint32_t)ImGuiTreeNodeFlags_Leaf)
	EV(Bullet, (uint32_t)ImGuiTreeNodeFlags_Bullet)
	EV(FramePadding, (uint32_t)ImGuiTreeNodeFlags_FramePadding)
	EV(SpanAvailWidth, (uint32_t)ImGuiTreeNodeFlags_SpanAvailWidth)
	EV(SpanFullWidth, (uint32_t)ImGuiTreeNodeFlags_SpanFullWidth)
	EV(SpanTextWidth, (uint32_t)ImGuiTreeNodeFlags_SpanTextWidth)
	EV(SpanAllColumns, (uint32_t)ImGuiTreeNodeFlags_SpanAllColumns)
	EV(NavLeftJumpsBackHere, (uint32_t)ImGuiTreeNodeFlags_NavLeftJumpsBackHere)
	EV(CollapsingHeader, (uint32_t)ImGuiTreeNodeFlags_CollapsingHeader)
END_ENUM()

BEGIN_BITMASK(GuiTabBarFlags, uint32_t)
	EV(Reorderable, (uint32_t)ImGuiTabBarFlags_Reorderable)
	EV(AutoSelectNewTabs, (uint32_t)ImGuiTabBarFlags_AutoSelectNewTabs)
	EV(TabListPopupButton, (uint32_t)ImGuiTabBarFlags_TabListPopupButton)
	EV(NoCloseWithMiddleMouseButton, (uint32_t)ImGuiTabBarFlags_NoCloseWithMiddleMouseButton)
	EV(NoTabListScrollingButtons, (uint32_t)ImGuiTabBarFlags_NoTabListScrollingButtons)
	EV(NoTooltip, (uint32_t)ImGuiTabBarFlags_NoTooltip)
	EV(DrawSelectedOverline, (uint32_t)ImGuiTabBarFlags_DrawSelectedOverline)
	EV(FittingPolicyResizeDown, (uint32_t)ImGuiTabBarFlags_FittingPolicyResizeDown)
	EV(FittingPolicyScroll, (uint32_t)ImGuiTabBarFlags_FittingPolicyScroll)
END_ENUM()

BEGIN_BITMASK(GuiTabItemFlags, uint32_t)
	EV(UnsavedDocument, (uint32_t)ImGuiTabItemFlags_UnsavedDocument)
	EV(SetSelected, (uint32_t)ImGuiTabItemFlags_SetSelected)
	EV(NoCloseWithMiddleMouseButton, (uint32_t)ImGuiTabItemFlags_NoCloseWithMiddleMouseButton)
	EV(NoPushId, (uint32_t)ImGuiTabItemFlags_NoPushId)
	EV(NoTooltip, (uint32_t)ImGuiTabItemFlags_NoTooltip)
	EV(NoReorder, (uint32_t)ImGuiTabItemFlags_NoReorder)
	EV(Leading, (uint32_t)ImGuiTabItemFlags_Leading)
	EV(Trailing, (uint32_t)ImGuiTabItemFlags_Trailing)
	EV(NoAssumedClosure, (uint32_t)ImGuiTabItemFlags_NoAssumedClosure)
END_ENUM()

BEGIN_BITMASK(GuiItemFlags, uint32_t)
	EV(NoTabStop, 1 << 0)
	EV(Disabled, 1 << 2)
	EV(NoItemNav, 1 << 3)
	EV(NoNavDefaultFocus, 1 << 4)
	EV(ItemReadOnly, 1 << 7)
	EV(NoWindowHoverableCheck, 1 << 8)
	EV(AllowItemOverlap, 1 << 9)
END_ENUM()

BEGIN_BITMASK(GuiTableFlags, uint32_t)
	EV(Resizable, (uint32_t)ImGuiTableFlags_Resizable)
	EV(Reorderable, (uint32_t)ImGuiTableFlags_Reorderable)
	EV(Hideable, (uint32_t)ImGuiTableFlags_Hideable)
	EV(Sortable, (uint32_t)ImGuiTableFlags_Sortable)
	EV(NoSavedSettings, (uint32_t)ImGuiTableFlags_NoSavedSettings)
	EV(ContextMenuInBody, (uint32_t)ImGuiTableFlags_ContextMenuInBody)
	// Decorations
	EV(RowBg, (uint32_t)ImGuiTableFlags_RowBg)
	EV(BordersInnerH, (uint32_t)ImGuiTableFlags_BordersInnerH)
	EV(BordersOuterH, (uint32_t)ImGuiTableFlags_BordersOuterH)
	EV(BordersInnerV, (uint32_t)ImGuiTableFlags_BordersInnerV)
	EV(BordersOuterV, (uint32_t)ImGuiTableFlags_BordersOuterV)
	EV(BordersH, (uint32_t)ImGuiTableFlags_BordersH)
	EV(BordersV, (uint32_t)ImGuiTableFlags_BordersV)
	EV(BordersInner, (uint32_t)ImGuiTableFlags_BordersInner)
	EV(BordersOuter, (uint32_t)ImGuiTableFlags_BordersOuter)
	EV(Borders, (uint32_t)ImGuiTableFlags_Borders)
	EV(NoBordersInBody, (uint32_t)ImGuiTableFlags_NoBordersInBody)
	EV(NoBordersInBodyUntilResize, (uint32_t)ImGuiTableFlags_NoBordersInBodyUntilResize)
	// Sizing Policy (read above for defaults)
	EV(SizingFixedFit, (uint32_t)ImGuiTableFlags_SizingFixedFit)
	EV(SizingFixedSame, (uint32_t)ImGuiTableFlags_SizingFixedSame)
	EV(SizingStretchProp, (uint32_t)ImGuiTableFlags_SizingStretchProp)
	EV(SizingStretchSame, (uint32_t)ImGuiTableFlags_SizingStretchSame)
	// Sizing Extra Options
	EV(NoHostExtendX, (uint32_t)ImGuiTableFlags_NoHostExtendX)
	EV(NoHostExtendY, (uint32_t)ImGuiTableFlags_NoHostExtendY)
	EV(NoKeepColumnsVisible, (uint32_t)ImGuiTableFlags_NoKeepColumnsVisible)
	EV(PreciseWidths, (uint32_t)ImGuiTableFlags_PreciseWidths)
	// Clipping
	EV(NoClip, (uint32_t)ImGuiTableFlags_NoClip)
	// Padding
	EV(PadOuterX, (uint32_t)ImGuiTableFlags_PadOuterX)
	EV(NoPadOuterX, (uint32_t)ImGuiTableFlags_NoPadOuterX)
	EV(NoPadInnerX, (uint32_t)ImGuiTableFlags_NoPadInnerX)
	// Scrolling
	EV(ScrollX, (uint32_t)ImGuiTableFlags_ScrollX)
	EV(ScrollY, (uint32_t)ImGuiTableFlags_ScrollY)
	// Sorting
	EV(SortMulti, (uint32_t)ImGuiTableFlags_SortMulti)
	EV(SortTristate, (uint32_t)ImGuiTableFlags_SortTristate)
	// Miscellaneous
	EV(HighlightHoveredColumn, (uint32_t)ImGuiTableFlags_HighlightHoveredColumn)
END_ENUM()

BEGIN_BITMASK(GuiTableRowFlags, uint32_t)
	EV(Headers, (uint32_t)ImGuiTableRowFlags_Headers)
END_ENUM()

BEGIN_BITMASK(GuiPopupFlags, uint32_t)
	EV(MouseButtonRight, (uint32_t)ImGuiPopupFlags_MouseButtonRight)
	EV(MouseButtonMiddle, (uint32_t)ImGuiPopupFlags_MouseButtonMiddle)
	EV(NoReopen, (uint32_t)ImGuiPopupFlags_NoReopen)
	EV(NoOpenOverExistingPopup, (uint32_t)ImGuiPopupFlags_NoOpenOverExistingPopup)
	EV(NoOpenOverItems, (uint32_t)ImGuiPopupFlags_NoOpenOverItems)
	EV(AnyPopupId, (uint32_t)ImGuiPopupFlags_AnyPopupId)
	EV(AnyPopupLevel, (uint32_t)ImGuiPopupFlags_AnyPopupLevel)
END_ENUM()

BEGIN_BITMASK(GuiInputTextFlags, uint32_t)
	EV(CharsDecimal, (uint32_t)ImGuiInputTextFlags_CharsDecimal)
	EV(CharsHexadecimal, (uint32_t)ImGuiInputTextFlags_CharsHexadecimal)
	EV(CharsScientific, (uint32_t)ImGuiInputTextFlags_CharsScientific)
	EV(CharsUppercase, (uint32_t)ImGuiInputTextFlags_CharsUppercase)
	EV(CharsNoBlank, (uint32_t)ImGuiInputTextFlags_CharsNoBlank)

	EV(AllowTabInput, (uint32_t)ImGuiInputTextFlags_AllowTabInput)
	EV(EnterReturnsTrue, (uint32_t)ImGuiInputTextFlags_EnterReturnsTrue)
	EV(EscapeClearsAll, (uint32_t)ImGuiInputTextFlags_EscapeClearsAll)
	EV(CtrlEnterForNewLine, (uint32_t)ImGuiInputTextFlags_CtrlEnterForNewLine)

	EV(ReadOnly, (uint32_t)ImGuiInputTextFlags_ReadOnly)
	EV(Password, (uint32_t)ImGuiInputTextFlags_Password)
	EV(AlwaysOverwrite, (uint32_t)ImGuiInputTextFlags_AlwaysOverwrite)
	EV(AutoSelectAll, (uint32_t)ImGuiInputTextFlags_AutoSelectAll)
	EV(ParseEmptyRefVal, (uint32_t)ImGuiInputTextFlags_ParseEmptyRefVal)
	EV(DisplayEmptyRefVal, (uint32_t)ImGuiInputTextFlags_DisplayEmptyRefVal)
	EV(NoHorizontalScroll, (uint32_t)ImGuiInputTextFlags_NoHorizontalScroll)
	EV(NoUndoRedo, (uint32_t)ImGuiInputTextFlags_NoUndoRedo)

	EV(Multiline, (uint32_t)(1 << 26))
END_ENUM()

BEGIN_BITMASK(GuiComboFlags, uint32_t)
	EV(PopupAlignLeft, (uint32_t)ImGuiComboFlags_PopupAlignLeft)
	EV(HeightSmall, (uint32_t)ImGuiComboFlags_HeightSmall)
	EV(HeightRegular, (uint32_t)ImGuiComboFlags_HeightRegular)
	EV(HeightLarge, (uint32_t)ImGuiComboFlags_HeightLarge)
	EV(HeightLargest, (uint32_t)ImGuiComboFlags_HeightLargest)
	EV(NoArrowButton, (uint32_t)ImGuiComboFlags_NoArrowButton)
	EV(NoPreview, (uint32_t)ImGuiComboFlags_NoPreview)
	EV(WidthFitPreview, (uint32_t)ImGuiComboFlags_WidthFitPreview)
END_ENUM()

BEGIN_BITMASK(GuiSliderFlags, uint32_t)
	EV(AlwaysClamp, (uint32_t)ImGuiSliderFlags_AlwaysClamp)
	EV(Logarithmic, (uint32_t)ImGuiSliderFlags_Logarithmic)
	EV(NoRoundToFormat, (uint32_t)ImGuiSliderFlags_NoRoundToFormat)
	EV(NoInput, (uint32_t)ImGuiSliderFlags_NoInput)
	EV(WrapAround, (uint32_t)ImGuiSliderFlags_WrapAround)
END_ENUM()

BEGIN_BITMASK(GuiColorEditFlags, uint32_t)
	EV(NoAlpha, (uint32_t)ImGuiColorEditFlags_NoAlpha)
	EV(NoPicker, (uint32_t)ImGuiColorEditFlags_NoPicker)
	EV(NoOptions, (uint32_t)ImGuiColorEditFlags_NoOptions)
	EV(NoSmallPreview, (uint32_t)ImGuiColorEditFlags_NoSmallPreview)
	EV(NoInputs, (uint32_t)ImGuiColorEditFlags_NoInputs)
	EV(NoTooltip, (uint32_t)ImGuiColorEditFlags_NoTooltip)
	EV(NoLabel, (uint32_t)ImGuiColorEditFlags_NoLabel)
	EV(NoSidePreview, (uint32_t)ImGuiColorEditFlags_NoSidePreview)
	EV(NoDragDrop, (uint32_t)ImGuiColorEditFlags_NoDragDrop)
	EV(NoBorder, (uint32_t)ImGuiColorEditFlags_NoBorder)

	// User Options (right-click on widget to change some of them).
	EV(AlphaBar, (uint32_t)ImGuiColorEditFlags_AlphaBar)
	EV(AlphaPreview, (uint32_t)ImGuiColorEditFlags_AlphaPreview)
	EV(AlphaPreviewHalf, (uint32_t)ImGuiColorEditFlags_AlphaPreviewHalf)
	EV(HDR, (uint32_t)ImGuiColorEditFlags_HDR)
	EV(DisplayRGB, (uint32_t)ImGuiColorEditFlags_DisplayRGB)
	EV(DisplayHSV, (uint32_t)ImGuiColorEditFlags_DisplayHSV)
	EV(DisplayHex, (uint32_t)ImGuiColorEditFlags_DisplayHex)
	EV(Uint8, (uint32_t)ImGuiColorEditFlags_Uint8)
	EV(Float, (uint32_t)ImGuiColorEditFlags_Float)
	EV(PickerHueBar, (uint32_t)ImGuiColorEditFlags_PickerHueBar)
	EV(PickerHueWheel, (uint32_t)ImGuiColorEditFlags_PickerHueWheel)
	EV(InputRGB, (uint32_t)ImGuiColorEditFlags_InputRGB)
	EV(InputHSV, (uint32_t)ImGuiColorEditFlags_InputHSV)
END_ENUM()

BEGIN_BITMASK(GuiTableColumnFlags, uint32_t)
	EV(Disabled, (uint32_t)ImGuiTableColumnFlags_Disabled)
	EV(DefaultHide, (uint32_t)ImGuiTableColumnFlags_DefaultHide)
	EV(DefaultSort, (uint32_t)ImGuiTableColumnFlags_DefaultSort)
	EV(WidthStretch, (uint32_t)ImGuiTableColumnFlags_WidthStretch)
	EV(WidthFixed, (uint32_t)ImGuiTableColumnFlags_WidthFixed)
	EV(NoResize, (uint32_t)ImGuiTableColumnFlags_NoResize)
	EV(NoReorder, (uint32_t)ImGuiTableColumnFlags_NoReorder)
	EV(NoHide, (uint32_t)ImGuiTableColumnFlags_NoHide)
	EV(NoClip, (uint32_t)ImGuiTableColumnFlags_NoClip)
	EV(NoSort, (uint32_t)ImGuiTableColumnFlags_NoSort)
	EV(NoSortAscending, (uint32_t)ImGuiTableColumnFlags_NoSortAscending)
	EV(NoSortDescending, (uint32_t)ImGuiTableColumnFlags_NoSortDescending)
	EV(NoHeaderLabel, (uint32_t)ImGuiTableColumnFlags_NoHeaderLabel)
	EV(NoHeaderWidth, (uint32_t)ImGuiTableColumnFlags_NoHeaderWidth)
	EV(PreferSortAscending, (uint32_t)ImGuiTableColumnFlags_PreferSortAscending)
	EV(PreferSortDescending, (uint32_t)ImGuiTableColumnFlags_PreferSortDescending)
	EV(IndentEnable, (uint32_t)ImGuiTableColumnFlags_IndentEnable)
	EV(IndentDisable, (uint32_t)ImGuiTableColumnFlags_IndentDisable)
	EV(AngledHeader, (uint32_t)ImGuiTableColumnFlags_AngledHeader)
END_ENUM()

BEGIN_BITMASK(GuiCond, uint32_t)
	EV(Always, (uint32_t)ImGuiCond_Always)
	EV(Once, (uint32_t)ImGuiCond_Once)
	EV(FirstUseEver, (uint32_t)ImGuiCond_FirstUseEver)
	EV(Appearing, (uint32_t)ImGuiCond_Appearing)
END_ENUM()

BEGIN_BITMASK(GuiButtonFlags, uint32_t)
	EV(MouseButtonLeft, (uint32_t)ImGuiButtonFlags_MouseButtonLeft)
	EV(MouseButtonRight, (uint32_t)ImGuiButtonFlags_MouseButtonRight)
	EV(MouseButtonMiddle, (uint32_t)ImGuiButtonFlags_MouseButtonMiddle)
END_ENUM()

#endif
