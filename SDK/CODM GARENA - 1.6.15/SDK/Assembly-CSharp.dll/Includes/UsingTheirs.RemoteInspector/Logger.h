#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class Logger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "Logger"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T Log(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x422D4A8))(0, format, args);
	}
	template <typename T = void> static T LogWarning(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42316DC))(0, format, args);
	}
	template <typename T = void> static T LogError(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x422DD3C))(0, format, args);
	}

};

}
