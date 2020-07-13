#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenericDownloadPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenericDownloadPopController"));
	}

	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listDownloadConfigs() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& updateDataTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopWindowOffClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopWindowOnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePopWindowBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAniInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E00CD4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E00D78))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E00E7C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E02158))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E02360))(this);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E01148))(this);
	}
	template <typename T = bool> T CheckTime(Il2CppString* beginTime) {
		return ((T (*)(GenericDownloadPopController*, Il2CppString*))(Il2CppBase() + 0x3E0253C))(this, beginTime);
	}
	template <typename T = void> T OnRefreshItem(uintptr_t item, int32_t idx) {
		return ((T (*)(GenericDownloadPopController*, uintptr_t, int32_t))(Il2CppBase() + 0x3E02A60))(this, item, idx);
	}
	template <typename T = void> T OnCancelBtnClick(int32_t questId) {
		return ((T (*)(GenericDownloadPopController*, int32_t))(Il2CppBase() + 0x3E02FD0))(this, questId);
	}
	template <typename T = void> T OnDownloadBtnClick(int32_t questId) {
		return ((T (*)(GenericDownloadPopController*, int32_t))(Il2CppBase() + 0x3E03164))(this, questId);
	}
	template <typename T = void> T UpdateData() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E03358))(this);
	}
	template <typename T = void> T SortItems() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E0285C))(this);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E03404))(this);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E0352C))(this);
	}
	template <typename T = void> T OnPopWindowOffClick() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E037CC))(this);
	}
	template <typename T = void> T OnPopWindowOnClick() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E038D4))(this);
	}
	template <typename T = void> T UpdatePopWindowBtn() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E01F08))(this);
	}
	template <typename T = void> T PlayOpenAni() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E039DC))(this);
	}
	template <typename T = void> T SetAniInfo() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E01D8C))(this);
	}
	template <typename T = void> T PlayReverse() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E03B50))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E03C64))(this);
	}
	template <typename T = int32_t> static T SortItemsm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E03D2C))(0, x, y);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E04060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E04068))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E04070))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E04078))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GenericDownloadPopController*))(Il2CppBase() + 0x3E04080))(this);
	}

};

}
