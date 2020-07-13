#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class SortKeyBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "SortKeyBuffer"));
	}

	template <typename T = int32_t> T& l1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& l2() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& l3() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& l4s() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& l4t() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& l4k() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& l4w() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& l5() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l1b() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l2b() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l3b() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l4sb() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l4tb() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l4kb() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l4wb() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& l5b() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& source() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& processLevel2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& frenchSort() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& frenchSorted() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = int32_t> T& lcid() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& options() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SortKeyBuffer*))(Il2CppBase() + 0x3F97B48))(this);
	}
	template <typename T = void> T Initialize(uintptr_t options, int32_t lcid, Il2CppString* s, bool frenchSort) {
		return ((T (*)(SortKeyBuffer*, uintptr_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x3F90E38))(this, options, lcid, s, frenchSort);
	}
	template <typename T = void> T AppendCJKExtension(unsigned char lv1msb, unsigned char lv1lsb) {
		return ((T (*)(SortKeyBuffer*, unsigned char, unsigned char))(Il2CppBase() + 0x3F91BBC))(this, lv1msb, lv1lsb);
	}
	template <typename T = void> T AppendKana(unsigned char category, unsigned char lv1, unsigned char lv2, unsigned char lv3, bool isSmallKana, unsigned char markType, bool isKatakana, bool isHalfWidth) {
		return ((T (*)(SortKeyBuffer*, unsigned char, unsigned char, unsigned char, unsigned char, bool, unsigned char, bool, bool))(Il2CppBase() + 0x3F91D24))(this, category, lv1, lv2, lv3, isSmallKana, markType, isKatakana, isHalfWidth);
	}
	template <typename T = void> T AppendNormal(unsigned char category, unsigned char lv1, unsigned char lv2, unsigned char lv3) {
		return ((T (*)(SortKeyBuffer*, unsigned char, unsigned char, unsigned char, unsigned char))(Il2CppBase() + 0x3F91A5C))(this, category, lv1, lv2, lv3);
	}
	template <typename T = void> T AppendLevel5(unsigned char category, unsigned char lv1) {
		return ((T (*)(SortKeyBuffer*, unsigned char, unsigned char))(Il2CppBase() + 0x3F97C90))(this, category, lv1);
	}
	template <typename T = void> T AppendBufferPrimitive(unsigned char value, Il2CppArray<uintptr_t>* buf, uintptr_t bidx) {
		return ((T (*)(SortKeyBuffer*, unsigned char, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3F97B68))(this, value, buf, bidx);
	}
	template <typename T = uintptr_t> T GetResultAndReset() {
		return ((T (*)(SortKeyBuffer*))(Il2CppBase() + 0x3F91600))(this);
	}
	template <typename T = int32_t> T GetOptimizedLength(Il2CppArray<uintptr_t>* data, int32_t len, unsigned char defaultValue) {
		return ((T (*)(SortKeyBuffer*, Il2CppArray<uintptr_t>*, int32_t, unsigned char))(Il2CppBase() + 0x3F9829C))(this, data, len, defaultValue);
	}
	template <typename T = uintptr_t> T GetResult() {
		return ((T (*)(SortKeyBuffer*))(Il2CppBase() + 0x3F97D24))(this);
	}

};

}
