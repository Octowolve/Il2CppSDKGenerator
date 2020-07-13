#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GUILayoutAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GUILayoutAction"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& layoutOptions() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& options() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_LayoutOptions() {
		return ((T (*)(GUILayoutAction*))(Il2CppBase() + 0x4F02CBC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GUILayoutAction*))(Il2CppBase() + 0x4F02E20))(this);
	}

};

}
