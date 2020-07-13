#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.MlkGame {

class MlkGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.MlkGame", "MlkGameUIScene"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t msg) {
		return ((T (*)(MlkGameUIScene*, uintptr_t))(Il2CppBase() + 0x40460A4))(this, msg);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(MlkGameUIScene*))(Il2CppBase() + 0x4046144))(this);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(MlkGameUIScene*))(Il2CppBase() + 0x40461E4))(this);
	}
	template <typename T = void> T OnDeadReplayEnd(uintptr_t msg) {
		return ((T (*)(MlkGameUIScene*, uintptr_t))(Il2CppBase() + 0x404627C))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(MlkGameUIScene*, uintptr_t))(Il2CppBase() + 0x40463DC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(MlkGameUIScene*))(Il2CppBase() + 0x40463E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(MlkGameUIScene*))(Il2CppBase() + 0x40463EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDeadReplayEnd(uintptr_t P0) {
		return ((T (*)(MlkGameUIScene*, uintptr_t))(Il2CppBase() + 0x40463F4))(this, P0);
	}

};

}
