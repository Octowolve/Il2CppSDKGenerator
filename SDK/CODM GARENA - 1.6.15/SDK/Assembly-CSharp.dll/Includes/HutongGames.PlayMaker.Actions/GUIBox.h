#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUIBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUIBox"));
	}


	template <typename T = void> T OnGUI() {
		return ((T (*)(GUIBox*))(Il2CppBase() + 0x4F01A08))(this);
	}

};

}
