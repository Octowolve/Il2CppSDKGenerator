#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileDataManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileDataManager"));
	}

	template <typename T = uintptr_t> T& mDataManager() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PollCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Uninit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataReader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataDownloader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataQuery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrGetDataMgrLastError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MgrGetMemorySize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> static T CreateDataManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x49884E4))(0);
	}
	template <typename T = void> static T ReleaseDataManager(uintptr_t dataManager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49885B4))(0, dataManager);
	}
	template <typename T = unsigned char> static T InitDataManager(uintptr_t dataManager, uint32_t bufferSize, uintptr_t configBuffer) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4988694))(0, dataManager, bufferSize, configBuffer);
	}
	template <typename T = unsigned char> static T DataMgrPollCallback(uintptr_t dataManager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4988784))(0, dataManager);
	}
	template <typename T = unsigned char> static T UnitDataManager(uintptr_t dataManager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4988864))(0, dataManager);
	}
	template <typename T = uintptr_t> static T GetDataReader(uintptr_t dataManager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4988944))(0, dataManager);
	}
	template <typename T = uintptr_t> static T GetDataDownloader(uintptr_t dataManager, unsigned char openProgressCallBack) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x4988A24))(0, dataManager, openProgressCallBack);
	}
	template <typename T = uintptr_t> static T GetDataQuery(uintptr_t dataManager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4988B0C))(0, dataManager);
	}
	template <typename T = uint32_t> static T GetLastDataMgrError(uintptr_t dataManager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4988BEC))(0, dataManager);
	}
	template <typename T = uint64_t> static T GetDataMgrMemorySize(uintptr_t dataManager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4988CCC))(0, dataManager);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x4988DAC))(this);
	}
	template <typename T = bool> T Init(uint32_t bufferSize, Il2CppArray<uintptr_t>* configBuffer) {
		return ((T (*)(IIPSMobileDataManager*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4988390))(this, bufferSize, configBuffer);
	}
	template <typename T = bool> T PollCallBack() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x4988EFC))(this);
	}
	template <typename T = bool> T Uninit() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x4988FF4))(this);
	}
	template <typename T = uintptr_t> T GetDataReader_1() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x49890EC))(this);
	}
	template <typename T = uintptr_t> T GetDataDownloader_1(bool openProgressCallBack) {
		return ((T (*)(IIPSMobileDataManager*, bool))(Il2CppBase() + 0x4989204))(this, openProgressCallBack);
	}
	template <typename T = uintptr_t> T GetDataQuery_1() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x4989328))(this);
	}
	template <typename T = uint32_t> T MgrGetDataMgrLastError() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x4989440))(this);
	}
	template <typename T = uint64_t> T MgrGetMemorySize() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x4989528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(IIPSMobileDataManager*))(Il2CppBase() + 0x4989614))(this);
	}

};

}
