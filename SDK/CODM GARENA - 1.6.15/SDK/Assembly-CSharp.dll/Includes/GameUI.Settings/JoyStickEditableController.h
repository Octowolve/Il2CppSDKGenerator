#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class JoyStickEditableController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "JoyStickEditableController"));
	}

	template <typename T = float> T& MaxScale() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& MinScale() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsPinching() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_JoystickConfig() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mScreenWidth() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mScreenHeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScaleSlider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewPinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewPinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewPinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndPinchTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableEdit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveEditingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Selected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_View() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448A9F4))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(JoyStickEditableController*, float))(Il2CppBase() + 0x448A9FC))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448AAE4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448AC80))(this);
	}
	template <typename T = void> T InitScaleSlider(uintptr_t slider) {
		return ((T (*)(JoyStickEditableController*, uintptr_t))(Il2CppBase() + 0x448ADE4))(this, slider);
	}
	template <typename T = void> T InitFromConfig(uintptr_t config) {
		return ((T (*)(JoyStickEditableController*, uintptr_t))(Il2CppBase() + 0x448AFB0))(this, config);
	}
	template <typename T = bool> T OnViewDrag(uintptr_t gesture, Il2CppVector3 deprecatedPos) {
		return ((T (*)(JoyStickEditableController*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x448B0F8))(this, gesture, deprecatedPos);
	}
	template <typename T = bool> T OnViewPinchIn(uintptr_t gesture) {
		return ((T (*)(JoyStickEditableController*, uintptr_t))(Il2CppBase() + 0x448B454))(this, gesture);
	}
	template <typename T = bool> T OnViewPinchOut(uintptr_t gesture) {
		return ((T (*)(JoyStickEditableController*, uintptr_t))(Il2CppBase() + 0x448B5D4))(this, gesture);
	}
	template <typename T = bool> T OnViewPinchEnd(uintptr_t gesture) {
		return ((T (*)(JoyStickEditableController*, uintptr_t))(Il2CppBase() + 0x448B6D8))(this, gesture);
	}
	template <typename T = void> T OnEndPinchTimer() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448B81C))(this);
	}
	template <typename T = void> T EnableEdit(bool enable) {
		return ((T (*)(JoyStickEditableController*, bool))(Il2CppBase() + 0x448B8EC))(this, enable);
	}
	template <typename T = void> T SaveEditingData() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448BA8C))(this);
	}
	template <typename T = uintptr_t> T GetRealTransform() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448BD34))(this);
	}
	template <typename T = void> T ChangeScale(float scale) {
		return ((T (*)(JoyStickEditableController*, float))(Il2CppBase() + 0x448BE58))(this, scale);
	}
	template <typename T = void> T Selected() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448BF74))(this);
	}
	template <typename T = void> T UnSelected() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448C160))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448C35C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(JoyStickEditableController*))(Il2CppBase() + 0x448C364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitFromConfig(uintptr_t P0) {
		return ((T (*)(JoyStickEditableController*, uintptr_t))(Il2CppBase() + 0x448C36C))(this, P0);
	}

};

}
