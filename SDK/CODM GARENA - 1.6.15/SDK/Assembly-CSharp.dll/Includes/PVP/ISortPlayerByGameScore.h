#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ISortPlayerByGameScore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ISortPlayerByGameScore"));
	}


	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerInfoListBySort() {
		return ((T (*)(ISortPlayerByGameScore*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T GetHightestPlayerID() {
		return ((T (*)(ISortPlayerByGameScore*))(Il2CppBase() + 0x0))(this);
	}

};

}
