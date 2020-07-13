#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DrawFullscreenColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DrawFullscreenColor"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DrawFullscreenColor*))(Il2CppBase() + 0x4FC707C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(DrawFullscreenColor*))(Il2CppBase() + 0x4FC70C4))(this);
	}

};

}
