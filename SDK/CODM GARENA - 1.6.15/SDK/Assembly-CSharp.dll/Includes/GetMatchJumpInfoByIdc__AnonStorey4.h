#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMatchJumpInfoByIdcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMatchJumpInfoById>c__AnonStorey4"));
	}

	template <typename T = int64_t> T& seqId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetMatchJumpInfoByIdcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x350111C))(this, it);
	}

};

}
