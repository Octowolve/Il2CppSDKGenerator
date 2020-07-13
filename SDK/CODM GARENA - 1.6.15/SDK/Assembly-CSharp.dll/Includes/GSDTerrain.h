#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDTerrain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDTerrain"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(GSDTerrain*))(Il2CppBase() + 0x3E31DE8))(this);
	}

};

}
