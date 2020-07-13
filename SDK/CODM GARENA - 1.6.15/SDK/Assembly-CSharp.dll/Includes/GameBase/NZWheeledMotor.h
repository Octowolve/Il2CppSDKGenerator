#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZWheeledMotor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZWheeledMotor"));
	}

	template <typename T = float> T& initSteerAngle() {
		return *(T*)((uintptr_t)this + 0x4D0);
	}
	template <typename T = float> T& SpeedUpSteerAngle() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = float> T& UpRotateSpeed() {
		return *(T*)((uintptr_t)this + 0x4D8);
	}
	template <typename T = float> T& SteerRotateSpeed() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = float> T& RotateBalanceSpeed() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = float> T& LowRotateBalanceSpeed() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = Il2CppVector3> T& SpeedUpRotatePos() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = uintptr_t> T& RunFireSocket() {
		return *(T*)((uintptr_t)this + 0x4F4);
	}
	template <typename T = uintptr_t> T& SteerRotateCurve() {
		return *(T*)((uintptr_t)this + 0x4F8);
	}
	template <typename T = uintptr_t> T& SpeedUpRotateCurve() {
		return *(T*)((uintptr_t)this + 0x4FC);
	}
	template <typename T = Il2CppVector3> T& groundNormal() {
		return *(T*)((uintptr_t)this + 0x500);
	}
	template <typename T = float> T& currentGroundHeight() {
		return *(T*)((uintptr_t)this + 0x50C);
	}
	template <typename T = float> T& startFireExistTime() {
		return *(T*)((uintptr_t)this + 0x510);
	}
	template <typename T = float> T& startFireTime() {
		return *(T*)((uintptr_t)this + 0x514);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isPassengerAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSubBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBoostState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRotateBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSteerRotationOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSpeedUpRotationOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampPassengerTargetAniAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPassenegerAniDirMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T CheckTurnOver() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EA938))(this);
	}
	template <typename T = bool> T isAvailable() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EA9D0))(this);
	}
	template <typename T = bool> T isPassengerAvailable() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EAA7C))(this);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(NZWheeledMotor*, uint32_t, uintptr_t))(Il2CppBase() + 0x19EAB38))(this, actorID, vehicleType);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(NZWheeledMotor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19EAF1C))(this, pawn, seat);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(NZWheeledMotor*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x19EB4C0))(this, pawn, offPosition);
	}
	template <typename T = void> T ChangeSeat(uintptr_t pawn, uintptr_t newSeat) {
		return ((T (*)(NZWheeledMotor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19EB934))(this, pawn, newSeat);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EBD98))(this);
	}
	template <typename T = void> T ResetSubBody() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19ED82C))(this);
	}
	template <typename T = void> T RefreshBoostState() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EC270))(this);
	}
	template <typename T = void> T CalcRotateBalance() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19ED390))(this);
	}
	template <typename T = void> T CalcSteerRotationOffset() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19ECFB0))(this);
	}
	template <typename T = void> T CalcSpeedUpRotationOffset() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EC820))(this);
	}
	template <typename T = float> T ClampPassengerTargetAniAngle(float angle) {
		return ((T (*)(NZWheeledMotor*, float))(Il2CppBase() + 0x19ED9BC))(this, angle);
	}
	template <typename T = uintptr_t> T GetPassenegerAniDirMode(float angle) {
		return ((T (*)(NZWheeledMotor*, float))(Il2CppBase() + 0x19EDAD4))(this, angle);
	}
	template <typename T = void> T xLuaBaseProxy_CheckTurnOver() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EDC30))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_isAvailable() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EDD84))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_isPassengerAvailable() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EDE80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledMotor*, uint32_t, uintptr_t))(Il2CppBase() + 0x19EDE88))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledMotor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19EDE8C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(NZWheeledMotor*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x19EDE90))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeSeat(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledMotor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19EDEB0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_FixedUpdate() {
		return ((T (*)(NZWheeledMotor*))(Il2CppBase() + 0x19EDEB4))(this);
	}
	template <typename T = float> T xLuaBaseProxy_ClampPassengerTargetAniAngle(float P0) {
		return ((T (*)(NZWheeledMotor*, float))(Il2CppBase() + 0x19EDEB8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPassenegerAniDirMode(float P0) {
		return ((T (*)(NZWheeledMotor*, float))(Il2CppBase() + 0x19EDEC0))(this, P0);
	}

};

}
