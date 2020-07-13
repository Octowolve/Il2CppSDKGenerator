#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutFlexibleSpace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutFlexibleSpace"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutFlexibleSpace*))(Il2CppBase() + 0x4F05108))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutFlexibleSpace*))(Il2CppBase() + 0x4F0510C))(this);
	}

};

}
