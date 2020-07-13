#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TssSDK {

class TssSDK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TssSDK", "TssSDK"));
	}

	template <typename T = Il2CppString*> static T& LibName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUserInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is64bit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is32bit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadIntPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T Init(int32_t gameId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x444237C))(0, gameId);
	}
	template <typename T = void> static T SetUserInfo(int32_t entryId, Il2CppString* openId) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x44424FC))(0, entryId, openId);
	}
	template <typename T = void> static T OnPause() {
		return ((T (*)(void *))(Il2CppBase() + 0x44426B0))(0);
	}
	template <typename T = void> static T OnResume() {
		return ((T (*)(void *))(Il2CppBase() + 0x4442818))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetReportData() {
		return ((T (*)(void *))(Il2CppBase() + 0x4442980))(0);
	}
	template <typename T = void> static T OnRecvData(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4442EF0))(0, data);
	}
	template <typename T = bool> static T Is64bit() {
		return ((T (*)(void *))(Il2CppBase() + 0x444309C))(0);
	}
	template <typename T = bool> static T Is32bit() {
		return ((T (*)(void *))(Il2CppBase() + 0x4443150))(0);
	}
	template <typename T = uintptr_t> static T ReadIntPtr(uintptr_t addr, int32_t off) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4442C58))(0, addr, off);
	}
	template <typename T = void> static T TssSDKInit(int32_t gameID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x444241C))(0, gameID);
	}
	template <typename T = void> static T TssSDKSetUserInfo(int32_t entryId, Il2CppString* openId) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x44425A4))(0, entryId, openId);
	}
	template <typename T = void> static T TssSDKOnPause() {
		return ((T (*)(void *))(Il2CppBase() + 0x4442748))(0);
	}
	template <typename T = void> static T TssSDKOnResume() {
		return ((T (*)(void *))(Il2CppBase() + 0x44428B0))(0);
	}
	template <typename T = uintptr_t> static T TssSDKGetReportData() {
		return ((T (*)(void *))(Il2CppBase() + 0x4442B88))(0);
	}
	template <typename T = void> static T TssSDKDelReportData(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4442E10))(0, info);
	}
	template <typename T = void> static T TssSDKOnRecvData(Il2CppArray<uintptr_t>* data, int32_t data_len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4442FAC))(0, data, data_len);
	}

};

}
