#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class Interval
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "Interval"));
	}

	template <typename T = int32_t> T& low() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& high() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& contiguous() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T get_Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AD860C))(0);
	}
	template <typename T = bool> T get_IsDiscontiguous() {
		return ((T (*)(Interval*))(Il2CppBase() + 0x4AD8644))(this);
	}
	template <typename T = bool> T get_IsSingleton() {
		return ((T (*)(Interval*))(Il2CppBase() + 0x4AD8658))(this);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(Interval*))(Il2CppBase() + 0x4AD8684))(this);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(Interval*))(Il2CppBase() + 0x4AD869C))(this);
	}
	template <typename T = bool> T IsDisjoint(uintptr_t i) {
		return ((T (*)(Interval*, uintptr_t))(Il2CppBase() + 0x4AD86B8))(this, i);
	}
	template <typename T = bool> T IsAdjacent(uintptr_t i) {
		return ((T (*)(Interval*, uintptr_t))(Il2CppBase() + 0x4AD8704))(this, i);
	}
	template <typename T = bool> T Contains(uintptr_t i) {
		return ((T (*)(Interval*, uintptr_t))(Il2CppBase() + 0x4AD8744))(this, i);
	}
	template <typename T = bool> T Contains_1(int32_t i) {
		return ((T (*)(Interval*, int32_t))(Il2CppBase() + 0x4AD8794))(this, i);
	}
	template <typename T = bool> T Intersects(uintptr_t i) {
		return ((T (*)(Interval*, uintptr_t))(Il2CppBase() + 0x4AD882C))(this, i);
	}
	template <typename T = void> T Merge(uintptr_t i) {
		return ((T (*)(Interval*, uintptr_t))(Il2CppBase() + 0x4AD8848))(this, i);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t o) {
		return ((T (*)(Interval*, uintptr_t))(Il2CppBase() + 0x4AD8914))(this, o);
	}

};

}
