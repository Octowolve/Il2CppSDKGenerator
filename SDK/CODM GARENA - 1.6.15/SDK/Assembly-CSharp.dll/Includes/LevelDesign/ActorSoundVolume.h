#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LevelDesign {

class ActorSoundVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LevelDesign", "ActorSoundVolume"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& InsideVolumeSound() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& OutsideVolumeSound() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& Is3DSound() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& NeedStopSound() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = int32_t> T& SoundType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& DelayStartPlayTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& DelayStopPlayTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x70);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateSoundNameStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ActorSoundVolume*))(Il2CppBase() + 0x492ED18))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ActorSoundVolume*))(Il2CppBase() + 0x492F0AC))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(ActorSoundVolume*, uintptr_t))(Il2CppBase() + 0x492F330))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(ActorSoundVolume*, uintptr_t))(Il2CppBase() + 0x492F610))(this, other);
	}
	template <typename T = Il2CppString*> T ValidateSoundNameStr(Il2CppString* inSoundName) {
		return ((T (*)(ActorSoundVolume*, Il2CppString*))(Il2CppBase() + 0x492EF8C))(this, inSoundName);
	}
	template <typename T = void> T StartPlaySound() {
		return ((T (*)(ActorSoundVolume*))(Il2CppBase() + 0x492F8F0))(this);
	}
	template <typename T = void> T StopPlaySound() {
		return ((T (*)(ActorSoundVolume*))(Il2CppBase() + 0x492FE6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ActorSoundVolume*))(Il2CppBase() + 0x49303E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(ActorSoundVolume*))(Il2CppBase() + 0x49303F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(ActorSoundVolume*, uintptr_t))(Il2CppBase() + 0x49303F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(ActorSoundVolume*, uintptr_t))(Il2CppBase() + 0x4930400))(this, P0);
	}

};

}
