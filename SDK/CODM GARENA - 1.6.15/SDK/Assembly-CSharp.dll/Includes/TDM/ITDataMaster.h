#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TDM {

class ITDataMaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TDM", "ITDataMaster"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ReleaseInstance() {
		return ((T (*)(ITDataMaster*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetTDMUID() {
		return ((T (*)(ITDataMaster*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Initialize(Il2CppString* appId, Il2CppString* appChannel, bool isTest) {
		return ((T (*)(ITDataMaster*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, appId, appChannel, isTest);
	}
	template <typename T = void> T EnableReport(bool enable) {
		return ((T (*)(ITDataMaster*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = void> T SetLogLevel(uintptr_t level) {
		return ((T (*)(ITDataMaster*, uintptr_t))(Il2CppBase() + 0x0))(this, level);
	}
	template <typename T = void> T ReportEvent(int32_t srcId, Il2CppString* eventName, uintptr_t eventInfo) {
		return ((T (*)(ITDataMaster*, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, srcId, eventName, eventInfo);
	}
	template <typename T = void> T ReportBinary(int32_t srcId, Il2CppString* eventName, Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(ITDataMaster*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, srcId, eventName, data, len);
	}
	template <typename T = Il2CppString*> T GetSessionID() {
		return ((T (*)(ITDataMaster*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetRouterAddress(bool isTest, Il2CppString* url) {
		return ((T (*)(ITDataMaster*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, isTest, url);
	}

};

}
