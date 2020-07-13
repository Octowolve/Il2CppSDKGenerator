#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Nullable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Nullable`1"));
	}

	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& has_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T get_HasValue() {
		return ((T (*)(Nullable1*))(Il2CppBase() + 0x49E15C4))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(Nullable1*))(Il2CppBase() + 0x49E1690))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Nullable1*, uintptr_t))(Il2CppBase() + 0x49D0FD0))(this, other);
	}
	template <typename T = bool> T Equals_1(void* other) {
		return ((T (*)(Nullable1*, void*))(Il2CppBase() + 0x49D1004))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Nullable1*))(Il2CppBase() + 0x49D10A8))(this);
	}
	template <typename T = uintptr_t> T GetValueOrDefault() {
		return ((T (*)(Nullable1*))(Il2CppBase() + 0x49E456C))(this);
	}
	template <typename T = uintptr_t> T GetValueOrDefault_1(uintptr_t defaultValue) {
		return ((T (*)(Nullable1*, uintptr_t))(Il2CppBase() + 0x49DA0CC))(this, defaultValue);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Nullable1*))(Il2CppBase() + 0x49D1300))(this);
	}

};

}
