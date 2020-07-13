#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MonkeyBombActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MonkeyBombActor"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(MonkeyBombActor*, uintptr_t))(Il2CppBase() + 0x3319FFC))(this, inData);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(MonkeyBombActor*, uintptr_t))(Il2CppBase() + 0x331A198))(this, pawn);
	}
	template <typename T = bool> T IsSameCamp(uintptr_t pawn) {
		return ((T (*)(MonkeyBombActor*, uintptr_t))(Il2CppBase() + 0x331A2CC))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(MonkeyBombActor*, uintptr_t))(Il2CppBase() + 0x331A5B0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(MonkeyBombActor*, uintptr_t))(Il2CppBase() + 0x331A5B8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameCamp(uintptr_t P0) {
		return ((T (*)(MonkeyBombActor*, uintptr_t))(Il2CppBase() + 0x331A5C0))(this, P0);
	}

};

}
