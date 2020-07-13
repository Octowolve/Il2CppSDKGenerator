#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetConfByResultIdcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetConfByResultId>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& ResultId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetConfByResultIdcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x462EC7C))(this, x);
	}

};

}
