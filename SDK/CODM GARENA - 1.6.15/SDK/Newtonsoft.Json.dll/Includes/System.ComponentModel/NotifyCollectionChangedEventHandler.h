#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class NotifyCollectionChangedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "System.ComponentModel", "NotifyCollectionChangedEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(NotifyCollectionChangedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFB460))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NotifyCollectionChangedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DFB524))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NotifyCollectionChangedEventHandler*, uintptr_t))(Il2CppBase() + 0x4DFB55C))(this, result);
	}

};

}
