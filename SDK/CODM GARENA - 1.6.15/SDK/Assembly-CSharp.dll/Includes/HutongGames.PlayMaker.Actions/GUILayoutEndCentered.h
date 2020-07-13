#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutEndCentered
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutEndCentered"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutEndCentered*))(Il2CppBase() + 0x4F05070))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutEndCentered*))(Il2CppBase() + 0x4F05074))(this);
	}

};

}
