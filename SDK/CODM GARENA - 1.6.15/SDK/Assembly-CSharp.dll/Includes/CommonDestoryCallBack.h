#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommonDestoryCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonDestoryCallBack"));
	}


	template <typename T = void> T Invoke(uint32_t actorID) {
		return ((T (*)(CommonDestoryCallBack*, uint32_t))(Il2CppBase() + 0x2B1ADF0))(this, actorID);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint32_t actorID, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CommonDestoryCallBack*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B1B240))(this, actorID, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CommonDestoryCallBack*, uintptr_t))(Il2CppBase() + 0x2B1B2FC))(this, result);
	}

};

}
