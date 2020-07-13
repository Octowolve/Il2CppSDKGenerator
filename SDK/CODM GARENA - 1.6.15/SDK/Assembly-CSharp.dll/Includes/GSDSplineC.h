#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDSplineC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDSplineC"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(GSDSplineC*))(Il2CppBase() + 0x3E31C78))(this);
	}

};

}
