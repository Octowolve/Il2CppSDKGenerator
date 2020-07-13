#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TDM {

class TLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TDM", "TLog"));
	}

	template <typename T = uintptr_t> static T& tLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Level() {
		return ((T (*)(void *))(Il2CppBase() + 0x4655454))(0);
	}
	template <typename T = void> static T set_Level(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4654964))(0, value);
	}
	template <typename T = void> static T TDebug(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4655504))(0, message);
	}
	template <typename T = void> static T TInfo(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x465565C))(0, message);
	}
	template <typename T = void> static T TWarning(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46557B4))(0, message);
	}
	template <typename T = void> static T TError(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x465590C))(0, message);
	}
	template <typename T = void> static T TException(uintptr_t exception) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4655A64))(0, exception);
	}

};

}
