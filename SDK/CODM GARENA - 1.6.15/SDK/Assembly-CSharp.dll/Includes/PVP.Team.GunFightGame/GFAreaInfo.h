#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GFAreaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GFAreaInfo"));
	}

	template <typename T = float> T& m_CurOccupyTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_AreaOccupyTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GFAreaInfo*))(Il2CppBase() + 0x401D1E0))(this);
	}
	template <typename T = void> T Set(uintptr_t attackerCamp, unsigned char status, uint32_t areaResetTime, uint32_t curOccupyTime) {
		return ((T (*)(GFAreaInfo*, uintptr_t, unsigned char, uint32_t, uint32_t))(Il2CppBase() + 0x401D290))(this, attackerCamp, status, areaResetTime, curOccupyTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GFAreaInfo*, float))(Il2CppBase() + 0x401D3A0))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(GFAreaInfo*))(Il2CppBase() + 0x401D440))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GFAreaInfo*, float))(Il2CppBase() + 0x401D448))(this, P0);
	}

};

}
