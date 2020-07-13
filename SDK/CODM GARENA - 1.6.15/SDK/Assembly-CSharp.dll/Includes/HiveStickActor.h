#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HiveStickActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HiveStickActor"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Active() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(HiveStickActor*, uintptr_t))(Il2CppBase() + 0x4755004))(this, inData);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(HiveStickActor*, uintptr_t))(Il2CppBase() + 0x47550E4))(this, pawn);
	}
	template <typename T = void> T Active() {
		return ((T (*)(HiveStickActor*))(Il2CppBase() + 0x4755218))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(HiveStickActor*, uintptr_t))(Il2CppBase() + 0x47552DC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(HiveStickActor*, uintptr_t))(Il2CppBase() + 0x47552E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Active() {
		return ((T (*)(HiveStickActor*))(Il2CppBase() + 0x47552EC))(this);
	}

};

}
