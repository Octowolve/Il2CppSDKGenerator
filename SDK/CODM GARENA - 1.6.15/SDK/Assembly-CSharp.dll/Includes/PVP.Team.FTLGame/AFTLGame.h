#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FTLGame {

class AFTLGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FTLGame", "AFTLGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(AFTLGame*, uintptr_t))(Il2CppBase() + 0x401CD0C))(this, viewTarget);
	}
	template <typename T = int32_t> T GetOtherPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(AFTLGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x401CF30))(this, PlayerID, RoleID, camp);
	}
	template <typename T = int32_t> static T GetAIType(uint64_t RoleID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x401D014))(0, RoleID);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectate(uintptr_t P0) {
		return ((T (*)(AFTLGame*, uintptr_t))(Il2CppBase() + 0x401D0FC))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetOtherPlayerPawnType(uint64_t P0, uint64_t P1, uintptr_t P2) {
		return ((T (*)(AFTLGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x401D104))(this, P0, P1, P2);
	}

};

}
