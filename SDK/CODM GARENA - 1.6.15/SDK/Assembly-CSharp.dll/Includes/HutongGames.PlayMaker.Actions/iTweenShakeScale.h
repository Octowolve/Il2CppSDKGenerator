#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenShakeScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenShakeScale"));
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

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenShakeScale*))(Il2CppBase() + 0x4D73394))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenShakeScale*))(Il2CppBase() + 0x4D734CC))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenShakeScale*))(Il2CppBase() + 0x4D740A4))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenShakeScale*))(Il2CppBase() + 0x4D7350C))(this);
	}

};

}
