#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAudioPitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAudioPitch"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& pitch() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAudioPitch*))(Il2CppBase() + 0x4FB57E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAudioPitch*))(Il2CppBase() + 0x4FB5818))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAudioPitch*))(Il2CppBase() + 0x4FB5974))(this);
	}
	template <typename T = void> T DoSetAudioPitch() {
		return ((T (*)(SetAudioPitch*))(Il2CppBase() + 0x4FB5844))(this);
	}

};

}
