#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartSra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_Sra"));
	}

	template <typename T = Il2CppString*> static T& SraPointR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_EffectAssetID() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& m_EffectPoint() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_EffectOldLayer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_LineRenderer() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& m_CacheDstPosition() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncLoadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponHasAttachSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpawnEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartSra*, uintptr_t, bool))(Il2CppBase() + 0x241C344))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241C4A0))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponPartSra*, bool))(Il2CppBase() + 0x241C55C))(this, isHidden);
	}
	template <typename T = void> T AsyncLoadAssets() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241C6C8))(this);
	}
	template <typename T = bool> T WeaponHasAttachSocket() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241C808))(this);
	}
	template <typename T = void> T SetupWeaponPart() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241CB4C))(this);
	}
	template <typename T = void> T CheckSpawnEffect() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241CF9C))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241D898))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponPartSra*, float))(Il2CppBase() + 0x241DA24))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartSra*, uintptr_t, bool))(Il2CppBase() + 0x241E17C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponPartSra*, bool))(Il2CppBase() + 0x241E180))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AsyncLoadAssets() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241E184))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_WeaponHasAttachSocket() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241E188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetupWeaponPart() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241E18C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponPartSra*))(Il2CppBase() + 0x241E190))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponPartSra*, float))(Il2CppBase() + 0x241E194))(this, P0);
	}

};

}
