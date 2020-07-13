#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTargetPosDel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetTargetPosDel"));
	}


	template <typename T = Il2CppVector3> T Invoke() {
		return ((T (*)(GetTargetPosDel*))(Il2CppBase() + 0x38DEE50))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetTargetPosDel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38DF7B8))(this, callback, object);
	}
	template <typename T = Il2CppVector3> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetTargetPosDel*, uintptr_t))(Il2CppBase() + 0x38DF7E4))(this, result);
	}

};

}
