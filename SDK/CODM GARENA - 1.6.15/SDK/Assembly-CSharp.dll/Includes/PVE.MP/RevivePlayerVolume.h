#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class RevivePlayerVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "RevivePlayerVolume"));
	}

	template <typename T = float> T& deathTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& respawnTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& EnterPlayerID() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& lastShowState() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& triggerCol() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& colRadius() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& allVolumes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInside() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyShowReviveHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = float> T get_deathTime() {
		return ((T (*)(RevivePlayerVolume*))(Il2CppBase() + 0x3EC9FF8))(this);
	}
	template <typename T = void> T set_deathTime(float value) {
		return ((T (*)(RevivePlayerVolume*, float))(Il2CppBase() + 0x3ECA000))(this, value);
	}
	template <typename T = float> T get_respawnTime() {
		return ((T (*)(RevivePlayerVolume*))(Il2CppBase() + 0x3ECA008))(this);
	}
	template <typename T = void> T set_respawnTime(float value) {
		return ((T (*)(RevivePlayerVolume*, float))(Il2CppBase() + 0x3ECA010))(this, value);
	}
	template <typename T = void> T Initialize(Il2CppVector3 inPosition, int32_t actorID, int32_t itemID, Il2CppArray<uintptr_t>* attachmentID, Il2CppArray<uintptr_t>* weaponSkillID, bool inNeedConfirm, int32_t duration, uint32_t skinID, uintptr_t type) {
		return ((T (*)(RevivePlayerVolume*, Il2CppVector3, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3ECA018))(this, inPosition, actorID, itemID, attachmentID, weaponSkillID, inNeedConfirm, duration, skinID, type);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(RevivePlayerVolume*))(Il2CppBase() + 0x3ECA420))(this);
	}
	template <typename T = bool> T IsPawnInside(uintptr_t pawn) {
		return ((T (*)(RevivePlayerVolume*, uintptr_t))(Il2CppBase() + 0x3ECA820))(this, pawn);
	}
	template <typename T = void> T Despawn(uint32_t pickedByPlayerId) {
		return ((T (*)(RevivePlayerVolume*, uint32_t))(Il2CppBase() + 0x3ECAB28))(this, pickedByPlayerId);
	}
	template <typename T = void> T NotifyShowReviveHud() {
		return ((T (*)(RevivePlayerVolume*))(Il2CppBase() + 0x3ECA608))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RevivePlayerVolume*))(Il2CppBase() + 0x3ECAD0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Initialize(Il2CppVector3 P0, int32_t P1, int32_t P2, Il2CppArray<uintptr_t>* P3, Il2CppArray<uintptr_t>* P4, bool P5, int32_t P6, uint32_t P7, uintptr_t P8) {
		return ((T (*)(RevivePlayerVolume*, Il2CppVector3, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x3ECAEFC))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = void> T xLuaBaseProxy_Despawn(uint32_t P0) {
		return ((T (*)(RevivePlayerVolume*, uint32_t))(Il2CppBase() + 0x3ECAF54))(this, P0);
	}

};

}
