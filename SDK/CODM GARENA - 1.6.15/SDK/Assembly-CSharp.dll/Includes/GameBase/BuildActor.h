#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuildActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuildActor"));
	}

	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& CreateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DestoryCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForPreBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivePartMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivePartMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPosY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(BuildActor*))(Il2CppBase() + 0x3C48808))(this);
	}
	template <typename T = void> T BuildNow() {
		return ((T (*)(BuildActor*))(Il2CppBase() + 0x3C48810))(this);
	}
	template <typename T = void> T PreBuild() {
		return ((T (*)(BuildActor*))(Il2CppBase() + 0x3C48AC0))(this);
	}
	template <typename T = bool> T CheckForPreBuild(Il2CppVector3 checkStart, Il2CppVector3 checkEnd) {
		return ((T (*)(BuildActor*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3C48B88))(this, checkStart, checkEnd);
	}
	template <typename T = void> T Destroy(bool timeout) {
		return ((T (*)(BuildActor*, bool))(Il2CppBase() + 0x3C48C98))(this, timeout);
	}
	template <typename T = void> T ChangeMat(bool change) {
		return ((T (*)(BuildActor*, bool))(Il2CppBase() + 0x3C48EC4))(this, change);
	}
	template <typename T = void> T SetActorInfo(uint32_t playerID, uint32_t itemID, uint32_t actorID) {
		return ((T (*)(BuildActor*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3C48F94))(this, playerID, itemID, actorID);
	}
	template <typename T = void> T SetHealth(float health, float healthMax) {
		return ((T (*)(BuildActor*, float, float))(Il2CppBase() + 0x3C490A8))(this, health, healthMax);
	}
	template <typename T = void> T PlayAnimation(Il2CppString* animName) {
		return ((T (*)(BuildActor*, Il2CppString*))(Il2CppBase() + 0x3C491C4))(this, animName);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(BuildActor*, uintptr_t))(Il2CppBase() + 0x3C49294))(this, damageInfo);
	}
	template <typename T = void> T SetActivePartMask(unsigned char mask, bool isInPlacingProgress) {
		return ((T (*)(BuildActor*, unsigned char, bool))(Il2CppBase() + 0x3C4938C))(this, mask, isInPlacingProgress);
	}
	template <typename T = unsigned char> T GetActivePartMask() {
		return ((T (*)(BuildActor*))(Il2CppBase() + 0x3C49470))(this);
	}
	template <typename T = float> T GetLocalPosY() {
		return ((T (*)(BuildActor*))(Il2CppBase() + 0x3C49540))(this);
	}
	template <typename T = void> T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(BuildActor*, uint32_t))(Il2CppBase() + 0x3C49610))(this, actorID);
	}
	template <typename T = void> T InitMeshRenderers() {
		return ((T (*)(BuildActor*))(Il2CppBase() + 0x3C49AB8))(this);
	}
	template <typename T = void> T SetCurrentMeshRenderer(bool isActive) {
		return ((T (*)(BuildActor*, bool))(Il2CppBase() + 0x3C49CD4))(this, isActive);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(BuildActor*, bool))(Il2CppBase() + 0x3C49F78))(this, isHidden);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(BuildActor*, uintptr_t))(Il2CppBase() + 0x3C4A060))(this, P0);
	}

};

}
