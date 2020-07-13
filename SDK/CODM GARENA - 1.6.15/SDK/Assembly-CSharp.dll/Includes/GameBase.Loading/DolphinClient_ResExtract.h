#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinClientResExtract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinClient_ResExtract"));
	}

	template <typename T = bool> T& m_bNeedExtract() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_bSuccessful() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupUpdateVersionCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsNeedFirstExtract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeNewVersionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeFirstExtractSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeChangeSourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeUpdateSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractLocalPkgSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteResourceVersionFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IIPSErrorCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActionMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_mNeedExtract() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E3487C))(this);
	}
	template <typename T = void> T SetupUpdateVersionCfg() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E34884))(this);
	}
	template <typename T = void> T CheckIsNeedFirstExtract() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E34A1C))(this);
	}
	template <typename T = void> T StartCheckUpdate() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E34F10))(this);
	}
	template <typename T = void> T OnNoticeNewVersionInfo(uintptr_t newVersionInfo) {
		return ((T (*)(DolphinClientResExtract*, uintptr_t))(Il2CppBase() + 0x2E35120))(this, newVersionInfo);
	}
	template <typename T = void> T OnNoticeFirstExtractSuccess() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E3526C))(this);
	}
	template <typename T = void> T OnNoticeChangeSourceVersion(Il2CppString* newVersionStr) {
		return ((T (*)(DolphinClientResExtract*, Il2CppString*))(Il2CppBase() + 0x2E353DC))(this, newVersionStr);
	}
	template <typename T = void> T OnNoticeUpdateSuccess() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E3547C))(this);
	}
	template <typename T = void> T ExtractLocalPkgSuccess() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E34FF8))(this);
	}
	template <typename T = void> T WriteResourceVersionFile() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E35528))(this);
	}
	template <typename T = Il2CppString*> T IIPSErrorCheck(int32_t errorType) {
		return ((T (*)(DolphinClientResExtract*, int32_t))(Il2CppBase() + 0x2E35710))(this, errorType);
	}
	template <typename T = unsigned char> T OnActionMsg(Il2CppString* msg) {
		return ((T (*)(DolphinClientResExtract*, Il2CppString*))(Il2CppBase() + 0x2E35B84))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_StartCheckUpdate() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E35CD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNoticeFirstExtractSuccess() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E35CD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNoticeChangeSourceVersion(Il2CppString* P0) {
		return ((T (*)(DolphinClientResExtract*, Il2CppString*))(Il2CppBase() + 0x2E35CD8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNoticeUpdateSuccess() {
		return ((T (*)(DolphinClientResExtract*))(Il2CppBase() + 0x2E35CDC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_IIPSErrorCheck(int32_t P0) {
		return ((T (*)(DolphinClientResExtract*, int32_t))(Il2CppBase() + 0x2E35CE0))(this, P0);
	}
	template <typename T = unsigned char> T xLuaBaseProxy_OnActionMsg(Il2CppString* P0) {
		return ((T (*)(DolphinClientResExtract*, Il2CppString*))(Il2CppBase() + 0x2E35CE4))(this, P0);
	}

};

}
