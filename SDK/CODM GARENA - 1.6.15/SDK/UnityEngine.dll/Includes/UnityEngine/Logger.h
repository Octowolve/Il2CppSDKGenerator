#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Logger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Logger"));
	}

	template <typename T = uintptr_t> T& logHandler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& logEnabled() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& filterLogType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_logHandler() {
		return ((T (*)(Logger*))(Il2CppBase() + 0x47A8884))(this);
	}
	template <typename T = void> T set_logHandler(uintptr_t value) {
		return ((T (*)(Logger*, uintptr_t))(Il2CppBase() + 0x47A886C))(this, value);
	}
	template <typename T = bool> T get_logEnabled() {
		return ((T (*)(Logger*))(Il2CppBase() + 0x47A888C))(this);
	}
	template <typename T = void> T set_logEnabled(bool value) {
		return ((T (*)(Logger*, bool))(Il2CppBase() + 0x47A8874))(this, value);
	}
	template <typename T = uintptr_t> T get_filterLogType() {
		return ((T (*)(Logger*))(Il2CppBase() + 0x47A8894))(this);
	}
	template <typename T = void> T set_filterLogType(uintptr_t value) {
		return ((T (*)(Logger*, uintptr_t))(Il2CppBase() + 0x47A887C))(this, value);
	}
	template <typename T = bool> T IsLogTypeAllowed(uintptr_t logType) {
		return ((T (*)(Logger*, uintptr_t))(Il2CppBase() + 0x47A889C))(this, logType);
	}
	template <typename T = Il2CppString*> static T GetString(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A88D4))(0, message);
	}
	template <typename T = void> T Log(uintptr_t logType, uintptr_t message) {
		return ((T (*)(Logger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A8970))(this, logType, message);
	}
	template <typename T = void> T Log_1(uintptr_t logType, uintptr_t message, uintptr_t context) {
		return ((T (*)(Logger*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A8B40))(this, logType, message, context);
	}
	template <typename T = void> T LogFormat(uintptr_t logType, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(Logger*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47A8D14))(this, logType, format, args);
	}
	template <typename T = void> T LogFormat_1(uintptr_t logType, uintptr_t context, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(Logger*, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47A8E50))(this, logType, context, format, args);
	}
	template <typename T = void> T LogException(uintptr_t exception, uintptr_t context) {
		return ((T (*)(Logger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A8F90))(this, exception, context);
	}

};

}
