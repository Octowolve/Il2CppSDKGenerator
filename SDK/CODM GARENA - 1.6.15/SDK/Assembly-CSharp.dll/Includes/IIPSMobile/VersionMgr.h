#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class VersionMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "VersionMgr"));
	}

	template <typename T = uintptr_t> T& mVersionMgr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCppVersionManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteCppVersionManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrInitVersionManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrUnitVersionManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrSetNextStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrPoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrCheckAppUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrCancelUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrGetCurDataVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrGetVersionMgrLastError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrGetMemorySize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrGetActionDownloadSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstallApk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> static T CreateVersionManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x499409C))(0);
	}
	template <typename T = void> static T ReleaseVersionManager(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x499416C))(0, versionMgr);
	}
	template <typename T = unsigned char> static T InitVersionMgr(uintptr_t versionMgr, uintptr_t callback, uint32_t bufferSize, uintptr_t configBuffer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x499424C))(0, versionMgr, callback, bufferSize, configBuffer);
	}
	template <typename T = unsigned char> static T UnitVersionMgr(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4994340))(0, versionMgr);
	}
	template <typename T = unsigned char> static T SetNextStage(uintptr_t versionMgr, unsigned char goonWork) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x4994420))(0, versionMgr, goonWork);
	}
	template <typename T = unsigned char> static T CheckAppUpdate(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4994508))(0, versionMgr);
	}
	template <typename T = void> static T CancelUpdate(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49945E8))(0, versionMgr);
	}
	template <typename T = int16_t> static T GetCurDataVersion(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49946C8))(0, versionMgr);
	}
	template <typename T = uint32_t> static T GetVersionMgrLastError(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49947A8))(0, versionMgr);
	}
	template <typename T = uint64_t> static T GetMemorySize(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4994888))(0, versionMgr);
	}
	template <typename T = uint32_t> static T GetActionDownloadSpeed(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4994968))(0, versionMgr);
	}
	template <typename T = void> static T PoolVersionManager(uintptr_t versionMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4994A48))(0, versionMgr);
	}
	template <typename T = void> T CreateCppVersionManager() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x498DE48))(this);
	}
	template <typename T = void> T DeleteCppVersionManager() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x498EBD0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x4994B28))(this);
	}
	template <typename T = bool> T MgrInitVersionManager(uintptr_t callBack, uint32_t bufferSize, Il2CppArray<uintptr_t>* configBuffer) {
		return ((T (*)(VersionMgr*, uintptr_t, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x498E794))(this, callBack, bufferSize, configBuffer);
	}
	template <typename T = bool> T MgrUnitVersionManager() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x498EAD8))(this);
	}
	template <typename T = bool> T MgrSetNextStage(bool goonWork) {
		return ((T (*)(VersionMgr*, bool))(Il2CppBase() + 0x4994BF8))(this, goonWork);
	}
	template <typename T = bool> T MgrPoll() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x4994CFC))(this);
	}
	template <typename T = bool> T MgrCheckAppUpdate() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x4994DEC))(this);
	}
	template <typename T = void> T MgrCancelUpdate() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x4994EE4))(this);
	}
	template <typename T = int16_t> T MgrGetCurDataVersion() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x4994FC4))(this);
	}
	template <typename T = uint32_t> T MgrGetVersionMgrLastError() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x498E908))(this);
	}
	template <typename T = uint64_t> T MgrGetMemorySize() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x49950B0))(this);
	}
	template <typename T = uint32_t> T MgrGetActionDownloadSpeed() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x499519C))(this);
	}
	template <typename T = bool> T InstallApk(Il2CppString* path) {
		return ((T (*)(VersionMgr*, Il2CppString*))(Il2CppBase() + 0x4995284))(this, path);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(VersionMgr*))(Il2CppBase() + 0x4995504))(this);
	}

};

}
