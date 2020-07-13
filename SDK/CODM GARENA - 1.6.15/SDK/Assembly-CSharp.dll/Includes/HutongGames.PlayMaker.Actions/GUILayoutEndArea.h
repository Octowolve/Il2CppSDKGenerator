#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutEndArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutEndArea"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutEndArea*))(Il2CppBase() + 0x4F05058))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutEndArea*))(Il2CppBase() + 0x4F0505C))(this);
	}

};

}
