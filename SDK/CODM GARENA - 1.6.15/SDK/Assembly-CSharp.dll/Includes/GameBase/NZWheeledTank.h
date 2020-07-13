#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZWheeledTank
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZWheeledTank"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& splineCurves() {
		return *(T*)((uintptr_t)this + 0x4D0);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& detailPoints() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& detailTangents() {
		return *(T*)((uintptr_t)this + 0x4D8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& wheelInfos() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& smokeFxs() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = float> T& smokeEffectTime() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& smokeWorldPositions() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = bool> T& isShowTrack() {
		return *(T*)((uintptr_t)this + 0x4EC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& smokeOffsets() {
		return *(T*)((uintptr_t)this + 0x4F0);
	}
	template <typename T = float> T& smokeDurationTime() {
		return *(T*)((uintptr_t)this + 0x4F4);
	}
	template <typename T = int32_t> T& trackNum() {
		return *(T*)((uintptr_t)this + 0x4F8);
	}
	template <typename T = float> T& trackScale() {
		return *(T*)((uintptr_t)this + 0x4FC);
	}
	template <typename T = uintptr_t> T& trackMesh() {
		return *(T*)((uintptr_t)this + 0x500);
	}
	template <typename T = uintptr_t> T& trackMat() {
		return *(T*)((uintptr_t)this + 0x504);
	}
	template <typename T = uintptr_t> T& trackBrokenMat() {
		return *(T*)((uintptr_t)this + 0x508);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& trackOffset() {
		return *(T*)((uintptr_t)this + 0x50C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fakeWheels() {
		return *(T*)((uintptr_t)this + 0x510);
	}
	template <typename T = uintptr_t> T& steerCurve() {
		return *(T*)((uintptr_t)this + 0x514);
	}
	template <typename T = uintptr_t> T& speedSteerCurve() {
		return *(T*)((uintptr_t)this + 0x518);
	}
	template <typename T = uintptr_t> T& LidObj() {
		return *(T*)((uintptr_t)this + 0x51C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& smokeRoots() {
		return *(T*)((uintptr_t)this + 0x520);
	}
	template <typename T = float> T& getOnVehicleSkillCD() {
		return *(T*)((uintptr_t)this + 0x524);
	}
	template <typename T = float> T& leftStartInVal() {
		return *(T*)((uintptr_t)this + 0x528);
	}
	template <typename T = float> T& rightStartInVal() {
		return *(T*)((uintptr_t)this + 0x52C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSplineCurves() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDetailPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFakeWheelRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllbehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAimingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartVehicleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T RefreshSplineCurves() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19EE0B4))(this);
	}
	template <typename T = void> T RefreshDetailPoints() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19EFF5C))(this);
	}
	template <typename T = void> T RefreshFakeWheelRotation() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19F0728))(this);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(NZWheeledTank*, uint32_t, uintptr_t))(Il2CppBase() + 0x19F0A7C))(this, actorID, vehicleType);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NZWheeledTank*, float))(Il2CppBase() + 0x19F0C3C))(this, deltaTime);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(NZWheeledTank*, int32_t, uintptr_t))(Il2CppBase() + 0x19F1718))(this, assetID, CallBackData);
	}
	template <typename T = void> T TickEffect(float deltaTime) {
		return ((T (*)(NZWheeledTank*, float))(Il2CppBase() + 0x19F23FC))(this, deltaTime);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(NZWheeledTank*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19F2B34))(this, pawn, seat);
	}
	template <typename T = void> T ChangeSeat(uintptr_t pawn, uintptr_t newSeat) {
		return ((T (*)(NZWheeledTank*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19F2D58))(this, pawn, newSeat);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(NZWheeledTank*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x19F2E60))(this, pawn, offPosition);
	}
	template <typename T = void> T ShowLid(bool isShow) {
		return ((T (*)(NZWheeledTank*, bool))(Il2CppBase() + 0x19F2C14))(this, isShow);
	}
	template <typename T = void> T StopAllbehavior() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19F3360))(this);
	}
	template <typename T = void> T ShowSmokeEffect(bool isShow) {
		return ((T (*)(NZWheeledTank*, bool))(Il2CppBase() + 0x19F3408))(this, isShow);
	}
	template <typename T = void> T RefreshSmokeEffect() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19F28DC))(this);
	}
	template <typename T = void> T SetAimingState(bool isAiming) {
		return ((T (*)(NZWheeledTank*, bool))(Il2CppBase() + 0x19F3084))(this, isAiming);
	}
	template <typename T = void> T StartVehicleSkill() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19F38F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledTank*, uint32_t, uintptr_t))(Il2CppBase() + 0x19F39A4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NZWheeledTank*, float))(Il2CppBase() + 0x19F39A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadComplete(int32_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledTank*, int32_t, uintptr_t))(Il2CppBase() + 0x19F39AC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickEffect(float P0) {
		return ((T (*)(NZWheeledTank*, float))(Il2CppBase() + 0x19F39B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledTank*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19F39B4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeSeat(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(NZWheeledTank*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19F39B8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(NZWheeledTank*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x19F39BC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StopAllbehavior() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19F39DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartVehicleSkill() {
		return ((T (*)(NZWheeledTank*))(Il2CppBase() + 0x19F3AC0))(this);
	}

};

}
