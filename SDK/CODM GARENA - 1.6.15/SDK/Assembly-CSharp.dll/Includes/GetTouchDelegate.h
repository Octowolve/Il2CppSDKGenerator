#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTouchDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetTouchDelegate"));
	}


	template <typename T = uintptr_t> T Invoke(int32_t id, bool createIfMissing) {
		return ((T (*)(GetTouchDelegate*, int32_t, bool))(Il2CppBase() + 0x39BE858))(this, id, createIfMissing);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t id, bool createIfMissing, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetTouchDelegate*, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C42C4))(this, id, createIfMissing, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetTouchDelegate*, uintptr_t))(Il2CppBase() + 0x39C43A4))(this, result);
	}

};

}
