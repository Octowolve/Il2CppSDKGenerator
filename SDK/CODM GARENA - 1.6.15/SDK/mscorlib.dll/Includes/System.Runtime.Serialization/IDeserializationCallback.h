#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class IDeserializationCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "IDeserializationCallback"));
	}


	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(IDeserializationCallback*, uintptr_t))(Il2CppBase() + 0x0))(this, sender);
	}

};

}
