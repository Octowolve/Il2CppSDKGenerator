#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratord1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<GetEnumerator>d__1"));
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

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetEnumeratord1*))(Il2CppBase() + 0x40CB0EC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratord1*))(Il2CppBase() + 0x40CB0F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(GetEnumeratord1*))(Il2CppBase() + 0x40CB15C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetEnumeratord1*))(Il2CppBase() + 0x40CB164))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratord1*))(Il2CppBase() + 0x40CB1F8))(this);
	}

};

}
