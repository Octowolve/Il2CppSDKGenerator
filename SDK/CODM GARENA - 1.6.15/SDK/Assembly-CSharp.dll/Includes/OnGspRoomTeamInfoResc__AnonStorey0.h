#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGspRoomTeamInfoRescAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnGspRoomTeamInfoRes>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& localPlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t c) {
		return ((T (*)(OnGspRoomTeamInfoRescAnonStorey0*, uintptr_t))(Il2CppBase() + 0x294ACA0))(this, c);
	}

};

}
