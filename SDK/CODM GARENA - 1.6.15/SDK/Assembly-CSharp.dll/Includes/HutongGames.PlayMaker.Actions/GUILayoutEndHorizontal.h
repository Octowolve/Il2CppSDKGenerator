#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutEndHorizontal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutEndHorizontal"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutEndHorizontal*))(Il2CppBase() + 0x4F050C4))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutEndHorizontal*))(Il2CppBase() + 0x4F050C8))(this);
	}

};

}
