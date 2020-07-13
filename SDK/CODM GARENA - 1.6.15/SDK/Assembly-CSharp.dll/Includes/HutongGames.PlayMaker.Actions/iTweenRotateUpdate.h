#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenRotateUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenRotateUpdate"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& transformRotation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vectorRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenRotateUpdate*))(Il2CppBase() + 0x4D6C59C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenRotateUpdate*))(Il2CppBase() + 0x4D6C6B4))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenRotateUpdate*))(Il2CppBase() + 0x4D6CCDC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(iTweenRotateUpdate*))(Il2CppBase() + 0x4D6CCE0))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenRotateUpdate*))(Il2CppBase() + 0x4D6CC28))(this);
	}

};

}
