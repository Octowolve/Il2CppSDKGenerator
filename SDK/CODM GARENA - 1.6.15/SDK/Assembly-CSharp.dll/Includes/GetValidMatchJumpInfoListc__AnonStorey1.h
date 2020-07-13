#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetValidMatchJumpInfoListcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetValidMatchJumpInfoList>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& icurTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& matchJumps() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t x) {
		return ((T (*)(GetValidMatchJumpInfoListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3501168))(this, x);
	}

};

}
