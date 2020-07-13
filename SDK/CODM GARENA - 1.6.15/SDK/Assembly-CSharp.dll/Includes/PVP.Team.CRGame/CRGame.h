#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CRGame {

class CRGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CRGame", "CRGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetOtherPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(CRGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x2B24254))(this, PlayerID, RoleID, camp);
	}
	template <typename T = int32_t> static T GetAIType(uint64_t RoleID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2B24338))(0, RoleID);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetOtherPlayerPawnType(uint64_t P0, uint64_t P1, uintptr_t P2) {
		return ((T (*)(CRGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x2B24420))(this, P0, P1, P2);
	}

};

}
