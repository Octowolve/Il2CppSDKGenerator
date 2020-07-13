#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUISkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUISkin"));
	}

	template <typename T = uintptr_t> T& skin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& applyGlobally() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUISkin*))(Il2CppBase() + 0x4FBD468))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(SetGUISkin*))(Il2CppBase() + 0x4FBD494))(this);
	}

};

}
