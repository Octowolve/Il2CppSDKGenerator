#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EnableGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EnableGUI"));
	}

	template <typename T = uintptr_t> T& enableGUI() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EnableGUI*))(Il2CppBase() + 0x4FCC748))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EnableGUI*))(Il2CppBase() + 0x4FCC76C))(this);
	}

};

}
