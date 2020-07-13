#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeRoomSettingLadderMultiplecAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeRoomSetting_Ladder_Multiple>c__AnonStoreyA"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& ladderModeList() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
