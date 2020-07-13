#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendExpCardSuccesscAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendExpCardSuccess>c__AnonStorey1"));
	}

	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SendExpCardSuccesscAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3852E8C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SendExpCardSuccesscAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3852ED0))(this, it);
	}

};

}
