#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class ExtensionDataGetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "ExtensionDataGetter"));
	}


	template <typename T = void*> T Invoke(uintptr_t o) {
		return ((T (*)(ExtensionDataGetter*, uintptr_t))(Il2CppBase() + 0x39887E8))(this, o);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t o, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ExtensionDataGetter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3988880))(this, o, callback, object);
	}
	template <typename T = void*> T EndInvoke(uintptr_t result) {
		return ((T (*)(ExtensionDataGetter*, uintptr_t))(Il2CppBase() + 0x39888AC))(this, result);
	}

};

}
