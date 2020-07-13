#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlaySound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlaySound"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& volume() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlaySound*))(Il2CppBase() + 0x4D7E964))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlaySound*))(Il2CppBase() + 0x4D7EA38))(this);
	}
	template <typename T = void> T DoPlaySound() {
		return ((T (*)(PlaySound*))(Il2CppBase() + 0x4D7EA58))(this);
	}

};

}
