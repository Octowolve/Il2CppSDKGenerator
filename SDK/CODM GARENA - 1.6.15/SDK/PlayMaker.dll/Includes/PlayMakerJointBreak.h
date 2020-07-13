#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerJointBreak
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerJointBreak"));
	}


	template <typename T = void> T OnJointBreak(float breakForce) {
		return ((T (*)(PlayMakerJointBreak*, float))(Il2CppBase() + 0x5145FA0))(this, breakForce);
	}

};

}
