#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TssSdk2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TssSdk2"));
	}

	template <typename T = int32_t> static T& TssSdkCmd_IsEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TssSDKCmd_CommQuery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tp2SdkInitEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tp2UserLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tp2SetGamestatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tp2Ioctl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tp2GetEmulatorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadIntPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T Tp2SdkInitEx(int32_t gameId, Il2CppString* appKey) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x4AF6D30))(0, gameId, appKey);
	}
	template <typename T = void> static T Tp2UserLogin(int32_t account_type, int32_t world_id, Il2CppString* open_id, Il2CppString* role_id) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4AF6EEC))(0, account_type, world_id, open_id, role_id);
	}
	template <typename T = void> static T Tp2SetGamestatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AF70F8))(0, status);
	}
	template <typename T = Il2CppString*> static T Tp2Ioctl(Il2CppString* cmd) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF7298))(0, cmd);
	}
	template <typename T = Il2CppString*> static T Tp2GetEmulatorName(bool wait) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AF786C))(0, wait);
	}
	template <typename T = uintptr_t> static T ReadIntPtr(uintptr_t addr, int32_t off) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4AF75F0))(0, addr, off);
	}
	template <typename T = int32_t> static T tp2_sdk_init_ex(int32_t gameId, Il2CppString* appKey) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x4AF6DD8))(0, gameId, appKey);
	}
	template <typename T = int32_t> static T tp2_setuserinfo(int32_t accountType, int32_t worldId, Il2CppString* openId, Il2CppString* roleId) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4AF6FC0))(0, accountType, worldId, openId, roleId);
	}
	template <typename T = int32_t> static T tp2_setoptions(int32_t options) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AF71B8))(0, options);
	}
	template <typename T = uintptr_t> static T tp2_sdk_ioctl(int32_t request, Il2CppString* param) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x4AF74DC))(0, request, param);
	}
	template <typename T = int32_t> static T tp2_free_anti_data(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AF778C))(0, info);
	}

};

}
