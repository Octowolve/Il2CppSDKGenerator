#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ChamberGame {

class ChamberGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ChamberGame", "ChamberGameUIScene"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerLeftRespawnCountChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ChamberGameUIScene*))(Il2CppBase() + 0x2B237D4))(this);
	}
	template <typename T = void> T OnLocalPlayerLeftRespawnCountChange(int32_t num) {
		return ((T (*)(ChamberGameUIScene*, int32_t))(Il2CppBase() + 0x2B235BC))(this, num);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t msg) {
		return ((T (*)(ChamberGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B2387C))(this, msg);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(ChamberGameUIScene*))(Il2CppBase() + 0x2B2391C))(this);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(ChamberGameUIScene*))(Il2CppBase() + 0x2B239B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChamberGameUIScene*))(Il2CppBase() + 0x2B23A54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(ChamberGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B23A5C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(ChamberGameUIScene*))(Il2CppBase() + 0x2B23A64))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(ChamberGameUIScene*))(Il2CppBase() + 0x2B23A68))(this);
	}

};

}
