#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DOMObjectiveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DOMObjectiveVolume"));
	}

	template <typename T = uint32_t> T& OccupySpeed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& ElapseSpeed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& ObjectiveID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& EffectOffset() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& EffectSizeRate() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& InitCamp() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& InitState() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& AttackSpeed() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& LOCID_UIDefendName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AttachedRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ServerCamp() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_SelfCamp() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_OccupiedEffectID_Self() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_OccupiedEffectID_Enemy() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_OccupiedEffectID_None() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CurOccupiedEffectID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_OccupiedEffect() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PawnList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAreaState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAttachedRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOwnerCampChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVolumeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseTargetVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = float> T get_Radius() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B35404))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B3540C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B35610))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B3576C))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(DOMObjectiveVolume*, float))(Il2CppBase() + 0x2B35774))(this, fDeltaTime);
	}
	template <typename T = uintptr_t> T CreateAreaState() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B35890))(this);
	}
	template <typename T = void> T SwitchAttachedRoot(bool active) {
		return ((T (*)(DOMObjectiveVolume*, bool))(Il2CppBase() + 0x2B354CC))(this, active);
	}
	template <typename T = bool> T IsPawnInTrigger(uintptr_t pawn) {
		return ((T (*)(DOMObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x2B2F808))(this, pawn);
	}
	template <typename T = bool> T GetCurCamp(uintptr_t camp, uintptr_t num) {
		return ((T (*)(DOMObjectiveVolume*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B322B4))(this, camp, num);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(DOMObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x2B35958))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(DOMObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x2B35AFC))(this, other);
	}
	template <typename T = void> T OnOwnerCampChange(uintptr_t newCamp) {
		return ((T (*)(DOMObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x2B302A0))(this, newCamp);
	}
	template <typename T = void> T PlayVolumeEffect() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B35DDC))(this);
	}
	template <typename T = void> T CloseTargetVolume() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B35CA0))(this);
	}
	template <typename T = void> T OnSyncUsability(bool available) {
		return ((T (*)(DOMObjectiveVolume*, bool))(Il2CppBase() + 0x2B361FC))(this, available);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B362EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DOMObjectiveVolume*))(Il2CppBase() + 0x2B362F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DOMObjectiveVolume*, float))(Il2CppBase() + 0x2B362FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(DOMObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x2B36304))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(DOMObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x2B3630C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncUsability(bool P0) {
		return ((T (*)(DOMObjectiveVolume*, bool))(Il2CppBase() + 0x2B36314))(this, P0);
	}

};

}
