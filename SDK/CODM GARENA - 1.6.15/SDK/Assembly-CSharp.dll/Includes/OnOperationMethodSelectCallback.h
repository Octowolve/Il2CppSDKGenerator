#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnOperationMethodSelectCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnOperationMethodSelectCallback"));
	}


	template <typename T = void> T Invoke(int32_t selectMap, bool autoFire) {
		return ((T (*)(OnOperationMethodSelectCallback*, int32_t, bool))(Il2CppBase() + 0x405713C))(this, selectMap, autoFire);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t selectMap, bool autoFire, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnOperationMethodSelectCallback*, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x4057210))(this, selectMap, autoFire, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnOperationMethodSelectCallback*, uintptr_t))(Il2CppBase() + 0x40572F0))(this, result);
	}

};

}
