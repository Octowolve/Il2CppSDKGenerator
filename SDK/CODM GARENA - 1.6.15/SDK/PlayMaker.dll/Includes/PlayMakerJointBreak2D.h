#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerJointBreak2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerJointBreak2D"));
	}


	template <typename T = void> T OnJointBreak2D(uintptr_t brokenJoint) {
		return ((T (*)(PlayMakerJointBreak2D*, uintptr_t))(Il2CppBase() + 0x5146060))(this, brokenJoint);
	}

};

}
