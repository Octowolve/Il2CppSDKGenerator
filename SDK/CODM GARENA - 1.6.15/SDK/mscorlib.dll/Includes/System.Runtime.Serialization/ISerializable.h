#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class ISerializable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "ISerializable"));
	}


	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ISerializable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, info, context);
	}

};

}
