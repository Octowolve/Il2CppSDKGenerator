#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class Debugger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "Debugger"));
	}

	template <typename T = int32_t> static T& logPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Log(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449BE3C))(0, message);
	}
	template <typename T = void> static T LogWarning(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449BF38))(0, message);
	}
	template <typename T = void> static T LogError(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449C03C))(0, message);
	}
	template <typename T = void> static T LogReport(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449C140))(0, message);
	}
	template <typename T = void> static T LogInvalidTween(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449C260))(0, t);
	}
	template <typename T = void> static T LogNestedTween(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449C2DC))(0, t);
	}
	template <typename T = void> static T LogNullTween(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449C358))(0, t);
	}
	template <typename T = void> static T LogNonPathTween(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449C3D4))(0, t);
	}
	template <typename T = void> static T LogMissingMaterialProperty(Il2CppString* propertyName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x449C450))(0, propertyName);
	}
	template <typename T = void> static T LogRemoveActiveTweenError(Il2CppString* propertyName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x449C51C))(0, propertyName);
	}
	template <typename T = void> static T SetLogPriority(uintptr_t logBehaviour) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449C5E8))(0, logBehaviour);
	}

};

}
