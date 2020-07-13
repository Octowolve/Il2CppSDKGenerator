#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class StringComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "StringComparer"));
	}

	template <typename T = uintptr_t> static T& invariantCultureIgnoreCase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& invariantCulture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& ordinalIgnoreCase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& ordinal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_InvariantCultureIgnoreCase() {
		return ((T (*)(void *))(Il2CppBase() + 0x4296C88))(0);
	}
	template <typename T = uintptr_t> static T get_Ordinal() {
		return ((T (*)(void *))(Il2CppBase() + 0x4296D38))(0);
	}
	template <typename T = uintptr_t> static T get_OrdinalIgnoreCase() {
		return ((T (*)(void *))(Il2CppBase() + 0x4296DE8))(0);
	}
	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(StringComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4296E98))(this, x, y);
	}
	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(StringComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4297064))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(StringComparer*, uintptr_t))(Il2CppBase() + 0x4297154))(this, obj);
	}
	template <typename T = int32_t> T Compare_1(Il2CppString* x, Il2CppString* y) {
		return ((T (*)(StringComparer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, x, y);
	}
	template <typename T = bool> T Equals_1(Il2CppString* x, Il2CppString* y) {
		return ((T (*)(StringComparer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode_1(Il2CppString* obj) {
		return ((T (*)(StringComparer*, Il2CppString*))(Il2CppBase() + 0x0))(this, obj);
	}

};

}
