#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFiringStateNuclearBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFiringState_NuclearBomb"));
	}

	template <typename T = float> T& m_FiringTimeElapse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FiringAnimTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFiringStateNuclearBomb*))(Il2CppBase() + 0x45A94E8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFiringStateNuclearBomb*, float))(Il2CppBase() + 0x45A958C))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponFiringStateNuclearBomb*))(Il2CppBase() + 0x45A96E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFiringStateNuclearBomb*))(Il2CppBase() + 0x45A9828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFiringStateNuclearBomb*, float))(Il2CppBase() + 0x45A9830))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponFiringStateNuclearBomb*))(Il2CppBase() + 0x45A9838))(this);
	}

};

}
