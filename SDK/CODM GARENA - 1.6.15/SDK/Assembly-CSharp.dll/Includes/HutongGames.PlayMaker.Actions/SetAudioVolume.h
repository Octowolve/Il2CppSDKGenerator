#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAudioVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAudioVolume"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& volume() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAudioVolume*))(Il2CppBase() + 0x4FB59FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAudioVolume*))(Il2CppBase() + 0x4FB5A2C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAudioVolume*))(Il2CppBase() + 0x4FB5B88))(this);
	}
	template <typename T = void> T DoSetAudioVolume() {
		return ((T (*)(SetAudioVolume*))(Il2CppBase() + 0x4FB5A58))(this);
	}

};

}
