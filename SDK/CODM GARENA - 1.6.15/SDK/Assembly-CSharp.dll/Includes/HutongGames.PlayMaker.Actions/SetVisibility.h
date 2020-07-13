#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetVisibility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetVisibility"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& visible() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& resetOnExit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& initialVisibility() {
		return *(T*)((uintptr_t)this + 0x3D);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetVisibility*))(Il2CppBase() + 0x502E37C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetVisibility*))(Il2CppBase() + 0x502E3C4))(this);
	}
	template <typename T = void> T DoSetVisibility(uintptr_t go) {
		return ((T (*)(SetVisibility*, uintptr_t))(Il2CppBase() + 0x502E414))(this, go);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(SetVisibility*))(Il2CppBase() + 0x502E594))(this);
	}
	template <typename T = void> T ResetVisibility() {
		return ((T (*)(SetVisibility*))(Il2CppBase() + 0x502E5A4))(this);
	}

};

}
