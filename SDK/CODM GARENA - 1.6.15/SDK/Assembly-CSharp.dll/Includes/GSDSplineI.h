#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDSplineI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDSplineI"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(GSDSplineI*))(Il2CppBase() + 0x3E31CA0))(this);
	}

};

}
