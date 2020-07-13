#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUIBackgroundColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUIBackgroundColor"));
	}

	template <typename T = uintptr_t> T& backgroundColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& applyGlobally() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUIBackgroundColor*))(Il2CppBase() + 0x4FBCD9C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(SetGUIBackgroundColor*))(Il2CppBase() + 0x4FBCDE4))(this);
	}

};

}
