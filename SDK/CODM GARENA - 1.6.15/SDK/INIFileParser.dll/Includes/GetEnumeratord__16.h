#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratord16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "", "<GetEnumerator>d__16"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetEnumeratord16*))(Il2CppBase() + 0x5213B00))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratord16*))(Il2CppBase() + 0x5213BA4))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetEnumeratord16*))(Il2CppBase() + 0x5213B18))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorIniParser_Model_SectionData_get_Current() {
		return ((T (*)(GetEnumeratord16*))(Il2CppBase() + 0x5213E30))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetEnumeratord16*))(Il2CppBase() + 0x5213E38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratord16*))(Il2CppBase() + 0x5213ECC))(this);
	}

};

}
