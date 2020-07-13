#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateSensitiveInputParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateSensitiveInputParam"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RotateSensitiveModeArr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mIsSyncData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotatesitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotatesitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealRotatesitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRealRotatesitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotatesitiveConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSensitiveFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSensitiveFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurGyroscopeSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRotateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_IsSyncData() {
		return ((T (*)(RotateSensitiveInputParam*))(Il2CppBase() + 0x4144DEC))(this);
	}
	template <typename T = void> T set_IsSyncData(bool value) {
		return ((T (*)(RotateSensitiveInputParam*, bool))(Il2CppBase() + 0x4144DF4))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RotateSensitiveInputParam*))(Il2CppBase() + 0x4144EEC))(this);
	}
	template <typename T = void> T Reset(uintptr_t gameModeType) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t))(Il2CppBase() + 0x41453C0))(this, gameModeType);
	}
	template <typename T = void> T SetRotatesitive(uintptr_t modeType, uintptr_t sensitiveType, float value) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x414578C))(this, modeType, sensitiveType, value);
	}
	template <typename T = float> T GetRotatesitive(uintptr_t modeType, uintptr_t sensitiveType) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4145A9C))(this, modeType, sensitiveType);
	}
	template <typename T = float> static T GetRealRotatesitive(uintptr_t modeType, uintptr_t sensitiveType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4145C74))(0, modeType, sensitiveType);
	}
	template <typename T = void> static T SetRealRotatesitive(uintptr_t modeType, uintptr_t sensitiveType, float value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4145DCC))(0, modeType, sensitiveType, value);
	}
	template <typename T = uintptr_t> T GetRotatesitiveConfig(uintptr_t modeType, uintptr_t sensitiveType) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4145F48))(this, modeType, sensitiveType);
	}
	template <typename T = float> T GetRotateSensitive() {
		return ((T (*)(RotateSensitiveInputParam*))(Il2CppBase() + 0x4146120))(this);
	}
	template <typename T = void> T GetGamepadRotateSensitive(uintptr_t* x, uintptr_t* y) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x41469B0))(this, x, y);
	}
	template <typename T = float> T GetRotateSensitiveFactor(uintptr_t param, uintptr_t rotateConf) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4146844))(this, param, rotateConf);
	}
	template <typename T = float> T GetSensitiveFactor(uintptr_t param, uintptr_t rotateConf) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4146C1C))(this, param, rotateConf);
	}
	template <typename T = float> T GetCurGyroscopeSensitive() {
		return ((T (*)(RotateSensitiveInputParam*))(Il2CppBase() + 0x4146DD0))(this);
	}
	template <typename T = void> T SyncRotateData(uintptr_t targetType, uintptr_t sourceType) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t, uintptr_t))(Il2CppBase() + 0x414700C))(this, targetType, sourceType);
	}
	template <typename T = uintptr_t> T GetRotateSensitive_1(uintptr_t type) {
		return ((T (*)(RotateSensitiveInputParam*, uintptr_t))(Il2CppBase() + 0x4145880))(this, type);
	}
	template <typename T = uintptr_t> T GetCurSensitive(bool considerFiring) {
		return ((T (*)(RotateSensitiveInputParam*, bool))(Il2CppBase() + 0x41465F0))(this, considerFiring);
	}

};

}
