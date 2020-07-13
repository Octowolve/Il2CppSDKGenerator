#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerApplicationEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerApplicationEvents"));
	}


	template <typename T = void> T OnApplicationFocus() {
		return ((T (*)(PlayMakerApplicationEvents*))(Il2CppBase() + 0x513BA78))(this);
	}
	template <typename T = void> T OnApplicationPause() {
		return ((T (*)(PlayMakerApplicationEvents*))(Il2CppBase() + 0x513BBB0))(this);
	}

};

}
