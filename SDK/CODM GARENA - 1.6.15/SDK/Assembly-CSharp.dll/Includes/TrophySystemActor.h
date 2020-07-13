#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophySystemActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophySystemActor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(TrophySystemActor*, uintptr_t))(Il2CppBase() + 0x496A67C))(this, inData);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(TrophySystemActor*, uintptr_t))(Il2CppBase() + 0x496A824))(this, damageInfo);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(TrophySystemActor*, uintptr_t))(Il2CppBase() + 0x496AA78))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(TrophySystemActor*, uintptr_t))(Il2CppBase() + 0x496ABAC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(TrophySystemActor*, uintptr_t))(Il2CppBase() + 0x496ABB4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(TrophySystemActor*, uintptr_t))(Il2CppBase() + 0x496ABBC))(this, P0);
	}

};

}
