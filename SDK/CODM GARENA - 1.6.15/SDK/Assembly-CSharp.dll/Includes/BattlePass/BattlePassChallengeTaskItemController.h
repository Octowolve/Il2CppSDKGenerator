#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassChallengeTaskItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassChallengeTaskItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mCacheData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwardBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskTypeByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x32791F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x3279298))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x32793E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x327953C))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(BattlePassChallengeTaskItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3279658))(this, list, index, data);
	}
	template <typename T = void> T OnAwardBtnClick() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x3279E74))(this);
	}
	template <typename T = uintptr_t> T GetTaskTypeByMode(uintptr_t mode) {
		return ((T (*)(BattlePassChallengeTaskItemController*, uintptr_t))(Il2CppBase() + 0x327A148))(this, mode);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x327A204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x327A20C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x327A214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassChallengeTaskItemController*))(Il2CppBase() + 0x327A21C))(this);
	}

};

}
