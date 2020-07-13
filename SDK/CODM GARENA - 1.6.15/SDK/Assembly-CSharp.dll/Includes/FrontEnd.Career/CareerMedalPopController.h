#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerMedalPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerMedalPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_EmblemListCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EmbleDataList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CurrentShowingEmblem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheEmblemID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& OutSelectIndex() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingEmblem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMedalShowRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOutCurrentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshConfirmLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x2908E70))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x2908F44))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x2909220))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x29092F8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x29095AC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x29097BC))(this);
	}
	template <typename T = void> T InitPendingEmblem(uintptr_t Type) {
		return ((T (*)(CareerMedalPopController*, uintptr_t))(Il2CppBase() + 0x2909894))(this, Type);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CareerMedalPopController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2909C90))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CareerMedalPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x290A0BC))(this, list, userContext);
	}
	template <typename T = void> T OnMedalShowRefresh(uintptr_t Msg) {
		return ((T (*)(CareerMedalPopController*, uintptr_t))(Il2CppBase() + 0x290A1A0))(this, Msg);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290A27C))(this);
	}
	template <typename T = void> T OnConfirmClick() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290A360))(this);
	}
	template <typename T = void> T RefreshData(uintptr_t Msg) {
		return ((T (*)(CareerMedalPopController*, uintptr_t))(Il2CppBase() + 0x290A80C))(this, Msg);
	}
	template <typename T = void> T SetOutCurrentIndex(int32_t index) {
		return ((T (*)(CareerMedalPopController*, int32_t))(Il2CppBase() + 0x290A8F4))(this, index);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(CareerMedalPopController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x290A9D8))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshConfirmLabel() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x2909E6C))(this);
	}
	template <typename T = bool> static T InitPendingEmblemm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x290AAC8))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290AAF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290AB00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290AB08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290AB10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290AB18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CareerMedalPopController*))(Il2CppBase() + 0x290AB20))(this);
	}

};

}
