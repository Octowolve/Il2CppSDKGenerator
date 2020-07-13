#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WheeledVehicleUnmanned
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WheeledVehicle_Unmanned"));
	}

	template <typename T = uint32_t> T& m_OwnerId() {
		return *(T*)((uintptr_t)this + 0x4D0);
	}
	template <typename T = bool> T& isInRange() {
		return *(T*)((uintptr_t)this + 0x4D4);
	}
	template <typename T = float> T& outRangeLastTime() {
		return *(T*)((uintptr_t)this + 0x4D8);
	}
	template <typename T = float> T& JumpForce() {
		return *(T*)((uintptr_t)this + 0x4DC);
	}
	template <typename T = float> T& JumpCDTime() {
		return *(T*)((uintptr_t)this + 0x4E0);
	}
	template <typename T = float> T& CurJumpTime() {
		return *(T*)((uintptr_t)this + 0x4E4);
	}
	template <typename T = uintptr_t> T& m_SkillComponent() {
		return *(T*)((uintptr_t)this + 0x4E8);
	}
	template <typename T = float> T& nextBumpTime() {
		return *(T*)((uintptr_t)this + 0x4EC);
	}
	template <typename T = float> T& bumpForceMultiplier() {
		return *(T*)((uintptr_t)this + 0x4F0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleControlType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateVehicleServerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVehicleBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginUseUnmanCar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndUseUnmanCar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanVehicleJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleJump() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncVehicleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTurnOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleExplo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMiniMapShowType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsControled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDestroyedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uint32_t> T get_OwnerId() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x458FAEC))(this);
	}
	template <typename T = bool> T get_canRide() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x458FAF4))(this);
	}
	template <typename T = uintptr_t> T GetVehicleControlType() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x458FAFC))(this);
	}
	template <typename T = void> T AutoGetOnVehicle(uint32_t PlayerId) {
		return ((T (*)(WheeledVehicleUnmanned*, uint32_t))(Il2CppBase() + 0x458FB9C))(this, PlayerId);
	}
	template <typename T = void> T InitVehicle(uint32_t actorID, uintptr_t vehicleType) {
		return ((T (*)(WheeledVehicleUnmanned*, uint32_t, uintptr_t))(Il2CppBase() + 0x458FE68))(this, actorID, vehicleType);
	}
	template <typename T = void> T GetOnVehicle(uintptr_t pawn, uintptr_t seat) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t, uintptr_t))(Il2CppBase() + 0x458FF38))(this, pawn, seat);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WheeledVehicleUnmanned*, float))(Il2CppBase() + 0x4590AAC))(this, deltaTime);
	}
	template <typename T = void> T ForceUpdateVehicleServerState() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4590D38))(this);
	}
	template <typename T = void> T GetOffVehicle(uintptr_t pawn, Il2CppVector3 offPosition) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4590F00))(this, pawn, offPosition);
	}
	template <typename T = void> T OnVehicleBroken() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4591868))(this);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collision) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4591900))(this, collision);
	}
	template <typename T = void> T BeginUseUnmanCar(uintptr_t pawn) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4590878))(this, pawn);
	}
	template <typename T = void> T EndUseUnmanCar(uintptr_t pawn) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4591500))(this, pawn);
	}
	template <typename T = bool> T CanVehicleJump() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4591E04))(this);
	}
	template <typename T = void> T VehicleJump() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4591F48))(this);
	}
	template <typename T = void> T OnSyncVehicleInfo(uintptr_t vehicleInfo) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4592150))(this, vehicleInfo);
	}
	template <typename T = void> T VehicleRecover() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592754))(this);
	}
	template <typename T = void> T ForceOffVehicle(uintptr_t type) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4592814))(this, type);
	}
	template <typename T = void> T OnTurnOver() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x45928D0))(this);
	}
	template <typename T = void> T VehicleExplo() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592974))(this);
	}
	template <typename T = uintptr_t> T GetMiniMapShowType() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592A84))(this);
	}
	template <typename T = bool> T CheckIsControled() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592B50))(this);
	}
	template <typename T = void> T PlayDestroyedEffect() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592390))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetVehicleControlType() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592BF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AutoGetOnVehicle(uint32_t P0) {
		return ((T (*)(WheeledVehicleUnmanned*, uint32_t))(Il2CppBase() + 0x4592BF8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitVehicle(uint32_t P0, uintptr_t P1) {
		return ((T (*)(WheeledVehicleUnmanned*, uint32_t, uintptr_t))(Il2CppBase() + 0x4592C00))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_GetOnVehicle(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4592C08))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WheeledVehicleUnmanned*, float))(Il2CppBase() + 0x4592C10))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetOffVehicle(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4592C18))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnVehicleBroken() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592C3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCollisionEnter(uintptr_t P0) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4592C44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncVehicleInfo(uintptr_t P0) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4592C4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceOffVehicle(uintptr_t P0) {
		return ((T (*)(WheeledVehicleUnmanned*, uintptr_t))(Il2CppBase() + 0x4592C54))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTurnOver() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592C5C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetMiniMapShowType() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592C64))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckIsControled() {
		return ((T (*)(WheeledVehicleUnmanned*))(Il2CppBase() + 0x4592C6C))(this);
	}

};

}
