#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerFixedUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerFixedUpdate"));
	}


	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PlayMakerFixedUpdate*))(Il2CppBase() + 0x513C238))(this);
	}

};

}
