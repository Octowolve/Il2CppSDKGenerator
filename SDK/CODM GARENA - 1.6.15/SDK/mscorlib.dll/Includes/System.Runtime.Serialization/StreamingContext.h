#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class StreamingContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "StreamingContext"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& additional() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(StreamingContext*))(Il2CppBase() + 0x3032714))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(StreamingContext*))(Il2CppBase() + 0x303271C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(StreamingContext*, uintptr_t))(Il2CppBase() + 0x30327EC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StreamingContext*))(Il2CppBase() + 0x30327FC))(this);
	}

};

}
