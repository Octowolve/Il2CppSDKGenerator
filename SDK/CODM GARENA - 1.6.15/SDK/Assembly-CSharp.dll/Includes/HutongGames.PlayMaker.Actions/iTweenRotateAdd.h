#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenRotateAdd
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenRotateAdd"));
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
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenRotateAdd*))(Il2CppBase() + 0x4D68554))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenRotateAdd*))(Il2CppBase() + 0x4D686DC))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenRotateAdd*))(Il2CppBase() + 0x4D694A4))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenRotateAdd*))(Il2CppBase() + 0x4D6871C))(this);
	}

};

}
