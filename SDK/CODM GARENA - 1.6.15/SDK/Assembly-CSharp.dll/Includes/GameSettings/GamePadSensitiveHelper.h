#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class GamePadSensitiveHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "GamePadSensitiveHelper"));
	}

	template <typename T = uintptr_t> T& sliderTools_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& modeType_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSliderValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnADSHSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnADSVSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnXHSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnXVSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSniperXSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSniperYSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCursorSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GamePadSensitiveHelper*))(Il2CppBase() + 0x2552214))(this);
	}
	template <typename T = void> T SetSliderValues() {
		return ((T (*)(GamePadSensitiveHelper*))(Il2CppBase() + 0x2552730))(this);
	}
	template <typename T = void> T OnHSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x2552978))(this, value);
	}
	template <typename T = void> T OnVSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x2552AB0))(this, value);
	}
	template <typename T = void> T OnADSHSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x2552BE8))(this, value);
	}
	template <typename T = void> T OnADSVSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x2552D20))(this, value);
	}
	template <typename T = void> T OnXHSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x2552E58))(this, value);
	}
	template <typename T = void> T OnXVSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x2552F90))(this, value);
	}
	template <typename T = void> T OnSniperXSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x25530C8))(this, value);
	}
	template <typename T = void> T OnSniperYSliderChange(float value) {
		return ((T (*)(GamePadSensitiveHelper*, float))(Il2CppBase() + 0x2553200))(this, value);
	}
	template <typename T = void> T OnCursorSliderChange() {
		return ((T (*)(GamePadSensitiveHelper*))(Il2CppBase() + 0x2553338))(this);
	}

};

}
