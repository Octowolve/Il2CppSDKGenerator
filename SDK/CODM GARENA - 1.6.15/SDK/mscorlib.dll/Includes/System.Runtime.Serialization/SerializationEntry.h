#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class SerializationEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "SerializationEntry"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SerializationEntry*))(Il2CppBase() + 0x3030BD0))(this);
	}
	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(SerializationEntry*))(Il2CppBase() + 0x3030BD8))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(SerializationEntry*))(Il2CppBase() + 0x3030BE8))(this);
	}

};

}
