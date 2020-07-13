#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IndividuationAnimationPostPlayCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IndividuationAnimationPostPlayCallback"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* inValues) {
		return ((T (*)(IndividuationAnimationPostPlayCallback*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F05D54))(this, inValues);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* inValues, uintptr_t callback, uintptr_t object) {
		return ((T (*)(IndividuationAnimationPostPlayCallback*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F0750C))(this, inValues, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(IndividuationAnimationPostPlayCallback*, uintptr_t))(Il2CppBase() + 0x1F07538))(this, result);
	}

};

}
