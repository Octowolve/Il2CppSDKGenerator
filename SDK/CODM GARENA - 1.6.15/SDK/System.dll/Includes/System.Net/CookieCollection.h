#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class CookieCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "CookieCollection"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> T get_List() {
		return ((T (*)(CookieCollection*))(Il2CppBase() + 0x42BB9EC))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CookieCollection*))(Il2CppBase() + 0x42BB9F4))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(CookieCollection*))(Il2CppBase() + 0x42BBA8C))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(CookieCollection*))(Il2CppBase() + 0x42BBA94))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(CookieCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x42BBA98))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(CookieCollection*))(Il2CppBase() + 0x42BBB9C))(this);
	}
	template <typename T = void> T Add(uintptr_t cookie) {
		return ((T (*)(CookieCollection*, uintptr_t))(Il2CppBase() + 0x42BBC5C))(this, cookie);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(CookieCollection*))(Il2CppBase() + 0x42BC114))(this);
	}
	template <typename T = int32_t> T SearchCookie(uintptr_t cookie) {
		return ((T (*)(CookieCollection*, uintptr_t))(Il2CppBase() + 0x42BBD94))(this, cookie);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(CookieCollection*, int32_t))(Il2CppBase() + 0x42BC22C))(this, index);
	}

};

}
