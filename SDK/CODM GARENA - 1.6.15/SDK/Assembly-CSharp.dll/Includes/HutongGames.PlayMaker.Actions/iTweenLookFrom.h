#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenLookFrom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenLookFrom"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& transformTarget() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& vectorTarget() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& axis() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenLookFrom*))(Il2CppBase() + 0x4F0B890))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenLookFrom*))(Il2CppBase() + 0x4F0BA5C))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(iTweenLookFrom*))(Il2CppBase() + 0x4F0C9E4))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenLookFrom*))(Il2CppBase() + 0x4F0BA94))(this);
	}

};

}
