#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ToStoreRatePopupDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ToStoreRatePopupDataStore"));
	}

	template <typename T = int32_t> T& startTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isNeedCD() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CDDay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& CDWeek() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& CDMonth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& activityId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MaxPopTimes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isNeedTryAward() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& awardItemId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& awardItemNum() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& shopRateUrlApple() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& shopRateUrlGooglePlay() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& shopRateServiceUrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& isNeedRefresh() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint64_t> T& seqId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isContinueSolo() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActvSelectStoreRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_StartTime() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BD488))(this);
	}
	template <typename T = void> T set_StartTime(uintptr_t value) {
		return ((T (*)(ToStoreRatePopupDataStore*, uintptr_t))(Il2CppBase() + 0x29BD550))(this, value);
	}
	template <typename T = uintptr_t> T get_EndTime() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BD628))(this);
	}
	template <typename T = void> T set_EndTime(uintptr_t value) {
		return ((T (*)(ToStoreRatePopupDataStore*, uintptr_t))(Il2CppBase() + 0x29BD6F0))(this, value);
	}
	template <typename T = int32_t> T get_CDDays() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BD7C8))(this);
	}
	template <typename T = void> T set_CDDays(int32_t value) {
		return ((T (*)(ToStoreRatePopupDataStore*, int32_t))(Il2CppBase() + 0x29BD7E8))(this, value);
	}
	template <typename T = bool> T get_IsNeedRefresh() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BD82C))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BD834))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BDC9C))(this);
	}
	template <typename T = void> T RefreshDataStore() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BD8D8))(this);
	}
	template <typename T = bool> T IsNeedPop(uintptr_t taskState) {
		return ((T (*)(ToStoreRatePopupDataStore*, uintptr_t))(Il2CppBase() + 0x29BDD40))(this, taskState);
	}
	template <typename T = void> T OnResActvSelectStoreRate(uintptr_t res) {
		return ((T (*)(ToStoreRatePopupDataStore*, uintptr_t))(Il2CppBase() + 0x29BDDF0))(this, res);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BDF60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(ToStoreRatePopupDataStore*))(Il2CppBase() + 0x29BDF68))(this);
	}

};

}
