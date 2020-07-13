#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameTogglePlayerPinDownToGround
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameTogglePlayerPinDownToGround"));
	}

	template <typename T = bool> T& shouldEnable() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameTogglePlayerPinDownToGround*))(Il2CppBase() + 0x4F15CA8))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(StoryGameTogglePlayerPinDownToGround*))(Il2CppBase() + 0x4F15CAC))(this);
	}

};

}
