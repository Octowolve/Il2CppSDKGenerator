#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCenterCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCenterCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t centeredObject) {
		return ((T (*)(OnCenterCallback*, uintptr_t))(Il2CppBase() + 0x39C6E38))(this, centeredObject);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t centeredObject, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnCenterCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C712C))(this, centeredObject, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnCenterCallback*, uintptr_t))(Il2CppBase() + 0x39C7158))(this, result);
	}

};

}
