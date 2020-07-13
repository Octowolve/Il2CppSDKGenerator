#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratord2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<GetEnumerator>d__2"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetEnumeratord2*))(Il2CppBase() + 0x4B6146C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratord2*))(Il2CppBase() + 0x4B61494))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetEnumeratord2*))(Il2CppBase() + 0x4B61834))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorSystem_Collections_Generic_KeyValuePairSystem_Object,System_Object_get_Current() {
		return ((T (*)(GetEnumeratord2*))(Il2CppBase() + 0x4B61924))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetEnumeratord2*))(Il2CppBase() + 0x4B61938))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratord2*))(Il2CppBase() + 0x4B619CC))(this);
	}

};

}
