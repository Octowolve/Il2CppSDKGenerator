#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponEquippingStateRecon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponEquippingState_Recon"));
	}

	template <typename T = float> T& m_EquipTimeElapse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_EquipAnimTime() {
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

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponEquippingStateRecon*))(Il2CppBase() + 0x45AB550))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponEquippingStateRecon*, float))(Il2CppBase() + 0x45AB9A0))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponEquippingStateRecon*))(Il2CppBase() + 0x45ABAF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponEquippingStateRecon*, float))(Il2CppBase() + 0x45ABAFC))(this, P0);
	}

};

}
