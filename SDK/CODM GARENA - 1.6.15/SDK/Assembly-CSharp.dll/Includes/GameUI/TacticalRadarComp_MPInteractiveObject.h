#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalRadarCompMPInteractiveObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalRadarComp_MPInteractiveObject"));
	}

	template <typename T = uintptr_t> T& BuffMachineSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BuffMachineSpriteList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BuffMachines() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OffWallWeaponSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OffWallWeaponSpriteList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OffWallWeapons() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PerkMachineSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PerkMachineSpriteList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PerkMachines() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PAPMachineSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PAPMachineSpriteList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PAPMachines() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_MPVEGame() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_LocalPlayerRegionID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOnClipPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSpriteInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOrCreateSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBuffMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPerkMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickOffWallWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickPAPMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IteractiveObjectsTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*))(Il2CppBase() + 0x29AE8F0))(this);
	}
	template <typename T = bool> T ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*))(Il2CppBase() + 0x29AEAE0))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*))(Il2CppBase() + 0x29AEB80))(this);
	}
	template <typename T = uintptr_t> T CreateSpriteInstance(uintptr_t spriteTemplate, uintptr_t levelObj) {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29AEE54))(this, spriteTemplate, levelObj);
	}
	template <typename T = void> T CheckOrCreateSprite(uintptr_t spriteTemplate, uintptr_t spriteList, Il2CppList<uintptr_t>* levelObjectList, Il2CppString* name) {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1E85C10))(this, spriteTemplate, spriteList, levelObjectList, name);
	}
	template <typename T = void> T TickBuffMachine(bool bBoss) {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*, bool))(Il2CppBase() + 0x29AF0A4))(this, bBoss);
	}
	template <typename T = void> T TickPerkMachine(bool bBoss) {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*, bool))(Il2CppBase() + 0x29AF700))(this, bBoss);
	}
	template <typename T = void> T TickOffWallWeapon(bool bBoss) {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*, bool))(Il2CppBase() + 0x29AFFD4))(this, bBoss);
	}
	template <typename T = void> T TickPAPMachine(bool bBoss) {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*, bool))(Il2CppBase() + 0x29B0AF4))(this, bBoss);
	}
	template <typename T = void> T IteractiveObjectsTick() {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*))(Il2CppBase() + 0x29AEC24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*))(Il2CppBase() + 0x29B1180))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowOnClipPanel() {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*))(Il2CppBase() + 0x29B1188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompMPInteractiveObject*))(Il2CppBase() + 0x29B1190))(this);
	}

};

}
