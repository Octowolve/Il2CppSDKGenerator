#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayRandomSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayRandomSound"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& audioClips() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& volume() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayRandomSound*))(Il2CppBase() + 0x4D7E48C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayRandomSound*))(Il2CppBase() + 0x4D7E6C0))(this);
	}
	template <typename T = void> T DoPlayRandomClip() {
		return ((T (*)(PlayRandomSound*))(Il2CppBase() + 0x4D7E6E0))(this);
	}

};

}
