#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightGame"));
	}

	template <typename T = uintptr_t> T& m_GFServerVolume() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& m_GFLocalVolume() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterExtraTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterCommonTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGunFightVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGFVolumeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_GFLocalVolume() {
		return ((T (*)(GunFightGame*))(Il2CppBase() + 0x4020F8C))(this);
	}
	template <typename T = void> T EnterExtraTime() {
		return ((T (*)(GunFightGame*))(Il2CppBase() + 0x4020F94))(this);
	}
	template <typename T = void> T EnterCommonTime() {
		return ((T (*)(GunFightGame*))(Il2CppBase() + 0x402105C))(this);
	}
	template <typename T = uintptr_t> T GetGunFightVolume() {
		return ((T (*)(GunFightGame*))(Il2CppBase() + 0x402112C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GunFightGame*, float))(Il2CppBase() + 0x40211F0))(this, deltaTime);
	}
	template <typename T = void> T UpdateGFVolumeState(uintptr_t state, uintptr_t occupierCamp, uintptr_t lastOccupierCamp, float occupyTime) {
		return ((T (*)(GunFightGame*, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x40212B4))(this, state, occupierCamp, lastOccupierCamp, occupyTime);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GunFightGame*, float))(Il2CppBase() + 0x402161C))(this, P0);
	}

};

}
