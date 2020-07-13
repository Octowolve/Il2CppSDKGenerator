#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucStateUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucStateUpdate"));
	}


	template <typename T = void> T Invoke(uintptr_t animator, uintptr_t stateInfo) {
		return ((T (*)(FucStateUpdate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EDCAC))(this, animator, stateInfo);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t animator, uintptr_t stateInfo, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucStateUpdate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x31EF9A8))(this, animator, stateInfo, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucStateUpdate*, uintptr_t))(Il2CppBase() + 0x31EFAB4))(this, result);
	}

};

}
