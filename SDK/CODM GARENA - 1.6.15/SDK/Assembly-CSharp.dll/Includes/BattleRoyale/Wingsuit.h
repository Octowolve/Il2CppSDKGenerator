#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class Wingsuit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "Wingsuit"));
	}

	template <typename T = Il2CppVector3> T& m_WingsuitScale() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_LastTrailLerpRate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_WingsuitComponent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& NETTrailMatID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& NETAttachAssetID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> static T& UseRedirectionBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_RedirectedBone() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrailEffectColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameObjectCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RedirectionBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTrailEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrailEffectAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTrailEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T SetParam(Il2CppVector3 scale) {
		return ((T (*)(Wingsuit*, Il2CppVector3))(Il2CppBase() + 0x358A384))(this, scale);
	}
	template <typename T = void> T RefreshNetAssetID() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B4C0C))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(Wingsuit*, uintptr_t))(Il2CppBase() + 0x35B5040))(this, owner);
	}
	template <typename T = void> T PreloadRes() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B5140))(this);
	}
	template <typename T = uintptr_t> T GetTrailEffectColor() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B5228))(this);
	}
	template <typename T = void> T OnGetAssetIDs(uintptr_t assetIDs) {
		return ((T (*)(Wingsuit*, uintptr_t))(Il2CppBase() + 0x35B52FC))(this, assetIDs);
	}
	template <typename T = void> T OnGameObjectCreate(uintptr_t go) {
		return ((T (*)(Wingsuit*, uintptr_t))(Il2CppBase() + 0x35B5474))(this, go);
	}
	template <typename T = bool> T ShouldUpdateAnimator() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B5FDC))(this);
	}
	template <typename T = void> T OnBindPlayer() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B60F0))(this);
	}
	template <typename T = void> T OnUnbind(bool forceDestory) {
		return ((T (*)(Wingsuit*, bool))(Il2CppBase() + 0x35B6DF4))(this, forceDestory);
	}
	template <typename T = void> T RecoverBones() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B7224))(this);
	}
	template <typename T = bool> T CheckInBones(uintptr_t bone, Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(Wingsuit*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35B7984))(this, bone, bones);
	}
	template <typename T = void> T RedirectionBones() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B6A08))(this);
	}
	template <typename T = uintptr_t> T GetParent() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B7B14))(this);
	}
	template <typename T = void> T ShowTrailEffect(bool show) {
		return ((T (*)(Wingsuit*, bool))(Il2CppBase() + 0x35B5E7C))(this, show);
	}
	template <typename T = void> T SetTrailEffectAlpha(float lerpRate) {
		return ((T (*)(Wingsuit*, float))(Il2CppBase() + 0x35B7C84))(this, lerpRate);
	}
	template <typename T = void> T ClearTrailEffect() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x359EC64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshNetAssetID() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B82BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetOwner(uintptr_t P0) {
		return ((T (*)(Wingsuit*, uintptr_t))(Il2CppBase() + 0x35B82C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PreloadRes() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B82C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGetAssetIDs(uintptr_t P0) {
		return ((T (*)(Wingsuit*, uintptr_t))(Il2CppBase() + 0x35B82C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameObjectCreate(uintptr_t P0) {
		return ((T (*)(Wingsuit*, uintptr_t))(Il2CppBase() + 0x35B82CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBindPlayer() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B82D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUnbind(bool P0) {
		return ((T (*)(Wingsuit*, bool))(Il2CppBase() + 0x35B82D4))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetParent() {
		return ((T (*)(Wingsuit*))(Il2CppBase() + 0x35B82D8))(this);
	}

};

}
