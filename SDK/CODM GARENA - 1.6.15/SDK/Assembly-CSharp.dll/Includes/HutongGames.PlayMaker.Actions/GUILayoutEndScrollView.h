#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutEndScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutEndScrollView"));
	}


	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutEndScrollView*))(Il2CppBase() + 0x4F050DC))(this);
	}

};

}
