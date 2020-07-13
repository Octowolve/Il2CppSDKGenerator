#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class SerializationInfoEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "SerializationInfoEnumerator"));
	}

	template <typename T = uintptr_t> T& enumerator() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SerializationInfoEnumerator*))(Il2CppBase() + 0x30322F4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(SerializationInfoEnumerator*))(Il2CppBase() + 0x30323E8))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SerializationInfoEnumerator*))(Il2CppBase() + 0x302BF88))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(SerializationInfoEnumerator*))(Il2CppBase() + 0x302BF64))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(SerializationInfoEnumerator*))(Il2CppBase() + 0x302C7F4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SerializationInfoEnumerator*))(Il2CppBase() + 0x302BFAC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SerializationInfoEnumerator*))(Il2CppBase() + 0x3032510))(this);
	}

};

}
