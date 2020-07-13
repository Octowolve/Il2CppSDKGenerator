#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetArray2ArgDel2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "GetArray2ArgDel`2"));
	}


	template <typename T = bool> T Invoke(int32_t arg1, uintptr_t arg2, Il2CppArray<uintptr_t>** data, int32_t start, int32_t length) {
		return ((T (*)(GetArray2ArgDel2*, int32_t, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x48E9008))(this, arg1, arg2, data, start, length);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t arg1, uintptr_t arg2, Il2CppArray<uintptr_t>** data, int32_t start, int32_t length, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetArray2ArgDel2*, int32_t, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E90CC))(this, arg1, arg2, data, start, length, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetArray2ArgDel2*, uintptr_t))(Il2CppBase() + 0x48E91CC))(this, result);
	}

};

}
