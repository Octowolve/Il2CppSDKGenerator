#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class IntPtr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "IntPtr"));
	}

	template <typename T = uintptr_t> T& m_value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Zero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(IntPtr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE85CC))(this, info, context);
	}
	template <typename T = int32_t> static T get_Size() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FE85E8))(0);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(IntPtr*, uintptr_t))(Il2CppBase() + 0x3FE8730))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IntPtr*))(Il2CppBase() + 0x3FE8740))(this);
	}
	template <typename T = int32_t> T ToInt32() {
		return ((T (*)(IntPtr*))(Il2CppBase() + 0x3FE8750))(this);
	}
	template <typename T = int64_t> T ToInt64() {
		return ((T (*)(IntPtr*))(Il2CppBase() + 0x3FE8758))(this);
	}
	template <typename T = uintptr_t> T ToPointer() {
		return ((T (*)(IntPtr*))(Il2CppBase() + 0x3FE877C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IntPtr*))(Il2CppBase() + 0x3FE87FC))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* format) {
		return ((T (*)(IntPtr*, Il2CppString*))(Il2CppBase() + 0x3FE8808))(this, format);
	}
	template <typename T = bool> static T op_Equality(uintptr_t value1, uintptr_t value2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE8810))(0, value1, value2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t value1, uintptr_t value2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FE8820))(0, value1, value2);
	}
	template <typename T = uintptr_t> static T op_Explicit(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FE8830))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_1(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3FE8838))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_2(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FE8840))(0, value);
	}
	template <typename T = int32_t> static T op_Explicit_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FE8848))(0, value);
	}
	template <typename T = int64_t> static T op_Explicit_4(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FE8850))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_5(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FE886C))(0, value);
	}

};

}
