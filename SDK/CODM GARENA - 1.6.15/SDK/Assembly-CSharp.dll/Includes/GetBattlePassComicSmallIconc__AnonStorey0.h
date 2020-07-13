#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBattlePassComicSmallIconcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBattlePassComicSmallIcon>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& Seq() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetBattlePassComicSmallIconcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3286544))(this, x);
	}

};

}
