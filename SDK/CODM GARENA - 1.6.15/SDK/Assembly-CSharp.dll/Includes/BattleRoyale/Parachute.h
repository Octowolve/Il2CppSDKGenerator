#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class Parachute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "Parachute"));
	}

	template <typename T = uintptr_t> T& m_PlayerControllerWhenUsingParachute() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_OriginalPlayerAnimatorCullingMode() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameObjectCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldUpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T RefreshNetAssetID() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5A4D4))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(Parachute*, uintptr_t))(Il2CppBase() + 0x3D5A6EC))(this, owner);
	}
	template <typename T = void> T OnGetAssetIDs(uintptr_t assetIDs) {
		return ((T (*)(Parachute*, uintptr_t))(Il2CppBase() + 0x3D5A7C0))(this, assetIDs);
	}
	template <typename T = void> T PreloadRes() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5A8A4))(this);
	}
	template <typename T = void> T OnGameObjectCreate(uintptr_t go) {
		return ((T (*)(Parachute*, uintptr_t))(Il2CppBase() + 0x3D5A960))(this, go);
	}
	template <typename T = bool> T ShouldUpdateAnimator() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5ABB0))(this);
	}
	template <typename T = void> T OnBindPlayer() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5AC94))(this);
	}
	template <typename T = void> T OnUnbind(bool forceDestory) {
		return ((T (*)(Parachute*, bool))(Il2CppBase() + 0x3D5B3B0))(this, forceDestory);
	}
	template <typename T = uintptr_t> T GetParent() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5B814))(this);
	}
	template <typename T = void> T UpdateSkydivingAnim(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(Parachute*, Il2CppVector2, float))(Il2CppBase() + 0x3D5B908))(this, movementInput, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshNetAssetID() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5BAE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetOwner(uintptr_t P0) {
		return ((T (*)(Parachute*, uintptr_t))(Il2CppBase() + 0x3D5BAEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnGetAssetIDs(uintptr_t P0) {
		return ((T (*)(Parachute*, uintptr_t))(Il2CppBase() + 0x3D5BAF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PreloadRes() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5BAFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameObjectCreate(uintptr_t P0) {
		return ((T (*)(Parachute*, uintptr_t))(Il2CppBase() + 0x3D5BB04))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBindPlayer() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5BB0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnUnbind(bool P0) {
		return ((T (*)(Parachute*, bool))(Il2CppBase() + 0x3D5BB14))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetParent() {
		return ((T (*)(Parachute*))(Il2CppBase() + 0x3D5BB1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSkydivingAnim(Il2CppVector2 P0, float P1) {
		return ((T (*)(Parachute*, Il2CppVector2, float))(Il2CppBase() + 0x3D5BB24))(this, P0, P1);
	}

};

}
