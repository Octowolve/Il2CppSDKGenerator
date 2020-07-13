#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Gem {

class GemService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Gem", "GemService"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_SetLogEventHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_SetUserName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_SetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_ReportEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_DetectInTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Gem_IGemService_SetPayEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T GCloud_Gem_IGemService_SetLogEventHandler(uintptr_t logEventHandler) {
		return ((T (*)(GemService*, uintptr_t))(Il2CppBase() + 0x4534CA8))(this, logEventHandler);
	}
	template <typename T = void> T GCloud_Gem_IGemService_Init(Il2CppString* appId, bool debug, int32_t env) {
		return ((T (*)(GemService*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x4534DCC))(this, appId, debug, env);
	}
	template <typename T = void> T GCloud_Gem_IGemService_Start(Il2CppString* zoneId, Il2CppString* tag, Il2CppString* roomIp) {
		return ((T (*)(GemService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4534EEC))(this, zoneId, tag, roomIp);
	}
	template <typename T = void> T GCloud_Gem_IGemService_SetUserName(int32_t accountType, Il2CppString* openId) {
		return ((T (*)(GemService*, int32_t, Il2CppString*))(Il2CppBase() + 0x4535004))(this, accountType, openId);
	}
	template <typename T = void> T GCloud_Gem_IGemService_End() {
		return ((T (*)(GemService*))(Il2CppBase() + 0x453510C))(this);
	}
	template <typename T = void> T GCloud_Gem_IGemService_SetEvent(int32_t tag, bool status, Il2CppString* msg, bool authorize, bool finish) {
		return ((T (*)(GemService*, int32_t, bool, Il2CppString*, bool, bool))(Il2CppBase() + 0x45351EC))(this, tag, status, msg, authorize, finish);
	}
	template <typename T = void> T GCloud_Gem_IGemService_ReportEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* eventParams) {
		return ((T (*)(GemService*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4535318))(this, eventName, eventParams);
	}
	template <typename T = void> T GCloud_Gem_IGemService_DetectInTimeout() {
		return ((T (*)(GemService*))(Il2CppBase() + 0x4535420))(this);
	}
	template <typename T = void> T GCloud_Gem_IGemService_SetPayEvent(int32_t id, int32_t tag, bool status, Il2CppString* msg) {
		return ((T (*)(GemService*, int32_t, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x4535500))(this, id, tag, status, msg);
	}

};

}
