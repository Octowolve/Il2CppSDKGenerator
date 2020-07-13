#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TDM {

class TDataMaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TDM", "TDataMaster"));
	}

	template <typename T = uintptr_t> T& mWriter() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mLocker() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& LibName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTDMUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBinary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSessionID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRouterAddress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T Initialize(Il2CppString* appId, Il2CppString* appChannel, bool isTest) {
		return ((T (*)(TDataMaster*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x46542FC))(this, appId, appChannel, isTest);
	}
	template <typename T = void> T EnableReport(bool enable) {
		return ((T (*)(TDataMaster*, bool))(Il2CppBase() + 0x46543C4))(this, enable);
	}
	template <typename T = void> T ReleaseInstance() {
		return ((T (*)(TDataMaster*))(Il2CppBase() + 0x4654550))(this);
	}
	template <typename T = Il2CppString*> T GetTDMUID() {
		return ((T (*)(TDataMaster*))(Il2CppBase() + 0x46546C0))(this);
	}
	template <typename T = void> T SetLogLevel(uintptr_t level) {
		return ((T (*)(TDataMaster*, uintptr_t))(Il2CppBase() + 0x4654878))(this, level);
	}
	template <typename T = void> T ReportEvent(int32_t srcId, Il2CppString* eventName, uintptr_t eventInfo) {
		return ((T (*)(TDataMaster*, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4654AF4))(this, srcId, eventName, eventInfo);
	}
	template <typename T = void> T ReportBinary(int32_t srcId, Il2CppString* eventName, Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(TDataMaster*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4654DD0))(this, srcId, eventName, data, len);
	}
	template <typename T = Il2CppString*> T GetSessionID() {
		return ((T (*)(TDataMaster*))(Il2CppBase() + 0x4654EB8))(this);
	}
	template <typename T = void> T SetRouterAddress(bool isTest, Il2CppString* url) {
		return ((T (*)(TDataMaster*, bool, Il2CppString*))(Il2CppBase() + 0x4655074))(this, isTest, url);
	}
	template <typename T = bool> static T tdm_initialize(Il2CppString* appID, Il2CppString* appChannel, bool test) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x4655248))(0, appID, appChannel, test);
	}
	template <typename T = void> static T tdm_enable_report(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4654470))(0, enable);
	}
	template <typename T = uintptr_t> static T tdm_get_uid() {
		return ((T (*)(void *))(Il2CppBase() + 0x46547AC))(0);
	}
	template <typename T = void> static T tdm_set_log(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4654A18))(0, level);
	}
	template <typename T = void> static T tdm_report_event(int32_t srcId, Il2CppString* eventName, Il2CppArray<uintptr_t>* data, int32_t len, bool isBinary) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4654CA4))(0, srcId, eventName, data, len, isBinary);
	}
	template <typename T = void> static T tdm_release_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x46545F0))(0);
	}
	template <typename T = uintptr_t> static T tdm_get_session_id() {
		return ((T (*)(void *))(Il2CppBase() + 0x4654FA4))(0);
	}
	template <typename T = void> static T tdm_set_router_address(bool isTest, Il2CppString* url) {
		return ((T (*)(void *, bool, Il2CppString*))(Il2CppBase() + 0x465513C))(0, isTest, url);
	}

};

}
