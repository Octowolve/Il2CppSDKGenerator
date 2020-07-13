#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeConvertKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "TypeConvertKey"));
	}

	template <typename T = uintptr_t> T& _initialType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _targetType() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> T get_InitialType() {
		return ((T (*)(TypeConvertKey*))(Il2CppBase() + 0x4DE83AC))(this);
	}
	template <typename T = uintptr_t> T get_TargetType() {
		return ((T (*)(TypeConvertKey*))(Il2CppBase() + 0x4DE83B4))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TypeConvertKey*))(Il2CppBase() + 0x4DE8424))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(TypeConvertKey*, uintptr_t))(Il2CppBase() + 0x4DE84F4))(this, obj);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(TypeConvertKey*, uintptr_t))(Il2CppBase() + 0x4DE84FC))(this, other);
	}

};

}
