#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class AddingNewEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "System.ComponentModel", "AddingNewEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(AddingNewEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFB344))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AddingNewEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFB408))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AddingNewEventHandler*, uintptr_t))(Il2CppBase() + 0x4DFB440))(this, result);
	}

};

}
