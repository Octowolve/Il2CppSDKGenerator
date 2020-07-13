#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackageIndicatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackageIndicatorHUD"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ItemDictionary() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIndicatorSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CarePackageIndicatorHUD*))(Il2CppBase() + 0x3C57E2C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CarePackageIndicatorHUD*, float))(Il2CppBase() + 0x3C57E34))(this, dt);
	}
	template <typename T = void> T Add(uintptr_t ownerCarePackage) {
		return ((T (*)(CarePackageIndicatorHUD*, uintptr_t))(Il2CppBase() + 0x3C58100))(this, ownerCarePackage);
	}
	template <typename T = void> T Remove(uint32_t actorID) {
		return ((T (*)(CarePackageIndicatorHUD*, uint32_t))(Il2CppBase() + 0x3C58770))(this, actorID);
	}
	template <typename T = void> T UpdateIndicatorSprite(uint32_t actorID) {
		return ((T (*)(CarePackageIndicatorHUD*, uint32_t))(Il2CppBase() + 0x3C58B0C))(this, actorID);
	}
	template <typename T = void> T TickItems(float deltaTime) {
		return ((T (*)(CarePackageIndicatorHUD*, float))(Il2CppBase() + 0x3C57EF4))(this, deltaTime);
	}
	template <typename T = void> T RemoveAllItems() {
		return ((T (*)(CarePackageIndicatorHUD*))(Il2CppBase() + 0x3C59910))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(CarePackageIndicatorHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3C59C1C))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(CarePackageIndicatorHUD*, uintptr_t))(Il2CppBase() + 0x3C5A43C))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CarePackageIndicatorHUD*, float))(Il2CppBase() + 0x3C5A924))(this, P0);
	}

};

}
