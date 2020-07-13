#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class PropertyChangingEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "System.ComponentModel", "PropertyChangingEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(PropertyChangingEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFB644))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PropertyChangingEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFB708))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PropertyChangingEventHandler*, uintptr_t))(Il2CppBase() + 0x4DFB740))(this, result);
	}

};

}
