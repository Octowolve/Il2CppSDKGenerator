#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameModifyAmmoCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameModifyAmmoCount"));
	}

	template <typename T = int32_t> T& AmmoCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameModifyAmmoCount*))(Il2CppBase() + 0x50370B4))(this);
	}

};

}
