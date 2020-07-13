#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateMapidByPlayerIdcAnonStorey8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateMapidByPlayerId>c__AnonStorey8"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint64_t x) {
		return ((T (*)(UpdateMapidByPlayerIdcAnonStorey8*, uint64_t))(Il2CppBase() + 0x2D24524))(this, x);
	}

};

}
