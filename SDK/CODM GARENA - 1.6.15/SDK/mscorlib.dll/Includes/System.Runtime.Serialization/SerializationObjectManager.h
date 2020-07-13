#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class SerializationObjectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "SerializationObjectManager"));
	}

	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& seen() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& callbacks() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T RegisterObject(uintptr_t obj) {
		return ((T (*)(SerializationObjectManager*, uintptr_t))(Il2CppBase() + 0x3029DCC))(this, obj);
	}
	template <typename T = void> T RaiseOnSerializedEvent() {
		return ((T (*)(SerializationObjectManager*))(Il2CppBase() + 0x30288D0))(this);
	}

};

}
