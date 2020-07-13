#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassBuyTierItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassBuyTierItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mBattlePassDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& beginTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& endTime() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCutOffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLimitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInLimitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassBuyTierItemController*))(Il2CppBase() + 0x32755C0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassBuyTierItemController*))(Il2CppBase() + 0x3275664))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(BattlePassBuyTierItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x32757B4))(this, list, index, data);
	}
	template <typename T = void> T SetCutOffInfo(uintptr_t Conf) {
		return ((T (*)(BattlePassBuyTierItemController*, uintptr_t))(Il2CppBase() + 0x3276370))(this, Conf);
	}
	template <typename T = Il2CppString*> T GetLimitTime() {
		return ((T (*)(BattlePassBuyTierItemController*))(Il2CppBase() + 0x32765B0))(this);
	}
	template <typename T = bool> T IsInLimitTime() {
		return ((T (*)(BattlePassBuyTierItemController*))(Il2CppBase() + 0x3275DE4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassBuyTierItemController*))(Il2CppBase() + 0x3276C7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassBuyTierItemController*))(Il2CppBase() + 0x3276C84))(this);
	}

};

}
