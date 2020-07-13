#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetEventTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetEventTarget"));
	}

	template <typename T = uintptr_t> T& eventTarget() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetEventTarget*))(Il2CppBase() + 0x4FB71A4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetEventTarget*))(Il2CppBase() + 0x4FB71A8))(this);
	}

};

}
