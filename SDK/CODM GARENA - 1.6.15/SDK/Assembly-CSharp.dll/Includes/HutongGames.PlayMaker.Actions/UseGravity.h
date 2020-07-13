#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class UseGravity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "UseGravity"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& useGravity() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(UseGravity*))(Il2CppBase() + 0x4F1B3D4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(UseGravity*))(Il2CppBase() + 0x4F1B400))(this);
	}
	template <typename T = void> T DoUseGravity() {
		return ((T (*)(UseGravity*))(Il2CppBase() + 0x4F1B420))(this);
	}

};

}
