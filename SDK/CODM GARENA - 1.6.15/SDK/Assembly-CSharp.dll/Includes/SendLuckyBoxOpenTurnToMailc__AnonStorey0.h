#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendLuckyBoxOpenTurnToMailcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendLuckyBoxOpenTurnToMail>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& boxId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(SendLuckyBoxOpenTurnToMailcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x23A7328))(this, x);
	}

};

}
