#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetDisplayHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetDisplayHUD"));
	}

	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_ZOffset() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_TargetDisplay() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t targetDisplay) {
		return ((T (*)(TargetDisplayHUD*, uintptr_t))(Il2CppBase() + 0x464EB2C))(this, targetDisplay);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TargetDisplayHUD*))(Il2CppBase() + 0x464F1B0))(this);
	}
	template <typename T = void> T UpdateSignboard() {
		return ((T (*)(TargetDisplayHUD*))(Il2CppBase() + 0x464EE38))(this);
	}

};

}
