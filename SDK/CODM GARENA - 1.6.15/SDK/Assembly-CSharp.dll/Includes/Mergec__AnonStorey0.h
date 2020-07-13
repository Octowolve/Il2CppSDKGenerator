#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MergecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Merge>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& seqType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t seq) {
		return ((T (*)(MergecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3AEC610))(this, seq);
	}

};

}
