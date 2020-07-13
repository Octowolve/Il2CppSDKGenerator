#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISliderDigital
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISliderDigital"));
	}

	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Max() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& TextFormat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_OnValueChange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOnValueChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UISliderDigital*))(Il2CppBase() + 0x2FA4D88))(this);
	}
	template <typename T = void> T OnChange() {
		return ((T (*)(UISliderDigital*))(Il2CppBase() + 0x2FA4ECC))(this);
	}
	template <typename T = void> T SetOnValueChange(uintptr_t change) {
		return ((T (*)(UISliderDigital*, uintptr_t))(Il2CppBase() + 0x2FA5090))(this, change);
	}
	template <typename T = void> T SetValue(float value) {
		return ((T (*)(UISliderDigital*, float))(Il2CppBase() + 0x2FA5138))(this, value);
	}

};

}
