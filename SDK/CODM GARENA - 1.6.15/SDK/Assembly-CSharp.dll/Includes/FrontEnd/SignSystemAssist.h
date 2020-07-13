#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = double> T& m_LastDay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_HasCheckNeedForcePopupTimes_Normal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& HasCheckNeedForcePopupTimes_NewFish() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& OneDay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& textNum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCheckNeedForcePopupTimesNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSignCheckFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetSignInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSignInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSignResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestRemedy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemedyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SignPushWarn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPushContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEventNameByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextRewardDaysName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextRewardDaysText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AndroidPush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T AddCheckNeedForcePopupTimesNormal() {
		return ((T (*)(SignSystemAssist*))(Il2CppBase() + 0x38609E4))(this);
	}
	template <typename T = bool> T get_NeedForcePopup_Normal() {
		return ((T (*)(SignSystemAssist*))(Il2CppBase() + 0x3865434))(this);
	}
	template <typename T = bool> T get_NeedForcePopup_NewFish() {
		return ((T (*)(SignSystemAssist*))(Il2CppBase() + 0x3865644))(this);
	}
	template <typename T = void> T ClearSignCheckFlag() {
		return ((T (*)(SignSystemAssist*))(Il2CppBase() + 0x385CEC8))(this);
	}
	template <typename T = void> T RequestGetSignInfo() {
		return ((T (*)(SignSystemAssist*))(Il2CppBase() + 0x38656A4))(this);
	}
	template <typename T = void> T OnGetSignInfoResponse(uintptr_t res) {
		return ((T (*)(SignSystemAssist*, uintptr_t))(Il2CppBase() + 0x38657D4))(this, res);
	}
	template <typename T = void> T RequestSign(bool bNewFish) {
		return ((T (*)(SignSystemAssist*, bool))(Il2CppBase() + 0x3860BE0))(this, bNewFish);
	}
	template <typename T = void> T OnSignResponse(uintptr_t res) {
		return ((T (*)(SignSystemAssist*, uintptr_t))(Il2CppBase() + 0x3865998))(this, res);
	}
	template <typename T = void> T RequestRemedy() {
		return ((T (*)(SignSystemAssist*))(Il2CppBase() + 0x3863FEC))(this);
	}
	template <typename T = void> T OnRemedyResponse(uintptr_t res) {
		return ((T (*)(SignSystemAssist*, uintptr_t))(Il2CppBase() + 0x386673C))(this, res);
	}
	template <typename T = void> T SignPushWarn(uint64_t firstTime) {
		return ((T (*)(SignSystemAssist*, uint64_t))(Il2CppBase() + 0x3865C50))(this, firstTime);
	}
	template <typename T = void> T SetPushContent(int32_t day, uint32_t time) {
		return ((T (*)(SignSystemAssist*, int32_t, uint32_t))(Il2CppBase() + 0x3866C70))(this, day, time);
	}
	template <typename T = Il2CppString*> T GetEventNameByTime(int32_t pushDay) {
		return ((T (*)(SignSystemAssist*, int32_t))(Il2CppBase() + 0x3867218))(this, pushDay);
	}
	template <typename T = Il2CppString*> T GetNextRewardDaysName() {
		return ((T (*)(SignSystemAssist*))(Il2CppBase() + 0x3867100))(this);
	}
	template <typename T = Il2CppString*> T GetNextRewardDaysText(int32_t days) {
		return ((T (*)(SignSystemAssist*, int32_t))(Il2CppBase() + 0x386741C))(this, days);
	}
	template <typename T = uint64_t> T GetNumDay(uint32_t time, bool isBegin) {
		return ((T (*)(SignSystemAssist*, uint32_t, bool))(Il2CppBase() + 0x3866990))(this, time, isBegin);
	}
	template <typename T = uint64_t> T GetNumByTime(uint64_t time) {
		return ((T (*)(SignSystemAssist*, uint64_t))(Il2CppBase() + 0x3866DEC))(this, time);
	}
	template <typename T = void> T AndroidPush(uint64_t firstTime) {
		return ((T (*)(SignSystemAssist*, uint64_t))(Il2CppBase() + 0x3866470))(this, firstTime);
	}

};

}
