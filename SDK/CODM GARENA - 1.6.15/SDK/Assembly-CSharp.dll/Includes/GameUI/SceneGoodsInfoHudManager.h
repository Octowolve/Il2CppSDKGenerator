#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SceneGoodsInfoHudManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SceneGoodsInfoHudManager"));
	}

	template <typename T = uintptr_t> T& m_UIScene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_OffScreenGoodsInfoHudMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_InScreenGoodsInfoHudMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainsOffScreenMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainsInScreenMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffScreenGoodsInfoHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInScreenGoodsInfoHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScreenGoodsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateOffScreenGoodsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInScreenGoodsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyScreenGoodsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyOffScreenGoodsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyInScreenGoodsHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_InScreenGoodsInfoHudMap() {
		return ((T (*)(SceneGoodsInfoHudManager*))(Il2CppBase() + 0x4473920))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_OffScreenGoodsInfoHudMap() {
		return ((T (*)(SceneGoodsInfoHudManager*))(Il2CppBase() + 0x4473928))(this);
	}
	template <typename T = bool> T IsContainsOffScreenMap(uint32_t actorID) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4473930))(this, actorID);
	}
	template <typename T = bool> T IsContainsInScreenMap(uint32_t actorID) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4473A0C))(this, actorID);
	}
	template <typename T = uintptr_t> T GetOffScreenGoodsInfoHud(uint32_t actorID) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4473AE8))(this, actorID);
	}
	template <typename T = uintptr_t> T GetInScreenGoodsInfoHud(uint32_t actorID) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4473BE4))(this, actorID);
	}
	template <typename T = void> T Init(uintptr_t UIScene) {
		return ((T (*)(SceneGoodsInfoHudManager*, uintptr_t))(Il2CppBase() + 0x4473CE0))(this, UIScene);
	}
	template <typename T = void> T UnInit() {
		return ((T (*)(SceneGoodsInfoHudManager*))(Il2CppBase() + 0x4473E84))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SceneGoodsInfoHudManager*))(Il2CppBase() + 0x4473D90))(this);
	}
	template <typename T = uint32_t> T GetSeatIndex(uint32_t playerId) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4473F28))(this, playerId);
	}
	template <typename T = void> T CreateScreenGoodsHud(uint32_t uPlayerID, uint32_t uActorId, uintptr_t goodsType, uintptr_t propPawn, float fLifeTime, float fLeftLifeTime, bool bOffScreen, bool bInScreen) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t, uint32_t, uintptr_t, uintptr_t, float, float, bool, bool))(Il2CppBase() + 0x44740D4))(this, uPlayerID, uActorId, goodsType, propPawn, fLifeTime, fLeftLifeTime, bOffScreen, bInScreen);
	}
	template <typename T = void> T CreateOffScreenGoodsHud(uint32_t uPlayerID, uint32_t uActorId, uintptr_t goodsType, uintptr_t propPawn, float fLifeTime, float fLeftLifeTime) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t, uint32_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x447421C))(this, uPlayerID, uActorId, goodsType, propPawn, fLifeTime, fLeftLifeTime);
	}
	template <typename T = void> T CreateInScreenGoodsHud(uint32_t uPlayerID, uint32_t uActorId, uintptr_t goodsType, uintptr_t propPawn, float fLifeTime, float fLeftLifeTime) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t, uint32_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x447463C))(this, uPlayerID, uActorId, goodsType, propPawn, fLifeTime, fLeftLifeTime);
	}
	template <typename T = void> T DestroyScreenGoodsHud(uint32_t actorID) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4474B0C))(this, actorID);
	}
	template <typename T = void> T DestroyOffScreenGoodsHud(uint32_t actorID) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4474BC8))(this, actorID);
	}
	template <typename T = void> T DestroyInScreenGoodsHud(uint32_t actorID) {
		return ((T (*)(SceneGoodsInfoHudManager*, uint32_t))(Il2CppBase() + 0x4474D48))(this, actorID);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(SceneGoodsInfoHudManager*, float))(Il2CppBase() + 0x4474EC8))(this, fDeltaTime);
	}

};

}
