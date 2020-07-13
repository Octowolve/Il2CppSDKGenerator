#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class SerializationContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "SerializationContext"));
	}

	template <typename T = bool> T& frozen() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Freeze() {
		return ((T (*)(SerializationContext*))(Il2CppBase() + 0x5069C6C))(this);
	}
	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x5069BBC))(0);
	}

};

}
