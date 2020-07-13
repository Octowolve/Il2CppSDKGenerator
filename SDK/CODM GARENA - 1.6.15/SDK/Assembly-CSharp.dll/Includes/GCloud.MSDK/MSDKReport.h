#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPushToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> static T reportInitAdapter(Il2CppString* channels) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DC390))(0, channels);
	}
	template <typename T = void> static T reportEventAdapter(Il2CppString* eventName, Il2CppString* paramsJson, Il2CppString* eventNspChannelsame, bool isRealTime) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x46DC4A0))(0, eventName, paramsJson, eventNspChannelsame, isRealTime);
	}
	template <typename T = void> static T reportSetPushTokenAdapter(Il2CppString* pushToken) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DC5E0))(0, pushToken);
	}
	template <typename T = bool> static T Init(Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DC6E0))(0, channel);
	}
	template <typename T = void> static T ReportEvent(Il2CppString* eventName, Il2CppDictionary<Il2CppString*, Il2CppString*>* paramsDic, Il2CppString* spChannels, bool isRealTime) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*, bool))(Il2CppBase() + 0x46DC9C8))(0, eventName, paramsDic, spChannels, isRealTime);
	}
	template <typename T = void> static T SetPushToken(Il2CppString* pushToken) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46DCFE8))(0, pushToken);
	}

};

}
