#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WheeledVehicleAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WheeledVehicleAudioComponent"));
	}

	template <typename T = Il2CppString*> T& AudioBreak() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& AudioStopBreak() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& RTPCBreak() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& AudioRoadSurface() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& SwitchRoadSurface() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& SwitchSpeedUp() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& SwitchSpeedNormal() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& AudioWheelLatSlip() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& AudioStopWheelLatSlip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& AudioWheelLongSlip() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& AudioStopWheelLongSlip() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& RTPCWheelLatSlip() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& RTPCWheelLongSlip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& RTPCWheelSpeed() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& InitNormalMaxRpm() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& InitAirMaxRpm() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& NormalMaxRpm() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& AirMaxRpm() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& AudioSuspension() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& RTPCSuspensionZSpeed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& RTPCSuspensionCrash() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& StepTexture() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& brakeStopMinTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& brakeSoundPlaying() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& wheelInfos() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& currentMaterialType() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& firstWheel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& isBoosting() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& CacheVehicleLandingState() {
		return *(T*)((uintptr_t)this + 0xE5);
	}
	template <typename T = bool> T& isWheelLatSliping() {
		return *(T*)((uintptr_t)this + 0xE6);
	}
	template <typename T = bool> T& isWheelLongSliping() {
		return *(T*)((uintptr_t)this + 0xE7);
	}
	template <typename T = float> T& refreshGroundMaterialCDTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrakeSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayLandingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySuspensionSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEngineRpm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpeedUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWheelSlipSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGroundMaterialAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T StartAudio() {
		return ((T (*)(WheeledVehicleAudioComponent*))(Il2CppBase() + 0x458E544))(this);
	}
	template <typename T = void> T SetBrakeSound(bool isOn) {
		return ((T (*)(WheeledVehicleAudioComponent*, bool))(Il2CppBase() + 0x4592C74))(this, isOn);
	}
	template <typename T = void> T CheckPlayLandingSound() {
		return ((T (*)(WheeledVehicleAudioComponent*))(Il2CppBase() + 0x459312C))(this);
	}
	template <typename T = void> T PlaySuspensionSound(float crashSpeed) {
		return ((T (*)(WheeledVehicleAudioComponent*, float))(Il2CppBase() + 0x4593410))(this, crashSpeed);
	}
	template <typename T = void> T TickAudio(float deltaTime) {
		return ((T (*)(WheeledVehicleAudioComponent*, float))(Il2CppBase() + 0x458EC44))(this, deltaTime);
	}
	template <typename T = void> T RefreshEngineRpm() {
		return ((T (*)(WheeledVehicleAudioComponent*))(Il2CppBase() + 0x458F6E4))(this);
	}
	template <typename T = void> T SpeedUp(bool isSpeedUp) {
		return ((T (*)(WheeledVehicleAudioComponent*, bool))(Il2CppBase() + 0x45942DC))(this, isSpeedUp);
	}
	template <typename T = void> T RefreshWheelSlipSound() {
		return ((T (*)(WheeledVehicleAudioComponent*))(Il2CppBase() + 0x459360C))(this);
	}
	template <typename T = void> T RefreshGroundMaterialAudio() {
		return ((T (*)(WheeledVehicleAudioComponent*))(Il2CppBase() + 0x4593EA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAudio() {
		return ((T (*)(WheeledVehicleAudioComponent*))(Il2CppBase() + 0x4594454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickAudio(float P0) {
		return ((T (*)(WheeledVehicleAudioComponent*, float))(Il2CppBase() + 0x459445C))(this, P0);
	}

};

}
