#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyRankPointBuffDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyRankPointBuffDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LobbyRankBuffDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mOpenVaild() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendActvRankedMatchInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActvRankedMatchInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_LobbyExpBuffDS() {
		return ((T (*)(LobbyRankPointBuffDataAgent*))(Il2CppBase() + 0x4342254))(this);
	}
	template <typename T = bool> T get_OpenVaild() {
		return ((T (*)(LobbyRankPointBuffDataAgent*))(Il2CppBase() + 0x4342304))(this);
	}
	template <typename T = void> T SendActvRankedMatchInfoReq() {
		return ((T (*)(LobbyRankPointBuffDataAgent*))(Il2CppBase() + 0x434230C))(this);
	}
	template <typename T = void> T GetActvRankedMatchInfoRes(uintptr_t res) {
		return ((T (*)(LobbyRankPointBuffDataAgent*, uintptr_t))(Il2CppBase() + 0x43425D8))(this, res);
	}

};

}
