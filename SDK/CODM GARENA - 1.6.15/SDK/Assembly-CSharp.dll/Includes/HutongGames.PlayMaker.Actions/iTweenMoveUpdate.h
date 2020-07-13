#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenMoveUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenMoveUpdate"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& transformPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vectorPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& orientToPath() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& lookAtObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& lookAtVector() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& lookTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& axis() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenMoveUpdate*))(Il2CppBase() + 0x4F13620))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenMoveUpdate*))(Il2CppBase() + 0x4F1381C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(iTweenMoveUpdate*))(Il2CppBase() + 0x4F14320))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenMoveUpdate*))(Il2CppBase() + 0x4F146E0))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenMoveUpdate*))(Il2CppBase() + 0x4F1426C))(this);
	}

};

}
