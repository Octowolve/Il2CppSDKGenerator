#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmEventTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmEventTarget"));
	}

	template <typename T = uintptr_t> static T& self() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& excludeSelf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& sendToChildren() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fsmComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> static T get_Self() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0BF7C))(0);
	}
	template <typename T = void> T ResetParameters() {
		return ((T (*)(FsmEventTarget*))(Il2CppBase() + 0x2F0C03C))(this);
	}

};

}
