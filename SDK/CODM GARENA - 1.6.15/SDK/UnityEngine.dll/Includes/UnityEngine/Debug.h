#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Debug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Debug"));
	}

	template <typename T = uintptr_t> static T& s_Logger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_logger() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DA4404))(0);
	}
	template <typename T = void> static T DrawLine(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x4DA44B4))(0, start, end, color, duration, depthTest);
	}
	template <typename T = void> static T DrawLine_1(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color, float duration) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x4DA4678))(0, start, end, color, duration);
	}
	template <typename T = void> static T DrawLine_2(Il2CppVector3 start, Il2CppVector3 end, uintptr_t color) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4DA4774))(0, start, end, color);
	}
	template <typename T = void> static T INTERNAL_CALL_DrawLine(uintptr_t start, uintptr_t end, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x4DA45B0))(0, start, end, color, duration, depthTest);
	}
	template <typename T = void> static T DrawRay(Il2CppVector3 start, Il2CppVector3 dir, uintptr_t color, float duration) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x4DA4868))(0, start, dir, color, duration);
	}
	template <typename T = void> static T DrawRay_1(Il2CppVector3 start, Il2CppVector3 dir, uintptr_t color) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x4DA4ACC))(0, start, dir, color);
	}
	template <typename T = void> static T DrawRay_2(Il2CppVector3 start, Il2CppVector3 dir, uintptr_t color, float duration, bool depthTest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, bool))(Il2CppBase() + 0x4DA4980))(0, start, dir, color, duration, depthTest);
	}
	template <typename T = void> static T Break() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DA4BD4))(0);
	}
	template <typename T = void> static T Log(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA4C64))(0, message);
	}
	template <typename T = void> static T Log_1(uintptr_t message, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA4D9C))(0, message, context);
	}
	template <typename T = void> static T LogFormat(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA4EE8))(0, format, args);
	}
	template <typename T = void> static T LogError(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA5034))(0, message);
	}
	template <typename T = void> static T LogError_1(uintptr_t message, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA516C))(0, message, context);
	}
	template <typename T = void> static T LogErrorFormat(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA52B8))(0, format, args);
	}
	template <typename T = void> static T LogErrorFormat_1(uintptr_t context, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA5404))(0, context, format, args);
	}
	template <typename T = void> static T LogException(uintptr_t exception) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA5558))(0, exception);
	}
	template <typename T = void> static T LogException_1(uintptr_t exception, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA5690))(0, exception, context);
	}
	template <typename T = void> static T LogWarning(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA57CC))(0, message);
	}
	template <typename T = void> static T LogWarning_1(uintptr_t message, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA5904))(0, message, context);
	}
	template <typename T = void> static T LogWarningFormat(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA5A50))(0, format, args);
	}
	template <typename T = void> static T LogWarningFormat_1(uintptr_t context, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DA5B9C))(0, context, format, args);
	}
	template <typename T = void> static T Assert(bool condition, Il2CppString* message) {
		return ((T (*)(void *, bool, Il2CppString*))(Il2CppBase() + 0x4DA5CF0))(0, condition, message);
	}
	template <typename T = bool> static T get_isDebugBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DA5E34))(0);
	}

};

}
