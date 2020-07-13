#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BitConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "BitConverter"));
	}


	template <typename T = int32_t> static T ToInt32(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED76FC))(0, value, startIndex);
	}
	template <typename T = float> static T ToSingle(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED75D4))(0, value, startIndex);
	}
	template <typename T = bool> static T ToBoolean(Il2CppArray<uintptr_t>* value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED7824))(0, value, startIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2EE6460))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_1(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2EE6328))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytes_2(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2EE6014))(0, value);
	}

};

}
