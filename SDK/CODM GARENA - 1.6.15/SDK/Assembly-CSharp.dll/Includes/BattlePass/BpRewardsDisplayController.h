#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpRewardsDisplayController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpRewardsDisplayController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& bpDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& battlepassConf() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& NormalAwardDic() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& PlusAwardDic() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CurSelectedItemId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AwardList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& defaultIndex() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBpLvConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwardDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormalScrollViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlusScrollViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompareWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C48AF4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C48B98))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C48D18))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C49BAC))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C49EC8))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4B3C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4B470))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4B5A4))(this);
	}
	template <typename T = void> T GetBpLvConfig() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C48DE0))(this);
	}
	template <typename T = void> T SetAwardDic(Il2CppList<uintptr_t>* AwardList, Il2CppDictionary<int32_t, int32_t>* AwardDic) {
		return ((T (*)(BpRewardsDisplayController*, Il2CppList<uintptr_t>*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x2C4B6B4))(this, AwardList, AwardDic);
	}
	template <typename T = void> T SetNormalScrollViewData(Il2CppDictionary<int32_t, int32_t>* AwardDic) {
		return ((T (*)(BpRewardsDisplayController*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x2C48F08))(this, AwardDic);
	}
	template <typename T = void> T SetPlusScrollViewData(Il2CppDictionary<int32_t, int32_t>* AwardDic) {
		return ((T (*)(BpRewardsDisplayController*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x2C4952C))(this, AwardDic);
	}
	template <typename T = void> T OnCompareWeaponBtnClick() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4B8CC))(this);
	}
	template <typename T = void> T OnItemClick(uintptr_t param) {
		return ((T (*)(BpRewardsDisplayController*, uintptr_t))(Il2CppBase() + 0x2C4BB34))(this, param);
	}
	template <typename T = void> T ResetScrollView() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C49D28))(this);
	}
	template <typename T = void> T ShowWeaponInfo() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C49FBC))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE50))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BpRewardsDisplayController*))(Il2CppBase() + 0x2C4BE84))(this);
	}

};

}
