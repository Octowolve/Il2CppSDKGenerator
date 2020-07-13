#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDownloadReturncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnDownloadReturn>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& taskId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(OnDownloadReturncAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2DC65EC))(this, x);
	}

};

}
