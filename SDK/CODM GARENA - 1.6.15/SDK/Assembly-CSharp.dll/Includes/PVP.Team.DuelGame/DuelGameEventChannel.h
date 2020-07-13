#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGameEventChannel"));
	}

	template <typename T = uintptr_t> T& mLocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_DuelGameInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_DuelGame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(DuelGameEventChannel*))(Il2CppBase() + 0x400C4A8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DuelGameEventChannel*))(Il2CppBase() + 0x400C558))(this);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(DuelGameEventChannel*, uintptr_t))(Il2CppBase() + 0x400C700))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DuelGameEventChannel*))(Il2CppBase() + 0x400CC48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(DuelGameEventChannel*, uintptr_t))(Il2CppBase() + 0x400CC50))(this, P0);
	}

};

}
