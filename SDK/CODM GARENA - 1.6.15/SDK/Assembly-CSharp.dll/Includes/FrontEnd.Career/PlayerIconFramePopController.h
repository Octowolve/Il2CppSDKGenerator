#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class PlayerIconFramePopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "PlayerIconFramePopController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_PlayerIconFrameListCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_IconList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CurrentShowingIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheIconID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_CurrenrEPlayerIconType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _allOwnCards() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int64_t> T& _equipCardId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _curSelectCallingCardIdx() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& bUnEquip() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _callingCardDatas() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCallingCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCardScrollviewDragBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCallingCardRenders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCullingCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCallingCardUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectCallingcardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCallingCardEquipBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshCallingCardItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCallingCardEquipBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetShowIconResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySetNameResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTypeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFrameBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCallingCardBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x290FEA8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x290FF58))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x291002C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29105EC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29106FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2910D58))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2911094))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x291134C))(this);
	}
	template <typename T = void> T OnRefreshRedPoint(uintptr_t msg) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x2911604))(this, msg);
	}
	template <typename T = void> T InitPendingIcon(uintptr_t type) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x29116F8))(this, type);
	}
	template <typename T = void> T ShowCallingCard() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2911F50))(this);
	}
	template <typename T = void> T OnCardScrollviewDragBegin() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29126A4))(this);
	}
	template <typename T = void> T UpdateCallingCardRenders() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x291248C))(this);
	}
	template <typename T = void> T OnCullingCallBack(int32_t idx, uintptr_t item) {
		return ((T (*)(PlayerIconFramePopController*, int32_t, uintptr_t))(Il2CppBase() + 0x2912778))(this, idx, item);
	}
	template <typename T = void> T InitCallingCardUI() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29102E0))(this);
	}
	template <typename T = void> T OnSelectCallingcardItem(uintptr_t item, int32_t idx, bool isSelect) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x2912E44))(this, item, idx, isSelect);
	}
	template <typename T = void> T UpdateCallingCardEquipBtn() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2913070))(this);
	}
	template <typename T = void> T OnRefreshCallingCardItem(uintptr_t item, int32_t idx) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t, int32_t))(Il2CppBase() + 0x2913340))(this, item, idx);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x291360C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t, int32_t))(Il2CppBase() + 0x291370C))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2911DB4))(this, list, controller, index);
	}
	template <typename T = void> T OnShowBtnClick() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29137F0))(this);
	}
	template <typename T = void> T OnCallingCardEquipBtn() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2913960))(this);
	}
	template <typename T = void> T OnResetBtnClick() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2913C58))(this);
	}
	template <typename T = void> T OnUnEquipBtnClick() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2913E20))(this);
	}
	template <typename T = void> T OnGetShowIconResponse(uintptr_t Msg) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x2913FB4))(this, Msg);
	}
	template <typename T = void> T OnNotifySetNameResponse(uintptr_t Msg) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x29147A8))(this, Msg);
	}
	template <typename T = void> T OnTypeChange(uintptr_t Msg) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x2914984))(this, Msg);
	}
	template <typename T = void> T OnIconBtnClick(uintptr_t obj) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x2914AE4))(this, obj);
	}
	template <typename T = void> T OnFrameBtnClick(uintptr_t obj) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x2914C24))(this, obj);
	}
	template <typename T = void> T OnCallingCardBtnClick(uintptr_t obj) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t))(Il2CppBase() + 0x2914D64))(this, obj);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2914EA0))(this);
	}
	template <typename T = void> T OnGoBtnClick() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x2915094))(this);
	}
	template <typename T = int32_t> static T InitPendingIconm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2915510))(0, a, b);
	}
	template <typename T = int32_t> T ShowCallingCardm__1(uintptr_t x, uintptr_t y) {
		return ((T (*)(PlayerIconFramePopController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2915588))(this, x, y);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(PlayerIconFramePopController*))(Il2CppBase() + 0x29156F0))(this);
	}

};

}
