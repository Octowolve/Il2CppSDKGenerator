#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinqUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinqUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_MinBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MinBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MaxBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T MinBy(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E4DE44))(0, source, selector);
	}
	template <typename T = uintptr_t> static T MinBy_1(void* source, void* selector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x4E4DF6C))(0, source, selector, comparer);
	}
	template <typename T = uintptr_t> static T MaxBy(void* source, void* selector) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x4E4D64C))(0, source, selector);
	}
	template <typename T = uintptr_t> static T MaxBy_1(void* source, void* selector, void* comparer) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x4E4D774))(0, source, selector, comparer);
	}

};

}
