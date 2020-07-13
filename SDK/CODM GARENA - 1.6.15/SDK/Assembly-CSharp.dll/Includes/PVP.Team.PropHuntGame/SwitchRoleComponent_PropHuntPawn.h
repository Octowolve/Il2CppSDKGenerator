#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class SwitchRoleComponentPropHuntPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "SwitchRoleComponent_PropHuntPawn"));
	}

	template <typename T = uintptr_t> T& m_PHPawn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_CurPropItemType() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_CurPropItem() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchSuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo3PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get3PAvatarGOAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAvatarForGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAvatarOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePropItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_CurPropItem() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34AC40C))(this);
	}
	template <typename T = bool> T CheckNeedSwitch(int32_t curItemID) {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*, int32_t))(Il2CppBase() + 0x34A9C34))(this, curItemID);
	}
	template <typename T = bool> T get_IsSwitching() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BAF9C))(this);
	}
	template <typename T = Il2CppVector3> T get_DieEffectCenter() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34AA11C))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*, uintptr_t))(Il2CppBase() + 0x34BAFA4))(this, pawn);
	}
	template <typename T = void> T SwitchSuit() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BB0B0))(this);
	}
	template <typename T = void> T SwitchTo3PView() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34ABAE0))(this);
	}
	template <typename T = void> T SwitchTo1PView() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BB148))(this);
	}
	template <typename T = void> T EndStep() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BB1FC))(this);
	}
	template <typename T = uintptr_t> T Get3PAvatarGOAnimator() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BB900))(this);
	}
	template <typename T = void> T ResetAvatarForGM() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BBA38))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*, float))(Il2CppBase() + 0x34BBB4C))(this, deltaTime);
	}
	template <typename T = void> T LoadAvatarOver(uintptr_t mesh) {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*, uintptr_t))(Il2CppBase() + 0x34BBFC0))(this, mesh);
	}
	template <typename T = void> T UpdatePropItem() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BB674))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*, uintptr_t))(Il2CppBase() + 0x34BC0B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchSuit() {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*))(Il2CppBase() + 0x34BC0C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*, float))(Il2CppBase() + 0x34BC0C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAvatarOver(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentPropHuntPawn*, uintptr_t))(Il2CppBase() + 0x34BC0D0))(this, P0);
	}

};

}
