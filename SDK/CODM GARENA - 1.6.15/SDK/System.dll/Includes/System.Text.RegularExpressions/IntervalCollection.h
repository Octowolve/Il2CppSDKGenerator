#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class IntervalCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "IntervalCollection"));
	}

	template <typename T = uintptr_t> T& intervals() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(IntervalCollection*, int32_t))(Il2CppBase() + 0x4AD89B8))(this, i);
	}
	template <typename T = void> T Add(uintptr_t i) {
		return ((T (*)(IntervalCollection*, uintptr_t))(Il2CppBase() + 0x4AD8A7C))(this, i);
	}
	template <typename T = void> T Normalize() {
		return ((T (*)(IntervalCollection*))(Il2CppBase() + 0x4AD8B50))(this);
	}
	template <typename T = uintptr_t> T GetMetaCollection(uintptr_t cost_del) {
		return ((T (*)(IntervalCollection*, uintptr_t))(Il2CppBase() + 0x4AD8DC4))(this, cost_del);
	}
	template <typename T = void> T Optimize(int32_t begin, int32_t end, uintptr_t meta, uintptr_t cost_del) {
		return ((T (*)(IntervalCollection*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AD8EE4))(this, begin, end, meta, cost_del);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(IntervalCollection*))(Il2CppBase() + 0x4AD8EB0))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(IntervalCollection*))(Il2CppBase() + 0x4AD91D0))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(IntervalCollection*))(Il2CppBase() + 0x4AD91D8))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(IntervalCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4AD91E0))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(IntervalCollection*))(Il2CppBase() + 0x4AD9540))(this);
	}

};

}
