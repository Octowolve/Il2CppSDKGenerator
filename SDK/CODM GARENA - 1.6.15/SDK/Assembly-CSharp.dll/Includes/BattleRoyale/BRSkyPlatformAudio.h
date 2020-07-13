#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkyPlatformAudio
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkyPlatformAudio"));
	}

	template <typename T = Il2CppString*> static T& StartEvent3D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& StopEvent3D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TriggerEnterEvent2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TriggerExitEvent2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LandSound3D_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LandSound3D_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VehicleHitSound3D_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VehicleHitSound3D_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SandStormEvent3D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OpenBoxEvent2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsLocalPlayerIn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_NextCheckTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SoundStartTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_StormSoundWave() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSandStormEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRSkyPlatformAudio*))(Il2CppBase() + 0x1B3D314))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRSkyPlatformAudio*))(Il2CppBase() + 0x1B3D3FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRSkyPlatformAudio*))(Il2CppBase() + 0x1B3D6F4))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRSkyPlatformAudio*, uintptr_t))(Il2CppBase() + 0x1B3DB0C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRSkyPlatformAudio*, uintptr_t))(Il2CppBase() + 0x1B3DD40))(this, other);
	}
	template <typename T = bool> T CheckTarget(uintptr_t other) {
		return ((T (*)(BRSkyPlatformAudio*, uintptr_t))(Il2CppBase() + 0x1B3DBF4))(this, other);
	}
	template <typename T = void> T CheckSandStormEvent() {
		return ((T (*)(BRSkyPlatformAudio*))(Il2CppBase() + 0x1B3D838))(this);
	}
	template <typename T = void> T PlaySound(Il2CppString* eventName, bool is3P) {
		return ((T (*)(BRSkyPlatformAudio*, Il2CppString*, bool))(Il2CppBase() + 0x1B3D4FC))(this, eventName, is3P);
	}

};

}
