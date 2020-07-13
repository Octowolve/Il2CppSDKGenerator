#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPlayerInfo"));
	}

	template <typename T = uint32_t> T& EnergyPoint() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = uint32_t> T& m_ZiplineUid() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uint32_t> T& MedicineMaxAddHP() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OwnProfessionChipInfos() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& m_InVehicleState() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = bool> T& Skydiving() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& m_SkydivingIsLeader() {
		return *(T*)((uintptr_t)this + 0x321);
	}
	template <typename T = bool> T& m_SkydivingIsFollow() {
		return *(T*)((uintptr_t)this + 0x322);
	}
	template <typename T = uint32_t> T& m_FormationLeaderSeatID() {
		return *(T*)((uintptr_t)this + 0x324);
	}
	template <typename T = bool> T& m_InCombat() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& m_BRPlayerState() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = bool> T& m_WaitRevive() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = bool> T& m_IsParachuteOpening() {
		return *(T*)((uintptr_t)this + 0x331);
	}
	template <typename T = float> T& m_SkydivingRotateY() {
		return *(T*)((uintptr_t)this + 0x334);
	}
	template <typename T = bool> T& m_IsShockedByElectricTripWire() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = uint32_t> T& m_ElectricTripWireShockOwnerID() {
		return *(T*)((uintptr_t)this + 0x33C);
	}
	template <typename T = uintptr_t> T& m_PawnVirtualSoundHandle() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadAircraftRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZiplineUidChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePawnVirtualSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNoPawnSoundEmitter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_BattleRoyale_BRPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uint32_t> T get_EnergyPoint() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACA844))(this);
	}
	template <typename T = void> T set_EnergyPoint(uint32_t value) {
		return ((T (*)(BRPlayerInfo*, uint32_t))(Il2CppBase() + 0x1ACA84C))(this, value);
	}
	template <typename T = uint32_t> T get_ZiplineUid() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACA854))(this);
	}
	template <typename T = void> T set_ZiplineUid(uint32_t value) {
		return ((T (*)(BRPlayerInfo*, uint32_t))(Il2CppBase() + 0x1ACA85C))(this, value);
	}
	template <typename T = uint32_t> T get_MedicineMaxAddHP() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACAA60))(this);
	}
	template <typename T = void> T set_MedicineMaxAddHP(uint32_t value) {
		return ((T (*)(BRPlayerInfo*, uint32_t))(Il2CppBase() + 0x1ACAA68))(this, value);
	}
	template <typename T = uintptr_t> T get_InVehicleState() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACAA70))(this);
	}
	template <typename T = void> T set_InVehicleState(uintptr_t value) {
		return ((T (*)(BRPlayerInfo*, uintptr_t))(Il2CppBase() + 0x1ACAA78))(this, value);
	}
	template <typename T = void> T set_SkydivingIsLeader(bool value) {
		return ((T (*)(BRPlayerInfo*, bool))(Il2CppBase() + 0x1ACAA80))(this, value);
	}
	template <typename T = bool> T get_SkydivingIsLeader() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACAB44))(this);
	}
	template <typename T = void> T set_SkydivingIsFollow(bool value) {
		return ((T (*)(BRPlayerInfo*, bool))(Il2CppBase() + 0x1ACAB4C))(this, value);
	}
	template <typename T = bool> T get_SkydivingIsFollow() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACAE50))(this);
	}
	template <typename T = void> T set_FormationLeaderSeatID(uint32_t value) {
		return ((T (*)(BRPlayerInfo*, uint32_t))(Il2CppBase() + 0x1ACAE58))(this, value);
	}
	template <typename T = uint32_t> T get_FormationLeaderSeatID() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACAE60))(this);
	}
	template <typename T = bool> T get_Landed() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACAE68))(this);
	}
	template <typename T = bool> T get_InCombat() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACAE7C))(this);
	}
	template <typename T = uintptr_t> T get_BRPlayerState() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1AC2038))(this);
	}
	template <typename T = void> T set_BRPlayerState(uintptr_t value) {
		return ((T (*)(BRPlayerInfo*, uintptr_t))(Il2CppBase() + 0x1ACAE84))(this, value);
	}
	template <typename T = void> T PreLoadAircraftRes() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB184))(this);
	}
	template <typename T = bool> T get_IsInBuild() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB2D0))(this);
	}
	template <typename T = bool> T get_IsInAircraft() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB2E4))(this);
	}
	template <typename T = bool> T get_IsInAir() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB2F8))(this);
	}
	template <typename T = bool> T get_IsSkydiving() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB31C))(this);
	}
	template <typename T = bool> T get_IsOpenParachute() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB330))(this);
	}
	template <typename T = bool> T get_IsSkyFly() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB344))(this);
	}
	template <typename T = bool> T get_IsWaitRevive() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACB358))(this);
	}
	template <typename T = void> T set_IsWaitRevive(bool value) {
		return ((T (*)(BRPlayerInfo*, bool))(Il2CppBase() + 0x1ACB360))(this, value);
	}
	template <typename T = uintptr_t> T get_ReviveCardState() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1AB88A0))(this);
	}
	template <typename T = void> T OnPlayerStateChanged(uintptr_t oldState) {
		return ((T (*)(BRPlayerInfo*, uintptr_t))(Il2CppBase() + 0x1ACB43C))(this, oldState);
	}
	template <typename T = void> T OnZiplineUidChange() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACA864))(this);
	}
	template <typename T = bool> T get_IsParachuteOpening() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACBEA8))(this);
	}
	template <typename T = void> T set_IsParachuteOpening(bool value) {
		return ((T (*)(BRPlayerInfo*, bool))(Il2CppBase() + 0x1ACBEB0))(this, value);
	}
	template <typename T = float> T get_SkydivingRotateY() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACC054))(this);
	}
	template <typename T = void> T set_SkydivingRotateY(float value) {
		return ((T (*)(BRPlayerInfo*, float))(Il2CppBase() + 0x1ACC05C))(this, value);
	}
	template <typename T = bool> T get_IsShockedByElectricTripWire() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACC224))(this);
	}
	template <typename T = void> T set_IsShockedByElectricTripWire(bool value) {
		return ((T (*)(BRPlayerInfo*, bool))(Il2CppBase() + 0x1ACC22C))(this, value);
	}
	template <typename T = uint32_t> T get_ElectricTripWireShockOwnerID() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACC234))(this);
	}
	template <typename T = void> T set_ElectricTripWireShockOwnerID(uint32_t value) {
		return ((T (*)(BRPlayerInfo*, uint32_t))(Il2CppBase() + 0x1ACC23C))(this, value);
	}
	template <typename T = uintptr_t> T get_PawnVirtualSound() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1AC24A8))(this);
	}
	template <typename T = void> T set_PawnVirtualSound(uintptr_t value) {
		return ((T (*)(BRPlayerInfo*, uintptr_t))(Il2CppBase() + 0x1ACC244))(this, value);
	}
	template <typename T = void> T CreatePawnVirtualSound() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1AC33B0))(this);
	}
	template <typename T = uintptr_t> T GetNoPawnSoundEmitter() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACC24C))(this);
	}
	template <typename T = Il2CppVector3> T get_PawnPosition() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACC368))(this);
	}
	template <typename T = Il2CppQuaternion> T get_PawnRotation() {
		return ((T (*)(BRPlayerInfo*))(Il2CppBase() + 0x1ACC4DC))(this);
	}
	template <typename T = void> static T AutoGen_Copy_BattleRoyale_BRPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ACC650))(0, src, dest);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(BRPlayerInfo*, uintptr_t))(Il2CppBase() + 0x1ACCB1C))(this, P0);
	}

};

}
