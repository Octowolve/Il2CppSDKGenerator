#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ILogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ILogger"));
	}


	template <typename T = void> T set_logEnabled(bool value) {
		return ((T (*)(ILogger*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T set_filterLogType(uintptr_t value) {
		return ((T (*)(ILogger*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Log(uintptr_t logType, uintptr_t message) {
		return ((T (*)(ILogger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, logType, message);
	}
	template <typename T = void> T Log_1(uintptr_t logType, uintptr_t message, uintptr_t context) {
		return ((T (*)(ILogger*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, logType, message, context);
	}
	template <typename T = void> T LogFormat(uintptr_t logType, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(ILogger*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, logType, format, args);
	}

};

}
