#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetEnumeratord58
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<GetEnumerator>d__58"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetEnumeratord58*))(Il2CppBase() + 0x40C99C8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratord58*))(Il2CppBase() + 0x40C9AD0))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetEnumeratord58*))(Il2CppBase() + 0x40C99E0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorSystem_Collections_Generic_KeyValuePairSystem_String,Newtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(GetEnumeratord58*))(Il2CppBase() + 0x40C9DE4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetEnumeratord58*))(Il2CppBase() + 0x40C9DF8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratord58*))(Il2CppBase() + 0x40C9E8C))(this);
	}

};

}
