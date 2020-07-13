#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNotifyLuckBoardRewardOpencAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnNotifyLuckBoardRewardOpen>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(OnNotifyLuckBoardRewardOpencAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1F7E39C))(this, x);
	}

};

}
