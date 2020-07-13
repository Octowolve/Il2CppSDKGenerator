#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayerPrefsDeleteAll
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayerPrefsDeleteAll"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(PlayerPrefsDeleteAll*))(Il2CppBase() + 0x4D7C3FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayerPrefsDeleteAll*))(Il2CppBase() + 0x4D7C400))(this);
	}

};

}
