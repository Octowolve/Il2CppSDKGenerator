#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenScaleUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenScaleUpdate"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& transformScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vectorScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenScaleUpdate*))(Il2CppBase() + 0x4D70CE0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenScaleUpdate*))(Il2CppBase() + 0x4D70DF0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenScaleUpdate*))(Il2CppBase() + 0x4D712C8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(iTweenScaleUpdate*))(Il2CppBase() + 0x4D712CC))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenScaleUpdate*))(Il2CppBase() + 0x4D71214))(this);
	}

};

}
