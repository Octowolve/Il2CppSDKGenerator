#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class CTFGamePlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "CTFGamePlayerInfo"));
	}

	template <typename T = int32_t> static T& TeamMateGoldBagID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& EnemyGoldBagID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& TeamMateFlagID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& EnemyFlagID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> T& CTFPlayerRespawnTime() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T get_CTFPlayerRespawnTime() {
		return ((T (*)(CTFGamePlayerInfo*))(Il2CppBase() + 0x2B2B100))(this);
	}
	template <typename T = void> T set_CTFPlayerRespawnTime(float value) {
		return ((T (*)(CTFGamePlayerInfo*, float))(Il2CppBase() + 0x2B2B108))(this, value);
	}

};

}
