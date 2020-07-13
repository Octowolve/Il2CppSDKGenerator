#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Version
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Version"));
	}

	template <typename T = int32_t> static T& UNDEFINED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _Major() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _Minor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _Build() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _Revision() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CheckedSet(int32_t defined, int32_t major, int32_t minor, int32_t build, int32_t revision) {
		return ((T (*)(Version*, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4D9CAC0))(this, defined, major, minor, build, revision);
	}
	template <typename T = int32_t> T get_Build() {
		return ((T (*)(Version*))(Il2CppBase() + 0x4D9CFB8))(this);
	}
	template <typename T = int32_t> T get_Major() {
		return ((T (*)(Version*))(Il2CppBase() + 0x4D9CFC0))(this);
	}
	template <typename T = int32_t> T get_Minor() {
		return ((T (*)(Version*))(Il2CppBase() + 0x4D9CFC8))(this);
	}
	template <typename T = int32_t> T get_Revision() {
		return ((T (*)(Version*))(Il2CppBase() + 0x4D9CFD0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Version*))(Il2CppBase() + 0x4D9CFD8))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t version) {
		return ((T (*)(Version*, uintptr_t))(Il2CppBase() + 0x4D9D110))(this, version);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Version*, uintptr_t))(Il2CppBase() + 0x4D9D2B8))(this, obj);
	}
	template <typename T = int32_t> T CompareTo_1(uintptr_t value) {
		return ((T (*)(Version*, uintptr_t))(Il2CppBase() + 0x4D9D214))(this, value);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(Version*, uintptr_t))(Il2CppBase() + 0x4D9D35C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Version*))(Il2CppBase() + 0x4D9D410))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Version*))(Il2CppBase() + 0x4D9D430))(this);
	}
	template <typename T = uintptr_t> static T CreateFromString(Il2CppString* info) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D9D628))(0, info);
	}
	template <typename T = bool> static T op_Equality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9D3E8))(0, v1, v2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9D3F4))(0, v1, v2);
	}
	template <typename T = bool> static T op_GreaterThan(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9D8E0))(0, v1, v2);
	}
	template <typename T = bool> static T op_GreaterThanOrEqual(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9D91C))(0, v1, v2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9D958))(0, v1, v2);
	}
	template <typename T = bool> static T op_LessThanOrEqual(uintptr_t v1, uintptr_t v2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9D988))(0, v1, v2);
	}

};

}
