#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutSpace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutSpace"));
	}

	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutSpace*))(Il2CppBase() + 0x4F06DB4))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(GUILayoutSpace*))(Il2CppBase() + 0x4F06DDC))(this);
	}

};

}
