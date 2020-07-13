#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGravity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGravity"));
	}

	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& z() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGravity*))(Il2CppBase() + 0x4FBC900))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetGravity*))(Il2CppBase() + 0x4FBCA44))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetGravity*))(Il2CppBase() + 0x4FBCB70))(this);
	}
	template <typename T = void> T DoSetGravity() {
		return ((T (*)(SetGravity*))(Il2CppBase() + 0x4FBCA70))(this);
	}

};

}
