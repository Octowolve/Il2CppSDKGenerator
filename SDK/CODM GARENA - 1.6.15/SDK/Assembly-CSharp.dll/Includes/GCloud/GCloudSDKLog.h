#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GCloudSDKLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GCloudSDKLog"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLogLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllLogLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetLogLevel(Il2CppString* sdkName, uintptr_t logLevel) {
		return ((T (*)(GCloudSDKLog*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45344D4))(this, sdkName, logLevel);
	}
	template <typename T = void> T SetAllLogLevel(uintptr_t logLevel) {
		return ((T (*)(GCloudSDKLog*, uintptr_t))(Il2CppBase() + 0x45346F4))(this, logLevel);
	}
	template <typename T = void> static T GCloudSDKLog_setLogLevel(Il2CppString* sdkName, int32_t logLevel) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x45345EC))(0, sdkName, logLevel);
	}
	template <typename T = void> static T GCloudSDKLog_setAllLogLevel(int32_t logLevel) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x45347F0))(0, logLevel);
	}

};

}
