#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILabel"));
	}


	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILabel*))(Il2CppBase() + 0x4F02AA8))(this);
	}

};

}
