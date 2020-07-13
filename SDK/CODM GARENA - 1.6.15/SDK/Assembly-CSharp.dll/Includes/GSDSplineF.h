#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDSplineF
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDSplineF"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(GSDSplineF*))(Il2CppBase() + 0x3E31C8C))(this);
	}

};

}
