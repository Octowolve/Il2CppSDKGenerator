#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenShakeRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenShakeRotation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenShakeRotation*))(Il2CppBase() + 0x4D7258C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenShakeRotation*))(Il2CppBase() + 0x4D726CC))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenShakeRotation*))(Il2CppBase() + 0x4D73380))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenShakeRotation*))(Il2CppBase() + 0x4D7270C))(this);
	}

};

}
