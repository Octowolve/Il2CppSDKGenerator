#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUIContentColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUIContentColor"));
	}

	template <typename T = uintptr_t> T& contentColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& applyGlobally() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUIContentColor*))(Il2CppBase() + 0x4FBD15C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(SetGUIContentColor*))(Il2CppBase() + 0x4FBD1A4))(this);
	}

};

}
