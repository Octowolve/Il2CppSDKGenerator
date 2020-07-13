#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(DuelGameBuilder*))(Il2CppBase() + 0x400C0F8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(DuelGameBuilder*))(Il2CppBase() + 0x400C100))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(DuelGameBuilder*))(Il2CppBase() + 0x400C1BC))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(DuelGameBuilder*))(Il2CppBase() + 0x400C278))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(DuelGameBuilder*))(Il2CppBase() + 0x400C334))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(DuelGameBuilder*))(Il2CppBase() + 0x400C3F0))(this);
	}

};

}
