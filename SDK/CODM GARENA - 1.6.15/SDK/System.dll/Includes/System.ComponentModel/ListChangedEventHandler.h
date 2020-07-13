#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ListChangedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ListChangedEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(ListChangedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAE56C))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ListChangedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CAE630))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ListChangedEventHandler*, uintptr_t))(Il2CppBase() + 0x4CAE668))(this, result);
	}

};

}
