#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsToggleSliderTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsToggleSliderTool"));
	}

	template <typename T = uintptr_t> T& lowToggle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& lowOnObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& lowOffObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& midToggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& midOnObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& midOffObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& highToggle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& highOnObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& highOffObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& customToggle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& customOnObj() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& customOffObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& sliderList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& sliderDefaultValueMap() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSensitivityType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSlider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSliderValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSliderDefaultCheckValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLowToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMidToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHighToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomToggleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToggleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSensitivityCustomValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSensitiveFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToggleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSimpleEqual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSliderValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T SetSensitivityType(uintptr_t type) {
		return ((T (*)(SettingsToggleSliderTool*, uintptr_t))(Il2CppBase() + 0x289D800))(this, type);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SettingsToggleSliderTool*))(Il2CppBase() + 0x28B8378))(this);
	}
	template <typename T = void> T InitSlider(int32_t index, void* callback, uintptr_t config) {
		return ((T (*)(SettingsToggleSliderTool*, int32_t, void*, uintptr_t))(Il2CppBase() + 0x2899E38))(this, index, callback, config);
	}
	template <typename T = void> T SetSliderValue(int32_t index, float value) {
		return ((T (*)(SettingsToggleSliderTool*, int32_t, float))(Il2CppBase() + 0x289B68C))(this, index, value);
	}
	template <typename T = void> T SetSliderDefaultCheckValue(int32_t index, uintptr_t config) {
		return ((T (*)(SettingsToggleSliderTool*, int32_t, uintptr_t))(Il2CppBase() + 0x28B86F0))(this, index, config);
	}
	template <typename T = void> T OnLowToggleClick(uintptr_t obj) {
		return ((T (*)(SettingsToggleSliderTool*, uintptr_t))(Il2CppBase() + 0x28B87EC))(this, obj);
	}
	template <typename T = void> T OnMidToggleClick(uintptr_t obj) {
		return ((T (*)(SettingsToggleSliderTool*, uintptr_t))(Il2CppBase() + 0x28B8DA0))(this, obj);
	}
	template <typename T = void> T OnHighToggleClick(uintptr_t obj) {
		return ((T (*)(SettingsToggleSliderTool*, uintptr_t))(Il2CppBase() + 0x28B90A8))(this, obj);
	}
	template <typename T = void> T OnCustomToggleClick(uintptr_t obj) {
		return ((T (*)(SettingsToggleSliderTool*, uintptr_t))(Il2CppBase() + 0x28B93B0))(this, obj);
	}
	template <typename T = void> T SetToggleState(int32_t s) {
		return ((T (*)(SettingsToggleSliderTool*, int32_t))(Il2CppBase() + 0x289B804))(this, s);
	}
	template <typename T = void> T SetSensitivityCustomValue(int32_t value) {
		return ((T (*)(SettingsToggleSliderTool*, int32_t))(Il2CppBase() + 0x28B9AC8))(this, value);
	}
	template <typename T = float> T GetRotateSensitiveFactor(int32_t i) {
		return ((T (*)(SettingsToggleSliderTool*, int32_t))(Il2CppBase() + 0x28B8AF4))(this, i);
	}
	template <typename T = int32_t> T CheckToggleState() {
		return ((T (*)(SettingsToggleSliderTool*))(Il2CppBase() + 0x28B946C))(this);
	}
	template <typename T = bool> T IsSimpleEqual(float a, float b) {
		return ((T (*)(SettingsToggleSliderTool*, float, float))(Il2CppBase() + 0x28B9CCC))(this, a, b);
	}
	template <typename T = bool> T CheckSliderValue(int32_t newState, uintptr_t oldState) {
		return ((T (*)(SettingsToggleSliderTool*, int32_t, uintptr_t))(Il2CppBase() + 0x28B9DC0))(this, newState, oldState);
	}

};

}
