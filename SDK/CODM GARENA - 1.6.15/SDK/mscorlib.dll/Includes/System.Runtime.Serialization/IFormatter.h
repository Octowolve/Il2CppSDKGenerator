#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class IFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "IFormatter"));
	}


	template <typename T = uintptr_t> T Deserialize(uintptr_t serializationStream) {
		return ((T (*)(IFormatter*, uintptr_t))(Il2CppBase() + 0x0))(this, serializationStream);
	}
	template <typename T = void> T Serialize(uintptr_t serializationStream, uintptr_t graph) {
		return ((T (*)(IFormatter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, serializationStream, graph);
	}

};

}
