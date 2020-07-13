#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReceivedMatchJoinNotifycAnonStorey11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReceivedMatchJoinNotify>c__AnonStorey11"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(ReceivedMatchJoinNotifycAnonStorey11*, uintptr_t))(Il2CppBase() + 0x2D244D8))(this, s);
	}

};

}
