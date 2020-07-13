#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameMonsterIntroCompleted
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameMonsterIntroCompleted"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameMonsterIntroCompleted*))(Il2CppBase() + 0x50372A4))(this);
	}

};

}
