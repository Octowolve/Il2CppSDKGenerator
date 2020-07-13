#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutBeginCentered
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutBeginCentered"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutBeginCentered*))(Il2CppBase() + 0x4F03A58))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutBeginCentered*))(Il2CppBase() + 0x4F03A5C))(this);
	}

};

}
