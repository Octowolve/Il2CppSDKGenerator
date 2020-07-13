#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class IDCollectionMainControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "IDCollectionMainController_CA"));
	}

	template <typename T = uintptr_t> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_ParentBG() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePersonalController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateServerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRankingController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_ParentWidget() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DC2BC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DC49C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DC540))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DC884))(this);
	}
	template <typename T = Il2CppString*> T GetTabMask() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DC968))(this);
	}
	template <typename T = void> T SetActive(bool isActive, bool recursively, bool enableOptimize) {
		return ((T (*)(IDCollectionMainControllerCA*, bool, bool, bool))(Il2CppBase() + 0x41DCA4C))(this, isActive, recursively, enableOptimize);
	}
	template <typename T = uintptr_t> T CreatePersonalController() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DCBD8))(this);
	}
	template <typename T = uintptr_t> T CreateServerController() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DCD80))(this);
	}
	template <typename T = uintptr_t> T CreateRankingController() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DCF28))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DC604))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DD0D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DD0D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DD0E0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetTabMask() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DD0E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1, bool P2) {
		return ((T (*)(IDCollectionMainControllerCA*, bool, bool, bool))(Il2CppBase() + 0x41DD0F0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreatePersonalController() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DD110))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateServerController() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DD118))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateRankingController() {
		return ((T (*)(IDCollectionMainControllerCA*))(Il2CppBase() + 0x41DD120))(this);
	}

};

}
