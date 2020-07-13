#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecvSpecialFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecvSpecialFunc"));
	}


	template <typename T = bool> T Invoke(Il2CppArray<uintptr_t>* bytes, int32_t count) {
		return ((T (*)(RecvSpecialFunc*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43A0E90))(this, bytes, count);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* bytes, int32_t count, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RecvSpecialFunc*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43A1A08))(this, bytes, count, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(RecvSpecialFunc*, uintptr_t))(Il2CppBase() + 0x43A1AD0))(this, result);
	}

};

}
