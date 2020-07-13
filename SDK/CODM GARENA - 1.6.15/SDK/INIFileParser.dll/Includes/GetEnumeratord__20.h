#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratord20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "", "<GetEnumerator>d__20"));
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
		return ((T (*)(GetEnumeratord20*))(Il2CppBase() + 0x5212A3C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratord20*))(Il2CppBase() + 0x5212AE0))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetEnumeratord20*))(Il2CppBase() + 0x5212A54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorIniParser_Model_KeyData_get_Current() {
		return ((T (*)(GetEnumeratord20*))(Il2CppBase() + 0x5212D6C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetEnumeratord20*))(Il2CppBase() + 0x5212D74))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratord20*))(Il2CppBase() + 0x5212E08))(this);
	}

};

}
