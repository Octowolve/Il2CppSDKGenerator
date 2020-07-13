#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackageIndicatorItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackageIndicatorItem"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ItemBgSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ItemSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& NearestDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& FurthestDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& FurthestScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& OcclusionAlpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& RaycastInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_OwnerCarePackage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_OwnerTransform() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_WorldCamera() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_UICamera() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_LocalScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IsLocalPlayerOwner() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIsLocalPlayerOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItemSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_OwnerCarePackage() {
		return ((T (*)(CarePackageIndicatorItem*))(Il2CppBase() + 0x3C5A91C))(this);
	}
	template <typename T = void> T set_OwnerCarePackage(uintptr_t value) {
		return ((T (*)(CarePackageIndicatorItem*, uintptr_t))(Il2CppBase() + 0x3C5AA3C))(this, value);
	}
	template <typename T = void> T UpdateIsLocalPlayerOwner() {
		return ((T (*)(CarePackageIndicatorItem*))(Il2CppBase() + 0x3C5AA44))(this);
	}
	template <typename T = void> T SetItemSprite() {
		return ((T (*)(CarePackageIndicatorItem*))(Il2CppBase() + 0x3C5ADFC))(this);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(CarePackageIndicatorItem*, float))(Il2CppBase() + 0x3C5B24C))(this, alpha);
	}
	template <typename T = void> T SetScale(float scale) {
		return ((T (*)(CarePackageIndicatorItem*, float))(Il2CppBase() + 0x3C5B424))(this, scale);
	}
	template <typename T = void> T Init(uintptr_t ownerCarePackage, uintptr_t worldCamera, uintptr_t UICamera) {
		return ((T (*)(CarePackageIndicatorItem*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C58660))(this, ownerCarePackage, worldCamera, UICamera);
	}
	template <typename T = void> T RefreshItemSprite() {
		return ((T (*)(CarePackageIndicatorItem*))(Il2CppBase() + 0x3C58C30))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(CarePackageIndicatorItem*, float))(Il2CppBase() + 0x3C58CD4))(this, deltaTime);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(CarePackageIndicatorItem*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3C59F60))(this, showEffect, itemType, tipsText, fadeAction);
	}

};

}
