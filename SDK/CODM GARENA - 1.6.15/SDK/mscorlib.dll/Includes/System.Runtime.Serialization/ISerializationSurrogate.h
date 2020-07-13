#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class ISerializationSurrogate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "ISerializationSurrogate"));
	}


	template <typename T = void> T GetObjectData(uintptr_t obj, uintptr_t info, uintptr_t context) {
		return ((T (*)(ISerializationSurrogate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, obj, info, context);
	}
	template <typename T = uintptr_t> T SetObjectData(uintptr_t obj, uintptr_t info, uintptr_t context, uintptr_t selector) {
		return ((T (*)(ISerializationSurrogate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, obj, info, context, selector);
	}

};

}
