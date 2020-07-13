#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HelicopterAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HelicopterAudioComponent"));
	}

	template <typename T = Il2CppString*> T& flyDownEvent() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& stopFlyDownEvent() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& landingEvent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& landingEvent1p() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& flyNormalEvent() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& takeOffEvent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& takeOffEvent1p() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& stopTakeOffEvent() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& stopTakeOffEvent1p() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& RTPCVeticalSpeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& RTPCHorizontalSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& subMergeEvent1p() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& subMergeEvent3p() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& crashEvent() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& crashRTPC() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& crashEventCarriage() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& stopFlyEvent() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& alarmEvent() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& stopAlarmEvent() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& isPlayingFlyEvent() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& liftHarizantal() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& turnHarizantal() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadSoundBankComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLandingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTakeOffSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh1PSoundState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySubmergeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCrashSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayExplosionSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayedExplosionSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAlarmSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEngineSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(HelicopterAudioComponent*, float))(Il2CppBase() + 0x1EE2B1C))(this, deltaTime);
	}
	template <typename T = void> T OnLoadSoundBankComplete() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE3570))(this);
	}
	template <typename T = void> T PlayLandingSound() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE37F8))(this);
	}
	template <typename T = void> T PlayTakeOffSound() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE362C))(this);
	}
	template <typename T = void> T Refresh1PSoundState() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE3B20))(this);
	}
	template <typename T = void> T PlaySubmergeSound() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE3BF0))(this);
	}
	template <typename T = void> T PlayCrashSound(float relativeSpeed, bool underCarriage) {
		return ((T (*)(HelicopterAudioComponent*, float, bool))(Il2CppBase() + 0x1EE3E4C))(this, relativeSpeed, underCarriage);
	}
	template <typename T = void> T PlayExplosionSound() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE411C))(this);
	}
	template <typename T = void> T DelayedExplosionSound() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE41E4))(this);
	}
	template <typename T = void> T PlayAlarmSound(bool isAlarm) {
		return ((T (*)(HelicopterAudioComponent*, bool))(Il2CppBase() + 0x1EE4328))(this, isAlarm);
	}
	template <typename T = void> T PlayEngineSound(bool isEngineOn) {
		return ((T (*)(HelicopterAudioComponent*, bool))(Il2CppBase() + 0x1EE44D4))(this, isEngineOn);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(HelicopterAudioComponent*, float))(Il2CppBase() + 0x1EE4574))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadSoundBankComplete() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE457C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Refresh1PSoundState() {
		return ((T (*)(HelicopterAudioComponent*))(Il2CppBase() + 0x1EE4584))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEngineSound(bool P0) {
		return ((T (*)(HelicopterAudioComponent*, bool))(Il2CppBase() + 0x1EE458C))(this, P0);
	}

};

}
