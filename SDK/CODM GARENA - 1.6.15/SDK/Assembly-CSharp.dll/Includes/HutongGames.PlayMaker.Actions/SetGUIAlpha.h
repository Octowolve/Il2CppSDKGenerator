#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUIAlpha
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUIAlpha"));
	}

	template <typename T = uintptr_t> T& alpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& applyGlobally() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUIAlpha*))(Il2CppBase() + 0x4FBCB7C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(SetGUIAlpha*))(Il2CppBase() + 0x4FBCBA0))(this);
	}

};

}
