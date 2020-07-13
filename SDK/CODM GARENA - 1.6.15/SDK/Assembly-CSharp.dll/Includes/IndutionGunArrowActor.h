#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IndutionGunArrowActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IndutionGunArrowActor"));
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

	template <typename T = void> T Init(uintptr_t inData) {
		return ((T (*)(IndutionGunArrowActor*, uintptr_t))(Il2CppBase() + 0x49959FC))(this, inData);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(IndutionGunArrowActor*, uintptr_t))(Il2CppBase() + 0x4995B9C))(this, pawn);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(IndutionGunArrowActor*, uintptr_t))(Il2CppBase() + 0x4995D9C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(IndutionGunArrowActor*, uintptr_t))(Il2CppBase() + 0x4995DA4))(this, P0);
	}

};

}
