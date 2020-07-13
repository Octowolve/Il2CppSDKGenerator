#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class DefaultTraceListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "DefaultTraceListener"));
	}

	template <typename T = bool> static T& OnWin32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MonoTracePrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& MonoTraceFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> T& logFileName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> static T GetPrefix(Il2CppString* var, Il2CppString* target) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42AB7DC))(0, var, target);
	}
	template <typename T = Il2CppString*> T get_LogFileName() {
		return ((T (*)(DefaultTraceListener*))(Il2CppBase() + 0x42AB8F4))(this);
	}
	template <typename T = void> static T WriteWindowsDebugString(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42AB8FC))(0, message);
	}
	template <typename T = void> T WriteDebugString(Il2CppString* message) {
		return ((T (*)(DefaultTraceListener*, Il2CppString*))(Il2CppBase() + 0x42AB904))(this, message);
	}
	template <typename T = void> T WriteMonoTrace(Il2CppString* message) {
		return ((T (*)(DefaultTraceListener*, Il2CppString*))(Il2CppBase() + 0x42AB9F8))(this, message);
	}
	template <typename T = void> T WritePrefix() {
		return ((T (*)(DefaultTraceListener*))(Il2CppBase() + 0x42ABE98))(this);
	}
	template <typename T = void> T WriteImpl(Il2CppString* message) {
		return ((T (*)(DefaultTraceListener*, Il2CppString*))(Il2CppBase() + 0x42ABF94))(this, message);
	}
	template <typename T = void> T WriteLogFile(Il2CppString* message, Il2CppString* logFile) {
		return ((T (*)(DefaultTraceListener*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42ABD8C))(this, message, logFile);
	}
	template <typename T = void> T WriteLogFileImpl(Il2CppString* message, Il2CppString* logFile) {
		return ((T (*)(DefaultTraceListener*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42AC0E4))(this, message, logFile);
	}
	template <typename T = void> T Write(Il2CppString* message) {
		return ((T (*)(DefaultTraceListener*, Il2CppString*))(Il2CppBase() + 0x42AC390))(this, message);
	}
	template <typename T = void> T WriteLine(Il2CppString* message) {
		return ((T (*)(DefaultTraceListener*, Il2CppString*))(Il2CppBase() + 0x42AC394))(this, message);
	}

};

}
