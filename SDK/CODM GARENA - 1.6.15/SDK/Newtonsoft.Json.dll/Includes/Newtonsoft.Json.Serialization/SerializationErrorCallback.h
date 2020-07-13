#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class SerializationErrorCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "SerializationErrorCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t o, uintptr_t context, uintptr_t errorContext) {
		return ((T (*)(SerializationErrorCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x398A65C))(this, o, context, errorContext);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t o, uintptr_t context, uintptr_t errorContext, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SerializationErrorCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A5EB0))(this, o, context, errorContext, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SerializationErrorCallback*, uintptr_t))(Il2CppBase() + 0x39A5F7C))(this, result);
	}

};

}
