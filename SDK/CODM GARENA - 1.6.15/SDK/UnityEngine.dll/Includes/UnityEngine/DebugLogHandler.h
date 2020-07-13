#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class DebugLogHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "DebugLogHandler"));
	}


	template <typename T = void> static T Internal_Log(uintptr_t level, Il2CppString* msg, uintptr_t obj) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DA5F90))(0, level, msg, obj);
	}
	template <typename T = void> static T Internal_LogException(uintptr_t exception, uintptr_t obj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA6038))(0, exception, obj);
	}
	template <typename T = void> T LogFormat(uintptr_t logType, uintptr_t context, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(DebugLogHandler*, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA60D8))(this, logType, context, format, args);
	}
	template <typename T = void> T LogException(uintptr_t exception, uintptr_t context) {
		return ((T (*)(DebugLogHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA61A8))(this, exception, context);
	}

};

}
