#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerGUI"));
	}

	template <typename T = float> static T& MaxLabelWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& fsmList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SelectedFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& labelContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& previewOnGUI() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& enableGUILayout() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& drawStateLabels() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& enableStateLabelsInBuilds() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& GUITextureStateLabels() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& GUITextStateLabels() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& filterLabelsWithDistance() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = float> T& maxLabelDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& controlMouseCursor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& labelScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& SortedFsmList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& labelGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& fsmLabelIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& guiSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& guiColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& guiBackgroundColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& guiContentColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& guiMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& stateLabelStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& stateLabelBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = float> T& initLabelScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& MouseCursor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = bool> static T& LockCursor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = bool> static T& HideCursor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9D);
	}
	template <typename T = void*> static T& CS$9__CachedAnonymousMethodDelegate2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = bool> static T get_EnableStateLabels() {
		return ((T (*)(void *))(Il2CppBase() + 0x5141670))(0);
	}
	template <typename T = void> static T set_EnableStateLabels(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5141D40))(0, value);
	}
	template <typename T = bool> static T get_EnableStateLabelsInBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x5141EA4))(0);
	}
	template <typename T = void> static T set_EnableStateLabelsInBuild(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x514207C))(0, value);
	}
	template <typename T = void> static T InitInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x5141A40))(0);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x51421E0))(0);
	}
	template <typename T = bool> static T get_Enabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x51423E4))(0);
	}
	template <typename T = uintptr_t> static T get_GUISkin() {
		return ((T (*)(void *))(Il2CppBase() + 0x514255C))(0);
	}
	template <typename T = void> static T set_GUISkin(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x514260C))(0, value);
	}
	template <typename T = uintptr_t> static T get_GUIColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x51426C0))(0);
	}
	template <typename T = void> static T set_GUIColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x514277C))(0, value);
	}
	template <typename T = uintptr_t> static T get_GUIBackgroundColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x5142848))(0);
	}
	template <typename T = void> static T set_GUIBackgroundColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5142904))(0, value);
	}
	template <typename T = uintptr_t> static T get_GUIContentColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x51429D0))(0);
	}
	template <typename T = void> static T set_GUIContentColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5142A8C))(0, value);
	}
	template <typename T = uintptr_t> static T get_GUIMatrix() {
		return ((T (*)(void *))(Il2CppBase() + 0x5142B58))(0);
	}
	template <typename T = void> static T set_GUIMatrix(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5142C6C))(0, value);
	}
	template <typename T = uintptr_t> static T get_MouseCursor() {
		return ((T (*)(void *))(Il2CppBase() + 0x5142DC8))(0);
	}
	template <typename T = void> static T set_MouseCursor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5142E78))(0, value);
	}
	template <typename T = bool> static T get_LockCursor() {
		return ((T (*)(void *))(Il2CppBase() + 0x5142F2C))(0);
	}
	template <typename T = void> static T set_LockCursor(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5142FDC))(0, value);
	}
	template <typename T = bool> static T get_HideCursor() {
		return ((T (*)(void *))(Il2CppBase() + 0x5143090))(0);
	}
	template <typename T = void> static T set_HideCursor(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x5143140))(0, value);
	}
	template <typename T = void> T InitLabelStyle() {
		return ((T (*)(PlayMakerGUI*))(Il2CppBase() + 0x51431F4))(this);
	}
	template <typename T = void> T DrawStateLabels() {
		return ((T (*)(PlayMakerGUI*))(Il2CppBase() + 0x51435DC))(this);
	}
	template <typename T = void> T DrawStateLabel(uintptr_t fsm) {
		return ((T (*)(PlayMakerGUI*, uintptr_t))(Il2CppBase() + 0x5143AAC))(this, fsm);
	}
	template <typename T = Il2CppString*> static T GenerateStateLabel(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5144790))(0, fsm);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayMakerGUI*))(Il2CppBase() + 0x5144918))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PlayMakerGUI*))(Il2CppBase() + 0x5144AD0))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(PlayMakerGUI*))(Il2CppBase() + 0x5144AD4))(this);
	}
	template <typename T = void> T CallOnGUI(uintptr_t fsm) {
		return ((T (*)(PlayMakerGUI*, uintptr_t))(Il2CppBase() + 0x51459B4))(this, fsm);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayMakerGUI*))(Il2CppBase() + 0x5145A78))(this);
	}
	template <typename T = void> static T DoEditGUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x51457A4))(0);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(PlayMakerGUI*))(Il2CppBase() + 0x5145BD0))(this);
	}
	template <typename T = int32_t> static T DrawStateLabelsb__1(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x5145CBC))(0, x, y);
	}

};

}
