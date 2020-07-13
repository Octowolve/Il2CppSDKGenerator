#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class StackTraceUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "StackTraceUtility"));
	}

	template <typename T = Il2CppString*> static T& projectFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T SetProjectFolder(Il2CppString* folder) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E86774))(0, folder);
	}
	template <typename T = Il2CppString*> static T ExtractStackTrace() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8686C))(0);
	}
	template <typename T = bool> static T IsSystemStacktraceType(uintptr_t name) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E87580))(0, name);
	}
	template <typename T = void> static T ExtractStringFromExceptionInternal(uintptr_t exceptiono, uintptr_t* message, uintptr_t* stackTrace) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4E87818))(0, exceptiono, message, stackTrace);
	}
	template <typename T = Il2CppString*> static T PostprocessStacktrace(Il2CppString* oldString, bool stripEngineInternalInformation) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4E87DDC))(0, oldString, stripEngineInternalInformation);
	}
	template <typename T = Il2CppString*> static T ExtractFormattedStackTrace(uintptr_t stackTrace) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E86954))(0, stackTrace);
	}

};

}
