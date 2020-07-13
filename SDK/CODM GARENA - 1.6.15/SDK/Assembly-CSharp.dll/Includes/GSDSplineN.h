#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDSplineN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDSplineN"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(GSDSplineN*))(Il2CppBase() + 0x3E31CB4))(this);
	}
	template <typename T = void> T ToggleHideFlags(bool bIsHidden) {
		return ((T (*)(GSDSplineN*, bool))(Il2CppBase() + 0x3E31CC0))(this, bIsHidden);
	}

};

}
