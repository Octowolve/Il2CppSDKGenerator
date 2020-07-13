#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLog"));
	}

	template <typename T = uintptr_t> static T& level() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& header() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T SetLevel(uintptr_t l) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46B9018))(0, l);
	}
	template <typename T = void> static T Log(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46B5494))(0, message);
	}
	template <typename T = void> static T LogWarning(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CD924))(0, message);
	}
	template <typename T = void> static T LogError(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46BAED8))(0, message);
	}
	template <typename T = void> static T FullLog(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46CDAD8))(0, message);
	}

};

}
