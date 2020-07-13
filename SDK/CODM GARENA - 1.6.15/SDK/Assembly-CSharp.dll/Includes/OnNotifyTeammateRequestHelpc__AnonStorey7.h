#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNotifyTeammateRequestHelpcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnNotifyTeammateRequestHelp>c__AnonStorey7"));
	}

	template <typename T = uint32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnNotifyTeammateRequestHelpcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x3DCE838))(this, it);
	}

};

}
