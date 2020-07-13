#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class SerializationBinder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "SerializationBinder"));
	}


	template <typename T = uintptr_t> T BindToType(Il2CppString* assemblyName, Il2CppString* typeName) {
		return ((T (*)(SerializationBinder*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, assemblyName, typeName);
	}

};

}
