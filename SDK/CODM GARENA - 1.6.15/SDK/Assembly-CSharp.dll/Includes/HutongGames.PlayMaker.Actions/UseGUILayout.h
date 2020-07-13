#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class UseGUILayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "UseGUILayout"));
	}

	template <typename T = bool> T& turnOffGUIlayout() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(UseGUILayout*))(Il2CppBase() + 0x4F1B538))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(UseGUILayout*))(Il2CppBase() + 0x4F1B544))(this);
	}

};

}
