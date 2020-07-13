#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IJoyStickOcclusions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IJoyStickOcclusions"));
	}


	template <typename T = bool> T IsOccluded(Il2CppVector2 pos, float radius) {
		return ((T (*)(IJoyStickOcclusions*, Il2CppVector2, float))(Il2CppBase() + 0x0))(this, pos, radius);
	}

};

}
