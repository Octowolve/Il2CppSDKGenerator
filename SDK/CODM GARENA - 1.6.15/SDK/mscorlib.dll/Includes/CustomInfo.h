#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "CustomInfo"));
	}

	template <typename T = bool> T& UseGroup() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& DecimalDigits() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DecimalPointPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DecimalTailSharpDigits() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& IntegerDigits() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& IntegerHeadSharpDigits() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& IntegerHeadPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& UseExponent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ExponentDigits() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ExponentTailSharpDigits() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& ExponentNegativeSignOnly() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& DividePlaces() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Percents() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Permilles() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> static T GetActiveSection(Il2CppString* format, uintptr_t positive, bool zero, uintptr_t offset, uintptr_t length) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x455BF60))(0, format, positive, zero, offset, length);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* format, int32_t offset, int32_t length, uintptr_t nfi) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x455C480))(0, format, offset, length, nfi);
	}
	template <typename T = Il2CppString*> T Format(Il2CppString* format, int32_t offset, int32_t length, uintptr_t nfi, bool positive, uintptr_t sb_int, uintptr_t sb_dec, uintptr_t sb_exp) {
		return ((T (*)(CustomInfo*, Il2CppString*, int32_t, int32_t, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x455CDF0))(this, format, offset, length, nfi, positive, sb_int, sb_dec, sb_exp);
	}

};

}
