#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerAnimatorIK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerAnimatorIK"));
	}


	template <typename T = void> T OnAnimatorIK(int32_t layerIndex) {
		return ((T (*)(PlayMakerAnimatorIK*, int32_t))(Il2CppBase() + 0x2F23F10))(this, layerIndex);
	}

};

}
