#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IPlayerInfoGetStar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IPlayerInfo_GetStar"));
	}


	template <typename T = uint32_t> T GetStarNum() {
		return ((T (*)(IPlayerInfoGetStar*))(Il2CppBase() + 0x0))(this);
	}

};

}
