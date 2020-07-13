#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ExtensionDataSetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ExtensionDataSetter"));
	}


	template <typename T = void> T Invoke(uintptr_t o, Il2CppString* key, uintptr_t value) {
		return ((T (*)(ExtensionDataSetter*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x39888B8))(this, o, key, value);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t o, Il2CppString* key, uintptr_t value, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ExtensionDataSetter*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3988994))(this, o, key, value, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ExtensionDataSetter*, uintptr_t))(Il2CppBase() + 0x39889D0))(this, result);
	}

};

}
