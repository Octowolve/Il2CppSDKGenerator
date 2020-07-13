#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Gem {

class IGemService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Gem", "IGemService"));
	}


	template <typename T = void> T SetLogEventHandler(uintptr_t logEventHandler) {
		return ((T (*)(IGemService*, uintptr_t))(Il2CppBase() + 0x0))(this, logEventHandler);
	}
	template <typename T = void> T Init(Il2CppString* appId, bool debug, int32_t env) {
		return ((T (*)(IGemService*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x0))(this, appId, debug, env);
	}
	template <typename T = void> T Start(Il2CppString* zoneId, Il2CppString* tag, Il2CppString* roomIp) {
		return ((T (*)(IGemService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, zoneId, tag, roomIp);
	}
	template <typename T = void> T SetUserName(int32_t accountType, Il2CppString* openId) {
		return ((T (*)(IGemService*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, accountType, openId);
	}
	template <typename T = void> T End() {
		return ((T (*)(IGemService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetEvent(int32_t tag, bool status, Il2CppString* msg, bool authorize, bool finish) {
		return ((T (*)(IGemService*, int32_t, bool, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, tag, status, msg, authorize, finish);
	}
	template <typename T = void> T ReportEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventParams) {
		return ((T (*)(IGemService*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, eventName, eventParams);
	}
	template <typename T = void> T DetectInTimeout() {
		return ((T (*)(IGemService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetPayEvent(int32_t id, int32_t tag, bool status, Il2CppString* msg) {
		return ((T (*)(IGemService*, int32_t, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, id, tag, status, msg);
	}

};

}
