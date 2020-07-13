#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesign {

class ActorSoundEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesign", "ActorSoundEmitter"));
	}

	template <typename T = Il2CppString*> T& SoundName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateSoundNameStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ActorSoundEmitter*))(Il2CppBase() + 0x492E830))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ActorSoundEmitter*))(Il2CppBase() + 0x492EB00))(this);
	}
	template <typename T = Il2CppString*> T ValidateSoundNameStr(Il2CppString* inSoundName) {
		return ((T (*)(ActorSoundEmitter*, Il2CppString*))(Il2CppBase() + 0x492E9E0))(this, inSoundName);
	}

};

}
