#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class BagIndividuationMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "BagIndividuationMainController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mAvatarController() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& cacheTabType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cacheActionItemList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& cacheActionAnimationName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> static T& CurActionIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheActionData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppVector3> T& mZombieModeAvatarLocalRotationEuler() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& cacheLacquerItemList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> static T& CurLacquerIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheLacquerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& bNeedResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& m_IndviduationEffect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_NextPlayTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Random() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& RandomAStr() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& RandomBStr() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_LastIndex() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyItemTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitIndividuationDatas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortIndividuationInCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLacquer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabSwitchCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBtnView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActionEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActionGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisplayOnWinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLacquerEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLacquerGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisplayKillCameraBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayRandom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22DFF58))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E002C))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E04E0))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E0AB4))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E11EC))(this);
	}
	template <typename T = void> T ResetCamera() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E1314))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E14E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E1D84))(this);
	}
	template <typename T = void> T OnNotifyUpdateReddotData() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E1060))(this);
	}
	template <typename T = void> T OnNotifyItemTimeout(uintptr_t msg) {
		return ((T (*)(BagIndividuationMainController*, uintptr_t))(Il2CppBase() + 0x22E25D8))(this, msg);
	}
	template <typename T = void> T OnRefreshIndividuation(uintptr_t msg) {
		return ((T (*)(BagIndividuationMainController*, uintptr_t))(Il2CppBase() + 0x22E26B4))(this, msg);
	}
	template <typename T = void> T InitIndividuationDatas() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E27D0))(this);
	}
	template <typename T = int32_t> T SortIndividuation(uintptr_t a, uintptr_t b) {
		return ((T (*)(BagIndividuationMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22E34B4))(this, a, b);
	}
	template <typename T = int32_t> T SortIndividuationInCsv(uintptr_t a, uintptr_t b) {
		return ((T (*)(BagIndividuationMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22E35D8))(this, a, b);
	}
	template <typename T = void> T RefreshItemList() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E0DEC))(this);
	}
	template <typename T = void> T ShowAvatar() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E3ED8))(this);
	}
	template <typename T = void> T ShowLacquer() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E4460))(this);
	}
	template <typename T = void> T OnTabSwitchCallback(int32_t index) {
		return ((T (*)(BagIndividuationMainController*, int32_t))(Il2CppBase() + 0x22E49B4))(this, index);
	}
	template <typename T = void> T UploadReddot(uintptr_t tab) {
		return ((T (*)(BagIndividuationMainController*, uintptr_t))(Il2CppBase() + 0x22E23F4))(this, tab);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E4B68))(this);
	}
	template <typename T = void> T RefreshBtnView() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E36FC))(this);
	}
	template <typename T = void> T OnActionEquipBtnClick() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E520C))(this);
	}
	template <typename T = void> T OnActionGotoBtnClick() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E5530))(this);
	}
	template <typename T = void> T OnDisplayOnWinBtnClick() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E57D8))(this);
	}
	template <typename T = void> T OnLacquerEquipBtnClick() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E5A9C))(this);
	}
	template <typename T = void> T OnLacquerGotoBtnClick() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E5CF4))(this);
	}
	template <typename T = void> T OnDisplayKillCameraBtnClick() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E5F9C))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BagIndividuationMainController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x22E6260))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BagIndividuationMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x22E70B8))(this, list, userContext);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E6F04))(this);
	}
	template <typename T = void> T ResetPlayTime(float delayTime) {
		return ((T (*)(BagIndividuationMainController*, float))(Il2CppBase() + 0x22E719C))(this, delayTime);
	}
	template <typename T = void> T CheckPlayRandom() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E72B8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E748C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E7494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E7498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E749C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E74A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E74A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BagIndividuationMainController*))(Il2CppBase() + 0x22E74AC))(this);
	}

};

}
