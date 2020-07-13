#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WheeledTankAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WheeledTankAudioComponent"));
	}

	template <typename T = Il2CppString*> T& RTPCThrottle() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& m_IsAimming() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEngineRpm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T StartAudio() {
		return ((T (*)(WheeledTankAudioComponent*))(Il2CppBase() + 0x458E3E4))(this);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(WheeledTankAudioComponent*, float))(Il2CppBase() + 0x458E6A8))(this, deltaTime);
	}
	template <typename T = void> T RefreshEngineRpm() {
		return ((T (*)(WheeledTankAudioComponent*))(Il2CppBase() + 0x458F370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAudio() {
		return ((T (*)(WheeledTankAudioComponent*))(Il2CppBase() + 0x458F6D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(WheeledTankAudioComponent*, float))(Il2CppBase() + 0x458F6DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshEngineRpm() {
		return ((T (*)(WheeledTankAudioComponent*))(Il2CppBase() + 0x458F6E0))(this);
	}

};

}
