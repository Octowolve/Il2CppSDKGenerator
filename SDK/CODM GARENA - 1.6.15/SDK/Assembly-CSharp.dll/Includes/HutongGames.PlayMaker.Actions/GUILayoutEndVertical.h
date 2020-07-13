#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutEndVertical
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutEndVertical"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutEndVertical*))(Il2CppBase() + 0x4F050F0))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutEndVertical*))(Il2CppBase() + 0x4F050F4))(this);
	}

};

}
