#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKAccount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKAccount"));
	}

	template <typename T = void*> static T& AccountEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_AccountEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_AccountEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onAccountEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVerifyCodeStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRegisterStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Modify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestVerifyCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPassword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T add_AccountEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46B9F04))(0, value);
	}
	template <typename T = void> static T remove_AccountEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46BA104))(0, value);
	}
	template <typename T = void> T onAccountEvent(uintptr_t ret) {
		return ((T (*)(MSDKAccount*, uintptr_t))(Il2CppBase() + 0x46BA304))(this, ret);
	}
	template <typename T = void> static T requestVerifyCodeAdapter(Il2CppString* channel, Il2CppString* account, int32_t codeType, int32_t accountType, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BA3E4))(0, channel, account, codeType, accountType, langType, areaCode, extraJson);
	}
	template <typename T = void> static T resetPasswordAdapter(Il2CppString* channel, Il2CppString* account, Il2CppString* password, int32_t accountType, int32_t verifyCode, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BA558))(0, channel, account, password, accountType, verifyCode, langType, areaCode, extraJson);
	}
	template <typename T = void> static T modifyAdapter(Il2CppString* channel, Il2CppString* account, int32_t accountType, int32_t verifyCode, int32_t verifyCodeModify, Il2CppString* accountModify, int32_t accountTypeModify, Il2CppString* areaCodeModify, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BA6E4))(0, channel, account, accountType, verifyCode, verifyCodeModify, accountModify, accountTypeModify, areaCodeModify, langType, areaCode, extraJson);
	}
	template <typename T = void> static T getRegisterStatusAdapter(Il2CppString* channel, Il2CppString* account, int32_t accountType, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BA8AC))(0, channel, account, accountType, langType, areaCode, extraJson);
	}
	template <typename T = void> static T getVerifyCodeStatusAdapter(Il2CppString* channel, Il2CppString* account, int32_t accountType, int32_t verifyCode, int32_t codeType, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BAA18))(0, channel, account, accountType, verifyCode, codeType, langType, areaCode, extraJson);
	}
	template <typename T = void> static T GetVerifyCodeStatus(Il2CppString* channel, Il2CppString* account, int32_t accountType, int32_t verifyCode, int32_t codeType, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BAB94))(0, channel, account, accountType, verifyCode, codeType, langType, areaCode, extraJson);
	}
	template <typename T = void> static T GetRegisterStatus(Il2CppString* channel, Il2CppString* account, int32_t accountType, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BB08C))(0, channel, account, accountType, langType, areaCode, extraJson);
	}
	template <typename T = void> static T Modify(Il2CppString* channel, Il2CppString* account, int32_t accountType, int32_t verifyCode, int32_t verifyCodeModify, Il2CppString* accountModify, int32_t accountTypeModify, Il2CppString* areaCodeModify, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BB3A8))(0, channel, account, accountType, verifyCode, verifyCodeModify, accountModify, accountTypeModify, areaCodeModify, langType, areaCode, extraJson);
	}
	template <typename T = void> static T RequestVerifyCode(Il2CppString* channel, Il2CppString* account, int32_t codeType, int32_t accountType, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BB718))(0, channel, account, codeType, accountType, langType, areaCode, extraJson);
	}
	template <typename T = void> static T ResetPassword(Il2CppString* channel, Il2CppString* account, Il2CppString* password, int32_t accountType, int32_t verifyCode, Il2CppString* langType, Il2CppString* areaCode, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46BBA4C))(0, channel, account, password, accountType, verifyCode, langType, areaCode, extraJson);
	}
	template <typename T = void> static T OnAccountRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46BBD90))(0, json);
	}

};

}
