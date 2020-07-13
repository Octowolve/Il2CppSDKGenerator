#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.CTFGame {

class SwitchRoleComponentCTFGamePlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.CTFGame", "SwitchRoleComponent_CTFGamePlayerPawn"));
	}

	template <typename T = uintptr_t> T& FlagObj() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& FlagBindSocket() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToGoldBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToSelfBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFlagAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFlagAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadFlagCompletes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load3PAvatarOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3pAvatarCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T ChangeToGoldBag(bool bTeamMate) {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*, bool))(Il2CppBase() + 0x2B2B374))(this, bTeamMate);
	}
	template <typename T = void> T ChangeToSelfBag() {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*))(Il2CppBase() + 0x2B2B488))(this);
	}
	template <typename T = int32_t> T GetFlagAssetID(bool bTeamMate) {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*, bool))(Il2CppBase() + 0x2B2D4D4))(this, bTeamMate);
	}
	template <typename T = void> T LoadFlagAsset(int32_t assetID) {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*, int32_t))(Il2CppBase() + 0x2B2D614))(this, assetID);
	}
	template <typename T = void> T OnLoadFlagCompletes(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*, int32_t, uintptr_t))(Il2CppBase() + 0x2B2D768))(this, assetID, CallBackData);
	}
	template <typename T = void> T Load3PAvatarOver() {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*))(Il2CppBase() + 0x2B2DBF4))(this);
	}
	template <typename T = void> T On3pAvatarCreate(uintptr_t mesh) {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B2DED4))(this, mesh);
	}
	template <typename T = void> T ShowFlag(bool bShow) {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*, bool))(Il2CppBase() + 0x2B2BA34))(this, bShow);
	}
	template <typename T = void> T xLuaBaseProxy_Load3PAvatarOver() {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*))(Il2CppBase() + 0x2B2E034))(this);
	}
	template <typename T = void> T xLuaBaseProxy_On3pAvatarCreate(uintptr_t P0) {
		return ((T (*)(SwitchRoleComponentCTFGamePlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B2E03C))(this, P0);
	}

};

}
