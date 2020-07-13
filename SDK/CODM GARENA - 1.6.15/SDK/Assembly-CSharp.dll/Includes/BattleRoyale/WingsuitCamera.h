#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class WingsuitCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "WingsuitCamera"));
	}

	template <typename T = uintptr_t> T& m_CameraCloudEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_CameraEffect_SpeedUp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_LandEffect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetListReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameObjectCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSpeedUpEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCloudCameraEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLandEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopLandEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(WingsuitCamera*, uintptr_t))(Il2CppBase() + 0x35B8730))(this, owner);
	}
	template <typename T = void> T OnGetAssetIDs(uintptr_t assetIDs) {
		return ((T (*)(WingsuitCamera*, uintptr_t))(Il2CppBase() + 0x35B87EC))(this, assetIDs);
	}
	template <typename T = void> T OnAssetListReady(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(WingsuitCamera*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35B88FC))(this, id, obj);
	}
	template <typename T = void> T OnGameObjectCreate() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x35B89F0))(this);
	}
	template <typename T = void> T BindPlayer() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x35B8DC8))(this);
	}
	template <typename T = void> T OnBindPlayer() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x35B9050))(this);
	}
	template <typename T = void> T ShowSpeedUpEffect(bool show) {
		return ((T (*)(WingsuitCamera*, bool))(Il2CppBase() + 0x358F0BC))(this, show);
	}
	template <typename T = void> T StopCloudCameraEffect() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x3597A54))(this);
	}
	template <typename T = void> T Unbind(bool forceDestory) {
		return ((T (*)(WingsuitCamera*, bool))(Il2CppBase() + 0x35B95C4))(this, forceDestory);
	}
	template <typename T = void> T OnUnbind(bool forceDestory) {
		return ((T (*)(WingsuitCamera*, bool))(Il2CppBase() + 0x35B9698))(this, forceDestory);
	}
	template <typename T = void> T PlayLandEffect() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x35B97E8))(this);
	}
	template <typename T = void> T StopLandEffect() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x3588150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetOwner(uintptr_t P0) {
		return ((T (*)(WingsuitCamera*, uintptr_t))(Il2CppBase() + 0x35B9A00))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnGetAssetIDs(uintptr_t P0) {
		return ((T (*)(WingsuitCamera*, uintptr_t))(Il2CppBase() + 0x35B9A04))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAssetListReady(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(WingsuitCamera*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35B9A08))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_BindPlayer() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x35B9A0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBindPlayer() {
		return ((T (*)(WingsuitCamera*))(Il2CppBase() + 0x35B9A10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Unbind(bool P0) {
		return ((T (*)(WingsuitCamera*, bool))(Il2CppBase() + 0x35B9A14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnUnbind(bool P0) {
		return ((T (*)(WingsuitCamera*, bool))(Il2CppBase() + 0x35B9A18))(this, P0);
	}

};

}
