#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RechargeBtnItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RechargeBtnItemView"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CdnPicture() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& redPoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Select() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Tag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TagBG() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& limitofferId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isShowCutDown() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int64_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& safeBoxView() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCdnUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTagContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPicLoadSuccessed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetCdnUrl(Il2CppString* url) {
		return ((T (*)(RechargeBtnItemView*, Il2CppString*))(Il2CppBase() + 0x3825548))(this, url);
	}
	template <typename T = void> T SetTitle(Il2CppString* title) {
		return ((T (*)(RechargeBtnItemView*, Il2CppString*))(Il2CppBase() + 0x38259C8))(this, title);
	}
	template <typename T = void> T SetCutDown(bool isShowCutDown, int64_t endTime) {
		return ((T (*)(RechargeBtnItemView*, bool, int64_t))(Il2CppBase() + 0x3825AE8))(this, isShowCutDown, endTime);
	}
	template <typename T = void> T SetShowRed(bool isShowRed) {
		return ((T (*)(RechargeBtnItemView*, bool))(Il2CppBase() + 0x3825C44))(this, isShowRed);
	}
	template <typename T = void> T SetSelect(bool isShowRed) {
		return ((T (*)(RechargeBtnItemView*, bool))(Il2CppBase() + 0x3825D64))(this, isShowRed);
	}
	template <typename T = void> T SetTagContent(Il2CppString* tag, Il2CppString* tagBG) {
		return ((T (*)(RechargeBtnItemView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3825E58))(this, tag, tagBG);
	}
	template <typename T = void> T OnPicLoadSuccessed(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(RechargeBtnItemView*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3825808))(this, url, isSuccess, texture);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RechargeBtnItemView*))(Il2CppBase() + 0x38260BC))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(RechargeBtnItemView*))(Il2CppBase() + 0x382616C))(this);
	}

};

}
