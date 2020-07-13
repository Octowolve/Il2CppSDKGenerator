#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class SerializationCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "SerializationCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t o, uintptr_t context) {
		return ((T (*)(SerializationCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3989A9C))(this, o, context);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t o, uintptr_t context, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SerializationCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A5DD8))(this, o, context, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SerializationCallback*, uintptr_t))(Il2CppBase() + 0x39A5EA4))(this, result);
	}

};

}
