#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDetailViewcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetDetailView>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& detailType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetDetailViewcAnonStorey1*))(Il2CppBase() + 0x37FBF80))(this);
	}

};

}
