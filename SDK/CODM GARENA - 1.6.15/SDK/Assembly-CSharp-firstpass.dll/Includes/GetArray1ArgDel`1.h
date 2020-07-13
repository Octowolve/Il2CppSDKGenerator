#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetArray1ArgDel1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "GetArray1ArgDel`1"));
	}


	template <typename T = bool> T Invoke(int32_t arg1, Il2CppArray<uintptr_t>** data, int32_t start, int32_t length) {
		return ((T (*)(GetArray1ArgDel1*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x48E7B3C))(this, arg1, data, start, length);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t arg1, Il2CppArray<uintptr_t>** data, int32_t start, int32_t length, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetArray1ArgDel1*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48E7BF0))(this, arg1, data, start, length, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetArray1ArgDel1*, uintptr_t))(Il2CppBase() + 0x48E7CE4))(this, result);
	}

};

}
