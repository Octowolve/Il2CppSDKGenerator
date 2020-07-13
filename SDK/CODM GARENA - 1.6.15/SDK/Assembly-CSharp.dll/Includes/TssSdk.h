#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TssSdk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TssSdk"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Is64bit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is32bit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkRegistTssInfoReceiver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkTssInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkSetGameStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkSetUserInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkSetUserInfoEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkGetSdkReportData2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkGetReportData2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkGetReportData3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkRecvSecSignature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadIntPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkRcvAntiData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkEncrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TssSdkDecrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> static T Is64bit() {
		return ((T (*)(void *))(Il2CppBase() + 0x496BEE8))(0);
	}
	template <typename T = bool> static T Is32bit() {
		return ((T (*)(void *))(Il2CppBase() + 0x496BF9C))(0);
	}
	template <typename T = void> static T TssSdkRegistTssInfoReceiver(uintptr_t receiver) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496C050))(0, receiver);
	}
	template <typename T = Il2CppString*> static T TssSdkTssInfo(Il2CppString* info) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x496C144))(0, info);
	}
	template <typename T = void> static T TssSdkInit(uint32_t gameId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x496C254))(0, gameId);
	}
	template <typename T = void> static T TssSdkSetGameStatus(uintptr_t gameStatus) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496C4E8))(0, gameStatus);
	}
	template <typename T = void> static T TssSdkSetUserInfo(uintptr_t entryId, Il2CppString* uin, Il2CppString* appId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x496C594))(0, entryId, uin, appId);
	}
	template <typename T = void> static T TssSdkSetUserInfoEx(uintptr_t entryId, Il2CppString* uin, Il2CppString* appId, uint32_t worldId, Il2CppString* roleId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uint32_t, Il2CppString*))(Il2CppBase() + 0x496C688))(0, entryId, uin, appId, worldId, roleId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T TssSdkGetSdkReportData2() {
		return ((T (*)(void *))(Il2CppBase() + 0x496C794))(0);
	}
	template <typename T = Il2CppString*> static T TssSdkGetReportData2() {
		return ((T (*)(void *))(Il2CppBase() + 0x496CB54))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T TssSdkGetReportData3() {
		return ((T (*)(void *))(Il2CppBase() + 0x496CC6C))(0);
	}
	template <typename T = int32_t> static T TssSdkRecvSecSignature(Il2CppString* name, Il2CppArray<uintptr_t>* buf, uint32_t buf_len, uint32_t crc) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x496D1B8))(0, name, buf, buf_len, crc);
	}
	template <typename T = uintptr_t> static T ReadIntPtr(uintptr_t addr, int32_t off) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x496CF44))(0, addr, off);
	}
	template <typename T = void> static T tss_log_str(Il2CppString* sdk_version) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x496C3E8))(0, sdk_version);
	}
	template <typename T = void> static T tss_sdk_rcv_anti_data(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496D3B4))(0, info);
	}
	template <typename T = void> static T TssSdkRcvAntiData(Il2CppArray<uintptr_t>* data, uint16_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x496D494))(0, data, length);
	}
	template <typename T = uintptr_t> static T tss_sdk_encryptpacket(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496D74C))(0, info);
	}
	template <typename T = uintptr_t> static T TssSdkEncrypt(int32_t cmd_id, Il2CppArray<uintptr_t>* src, uint32_t src_len, Il2CppArray<uintptr_t>* tar, uintptr_t tar_len) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, uint32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x496D8A4))(0, cmd_id, src, src_len, tar, tar_len);
	}
	template <typename T = uintptr_t> static T tss_sdk_decryptpacket(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496DA98))(0, info);
	}
	template <typename T = uintptr_t> static T TssSdkDecrypt(Il2CppArray<uintptr_t>* src, uint32_t src_len, Il2CppArray<uintptr_t>* tar, uintptr_t tar_len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x496DBE8))(0, src, src_len, tar, tar_len);
	}
	template <typename T = void> static T tss_enable_get_report_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x496C318))(0);
	}
	template <typename T = uintptr_t> static T tss_get_report_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x496DDD4))(0);
	}
	template <typename T = uintptr_t> static T tss_get_report_data2() {
		return ((T (*)(void *))(Il2CppBase() + 0x496CA84))(0);
	}
	template <typename T = uintptr_t> static T tss_get_report_data3() {
		return ((T (*)(void *))(Il2CppBase() + 0x496CE74))(0);
	}
	template <typename T = void> static T tss_del_report_data(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496DEA4))(0, info);
	}
	template <typename T = void> static T tss_del_report_data3(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x496D0D8))(0, info);
	}
	template <typename T = int32_t> static T tss_recv_sec_signature(Il2CppString* name, Il2CppArray<uintptr_t>* data, uint32_t data_len, uint32_t crc) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x496D28C))(0, name, data, data_len, crc);
	}
	template <typename T = void> static T tss_unity_str(Il2CppArray<uintptr_t>* data, uint32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x496DF84))(0, data, len);
	}

};

}
