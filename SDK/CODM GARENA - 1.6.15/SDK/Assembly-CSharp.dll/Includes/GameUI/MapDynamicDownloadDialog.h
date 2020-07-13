#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MapDynamicDownloadDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MapDynamicDownloadDialog"));
	}

	template <typename T = uintptr_t> T& popTemplate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& popupViewAnimator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NetDesc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& gridItemPrefab() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listDownloadConfigs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& CHECK_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeforeClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAniInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Show() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1F9F470))(this);
	}
	template <typename T = bool> T CheckTime(Il2CppString* beginTime) {
		return ((T (*)(MapDynamicDownloadDialog*, Il2CppString*))(Il2CppBase() + 0x1F9FD6C))(this, beginTime);
	}
	template <typename T = uintptr_t> T PlayOpenAni() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA045C))(this);
	}
	template <typename T = uintptr_t> T PlayReverse() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA0544))(this);
	}
	template <typename T = void> T BeforeClose() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA062C))(this);
	}
	template <typename T = uintptr_t> T DelayClose() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA07FC))(this);
	}
	template <typename T = void> T OnRefreshItem(uintptr_t item, int32_t idx) {
		return ((T (*)(MapDynamicDownloadDialog*, uintptr_t, int32_t))(Il2CppBase() + 0x1FA08E4))(this, item, idx);
	}
	template <typename T = void> T OnCancelBtnClick(int32_t questId) {
		return ((T (*)(MapDynamicDownloadDialog*, int32_t))(Il2CppBase() + 0x1FA0D88))(this, questId);
	}
	template <typename T = void> T OnDownloadBtnClick(int32_t questId) {
		return ((T (*)(MapDynamicDownloadDialog*, int32_t))(Il2CppBase() + 0x1FA0F1C))(this, questId);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA11A0))(this);
	}
	template <typename T = void> T SetAniInfo() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA0290))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA1244))(this);
	}
	template <typename T = void> T SortItems() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA008C))(this);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(MapDynamicDownloadDialog*))(Il2CppBase() + 0x1FA1334))(this);
	}
	template <typename T = int32_t> static T SortItemsm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1FA1448))(0, x, y);
	}

};

}
