#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsDailyTaskControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsDailyTaskController_CA"));
	}

	template <typename T = uintptr_t> T& m_View_CA() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& LeftDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsDailyTaskControllerCA*))(Il2CppBase() + 0x34E22FC))(this);
	}
	template <typename T = void> T InitEasyList() {
		return ((T (*)(LiveOpsDailyTaskControllerCA*))(Il2CppBase() + 0x34E2EA0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsDailyTaskControllerCA*))(Il2CppBase() + 0x34E30D4))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(LiveOpsDailyTaskControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x34E3178))(this, activity, bInit);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsDailyTaskControllerCA*))(Il2CppBase() + 0x34E240C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsDailyTaskControllerCA*))(Il2CppBase() + 0x34E3644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEasyList() {
		return ((T (*)(LiveOpsDailyTaskControllerCA*))(Il2CppBase() + 0x34E3648))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsDailyTaskControllerCA*))(Il2CppBase() + 0x34E3774))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0, bool P1) {
		return ((T (*)(LiveOpsDailyTaskControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x34E381C))(this, P0, P1);
	}

};

}
