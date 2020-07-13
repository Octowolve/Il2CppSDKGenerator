#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetFunc1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetFunc`1"));
	}


	template <typename T = void> T Invoke(uintptr_t L, int32_t idx, uintptr_t* val) {
		return ((T (*)(GetFunc1*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x5191048))(this, L, idx, val);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t L, int32_t idx, uintptr_t* val, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetFunc1*, uintptr_t, int32_t, uintptr_t*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51910F0))(this, L, idx, val, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t* val, uintptr_t result) {
		return ((T (*)(GetFunc1*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x51911D8))(this, val, result);
	}

};

}
