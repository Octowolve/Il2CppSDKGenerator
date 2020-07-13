#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MedicalStationDrone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MedicalStationDrone"));
	}

	template <typename T = float> T& TakeOffTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& IdealFlyHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_TargetPlayerID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_TargetPlayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_TargetPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_BeginTakeOffPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppQuaternion> T& m_BeginTakeOffRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_EndTakeOffPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppQuaternion> T& m_EndTakeOffRotation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_BeginTakeOff() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_BeginTakeOffTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_HasTargetPlayer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_EndTakeOffPositionOffset() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_SignalTransmissionEffect() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_StartTransform() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_SignalTransmissionEffectLinePoints() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_CuringEffect() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_CuringEffectLinePoints() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsCuring() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestroyed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetPlayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginCuringTargetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCuringEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCuringTargetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSignalTransmissionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignalTransmissionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSignalTransmissionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uint32_t> T get_TargetPlayerID() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CADBC))(this);
	}
	template <typename T = void> T set_TargetPlayerID(uint32_t value) {
		return ((T (*)(MedicalStationDrone*, uint32_t))(Il2CppBase() + 0x19CCF08))(this, value);
	}
	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CCF10))(this);
	}
	template <typename T = void> T Init(uintptr_t owner, Il2CppVector3 endTakeOffPositionOffset, float takeOffDelay, int32_t index) {
		return ((T (*)(MedicalStationDrone*, uintptr_t, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x19CA8F4))(this, owner, endTakeOffPositionOffset, takeOffDelay, index);
	}
	template <typename T = void> T SetTargetPlayerState(uint32_t playerID, bool isCuring) {
		return ((T (*)(MedicalStationDrone*, uint32_t, bool))(Il2CppBase() + 0x19CAF0C))(this, playerID, isCuring);
	}
	template <typename T = void> T TakeOff() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CD628))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CDA8C))(this);
	}
	template <typename T = void> T BeginCuringTargetPlayer() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CCFF8))(this);
	}
	template <typename T = void> T UpdateCuringEffect() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CE99C))(this);
	}
	template <typename T = void> T StopCuringTargetPlayer() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CD478))(this);
	}
	template <typename T = void> T ShowSignalTransmissionEffect() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CEC98))(this);
	}
	template <typename T = void> T UpdateSignalTransmissionEffect() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CE4BC))(this);
	}
	template <typename T = void> T HideSignalTransmissionEffect() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CF040))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MedicalStationDrone*))(Il2CppBase() + 0x19CF170))(this);
	}
	template <typename T = void> T BeginCuringTargetPlayerm__0(uintptr_t effect) {
		return ((T (*)(MedicalStationDrone*, uintptr_t))(Il2CppBase() + 0x19CF21C))(this, effect);
	}
	template <typename T = void> T ShowSignalTransmissionEffectm__1(uintptr_t effect) {
		return ((T (*)(MedicalStationDrone*, uintptr_t))(Il2CppBase() + 0x19CF508))(this, effect);
	}

};

}
