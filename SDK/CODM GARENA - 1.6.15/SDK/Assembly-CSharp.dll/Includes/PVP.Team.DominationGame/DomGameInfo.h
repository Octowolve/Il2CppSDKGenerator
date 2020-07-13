#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DomGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DomGameInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(DomGameInfo*))(Il2CppBase() + 0x2B32D68))(this);
	}
	template <typename T = void> T OnRoundStart(int32_t inTimeLimit, int32_t inLeftTime) {
		return ((T (*)(DomGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x2B32E9C))(this, inTimeLimit, inLeftTime);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(DomGameInfo*))(Il2CppBase() + 0x2B33048))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(int32_t P0, int32_t P1) {
		return ((T (*)(DomGameInfo*, int32_t, int32_t))(Il2CppBase() + 0x2B33050))(this, P0, P1);
	}

};

}
