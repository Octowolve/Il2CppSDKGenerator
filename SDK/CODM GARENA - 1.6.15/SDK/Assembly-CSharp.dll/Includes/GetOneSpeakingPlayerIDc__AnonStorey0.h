#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetOneSpeakingPlayerIDcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetOneSpeakingPlayerID>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& memID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(void* i) {
		return ((T (*)(GetOneSpeakingPlayerIDcAnonStorey0*, void*))(Il2CppBase() + 0x1EE2410))(this, i);
	}

};

}
