#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestoryObjectCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestoryObjectCallBack"));
	}


	template <typename T = void> T Invoke(uint32_t actorID, uintptr_t obj) {
		return ((T (*)(DestoryObjectCallBack*, uint32_t, uintptr_t))(Il2CppBase() + 0x2B1B480))(this, actorID, obj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t actorID, uintptr_t obj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DestoryObjectCallBack*, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B1B514))(this, actorID, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DestoryObjectCallBack*, uintptr_t))(Il2CppBase() + 0x2B1B5D8))(this, result);
	}

};

}
