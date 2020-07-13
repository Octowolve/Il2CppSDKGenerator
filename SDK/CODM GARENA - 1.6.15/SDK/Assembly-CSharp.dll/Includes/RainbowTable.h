#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RainbowTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RainbowTable"));
	}


	template <typename T = Il2CppString*> static T Convert(Il2CppString* src) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3DB9AAC))(0, src);
	}
	template <typename T = Il2CppString*> static T Convert_1(Il2CppString* src, int32_t offset, int32_t length) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3DB9E70))(0, src, offset, length);
	}
	template <typename T = void> static T Convert_2(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DB9B30))(0, c);
	}

};

}
