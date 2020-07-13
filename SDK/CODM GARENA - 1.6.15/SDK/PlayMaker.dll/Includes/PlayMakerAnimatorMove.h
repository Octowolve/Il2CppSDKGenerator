#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerAnimatorMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerAnimatorMove"));
	}


	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(PlayMakerAnimatorMove*))(Il2CppBase() + 0x513B954))(this);
	}

};

}
