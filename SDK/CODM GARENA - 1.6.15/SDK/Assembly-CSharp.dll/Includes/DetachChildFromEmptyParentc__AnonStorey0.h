#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DetachChildFromEmptyParentcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DetachChildFromEmptyParent>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& detachGoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t child) {
		return ((T (*)(DetachChildFromEmptyParentcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x422B294))(this, child);
	}

};

}
