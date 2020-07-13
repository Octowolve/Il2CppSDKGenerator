#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AutoFireModeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AutoFireModeView"));
	}

	template <typename T = uintptr_t> T& m_BtnChangeOPMode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_LabelText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_SpriteState() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_Slider() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_SliderThumb() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeOpMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeOperatorMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOperatorModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x371273C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x37127E4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712958))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712AA0))(this);
	}
	template <typename T = void> T OnSliderChange() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712BE8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712CD4))(this);
	}
	template <typename T = void> T ChangeOpMode() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712E1C))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712EB4))(this);
	}
	template <typename T = void> T OnChangeOperatorMode(bool autoFire) {
		return ((T (*)(AutoFireModeView*, bool))(Il2CppBase() + 0x3712F4C))(this, autoFire);
	}
	template <typename T = void> T OnNotifyOperatorModeChanged(uintptr_t Msg) {
		return ((T (*)(AutoFireModeView*, uintptr_t))(Il2CppBase() + 0x3712548))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712FEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712FF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3712FFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x3713004))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(AutoFireModeView*))(Il2CppBase() + 0x371300C))(this);
	}

};

}
