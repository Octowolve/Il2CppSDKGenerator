#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenLookUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenLookUpdate"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& transformTarget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vectorTarget() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& axis() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenLookUpdate*))(Il2CppBase() + 0x4F0DB5C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenLookUpdate*))(Il2CppBase() + 0x4F0DC74))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenLookUpdate*))(Il2CppBase() + 0x4F0E2B8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(iTweenLookUpdate*))(Il2CppBase() + 0x4F0E2BC))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenLookUpdate*))(Il2CppBase() + 0x4F0E204))(this);
	}

};

}
