#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class UIntPtr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "UIntPtr"));
	}

	template <typename T = uintptr_t> static T& Zero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _pointer() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(UIntPtr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9BBB4))(this, info, context);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(UIntPtr*, uintptr_t))(Il2CppBase() + 0x4D9BC84))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UIntPtr*))(Il2CppBase() + 0x4D9BC8C))(this);
	}
	template <typename T = uint32_t> T ToUInt32() {
		return ((T (*)(UIntPtr*))(Il2CppBase() + 0x4D9BC94))(this);
	}
	template <typename T = uint64_t> T ToUInt64() {
		return ((T (*)(UIntPtr*))(Il2CppBase() + 0x4D9BC9C))(this);
	}
	template <typename T = uintptr_t> T ToPointer() {
		return ((T (*)(UIntPtr*))(Il2CppBase() + 0x4D9BCA8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UIntPtr*))(Il2CppBase() + 0x4D9BCB0))(this);
	}
	template <typename T = int32_t> static T get_Size() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9B978))(0);
	}
	template <typename T = bool> static T op_Equality(uintptr_t value1, uintptr_t value2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9BCD4))(0, value1, value2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t value1, uintptr_t value2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9BCE4))(0, value1, value2);
	}
	template <typename T = uint64_t> static T op_Explicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D9BCF4))(0, value);
	}
	template <typename T = uint32_t> static T op_Explicit_1(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D9BD04))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_2(uint64_t value) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4D9BD0C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D9BD34))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_4(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D9BD3C))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_5(uint32_t value) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4D9BD44))(0, value);
	}

};

}
