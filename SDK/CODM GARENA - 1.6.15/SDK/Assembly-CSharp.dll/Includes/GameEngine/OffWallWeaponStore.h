#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class OffWallWeaponStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "OffWallWeaponStore"));
	}

	template <typename T = bool> T& InBossScene() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = bool> T& bVeryLow() {
		return *(T*)((uintptr_t)this + 0x7E);
	}
	template <typename T = Il2CppString*> T& GetWeaponEvent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& GetAmmoEvent() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& weaponModelObj() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& offWallWeaponModel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& weaponTargetPos() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& SkinWeaponId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& WeaponPrice() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& bWeaponLoadFinish() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& bStartWeaponMove() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& bOffWallState() {
		return *(T*)((uintptr_t)this + 0xB2);
	}
	template <typename T = Il2CppString*> T& ButtonString() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& weaponPrice() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& WeaponModelDestoryTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& WeaponModelDestoryHoldTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& bHaveWeaponModel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& AmmoString() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetWeaponSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetButtonMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetWeaponPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAmmoPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCarryWeaponById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponFullAmmoById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSameWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyInteractiveContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHaveWeaponById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDestoryWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponModelLoadFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271EA6C))(this);
	}
	template <typename T = uintptr_t> T get_audioPlayer() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271EB0C))(this);
	}
	template <typename T = void> T OnGetWeaponSync(int32_t playerId) {
		return ((T (*)(OffWallWeaponStore*, int32_t))(Il2CppBase() + 0x271EBD4))(this, playerId);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271F2FC))(this);
	}
	template <typename T = Il2CppString*> T GetButtonMessage() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271F564))(this);
	}
	template <typename T = void> T OnGetButtonMessage(int32_t MsgIndex) {
		return ((T (*)(OffWallWeaponStore*, int32_t))(Il2CppBase() + 0x271F604))(this, MsgIndex);
	}
	template <typename T = void> T OnGetWeaponPrice(int32_t price) {
		return ((T (*)(OffWallWeaponStore*, int32_t))(Il2CppBase() + 0x271F77C))(this, price);
	}
	template <typename T = int32_t> T GetAmmoPrice() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271F828))(this);
	}
	template <typename T = void> T SetHidden(bool hidden) {
		return ((T (*)(OffWallWeaponStore*, bool))(Il2CppBase() + 0x271F900))(this, hidden);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271F9A0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271FA58))(this);
	}
	template <typename T = bool> T CheckCarryWeaponById(int32_t CarryedWeaponId) {
		return ((T (*)(OffWallWeaponStore*, int32_t))(Il2CppBase() + 0x271FCC8))(this, CarryedWeaponId);
	}
	template <typename T = bool> T CheckWeaponFullAmmoById(uintptr_t CarryedWeapon) {
		return ((T (*)(OffWallWeaponStore*, uintptr_t))(Il2CppBase() + 0x271FD7C))(this, CarryedWeapon);
	}
	template <typename T = bool> T CheckThrowWeapon() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271FF68))(this);
	}
	template <typename T = bool> T NeedCheckBeforeInteractive() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x272018C))(this);
	}
	template <typename T = bool> T OnCheckBeforeInteractive() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x272022C))(this);
	}
	template <typename T = bool> T CheckSameWeapon(uintptr_t Weapon1, uintptr_t Weapon2) {
		return ((T (*)(OffWallWeaponStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2720384))(this, Weapon1, Weapon2);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(OffWallWeaponStore*, bool))(Il2CppBase() + 0x272052C))(this, show);
	}
	template <typename T = Il2CppString*> T GetWeaponName() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x27208BC))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(OffWallWeaponStore*, uintptr_t, bool))(Il2CppBase() + 0x2720AD0))(this, p, enter);
	}
	template <typename T = bool> T CheckHaveWeaponById(uintptr_t CarryedWeapon) {
		return ((T (*)(OffWallWeaponStore*, uintptr_t))(Il2CppBase() + 0x2720DD0))(this, CarryedWeapon);
	}
	template <typename T = void> T ResetUIState(bool enter) {
		return ((T (*)(OffWallWeaponStore*, bool))(Il2CppBase() + 0x2720C04))(this, enter);
	}
	template <typename T = void> T CheckDestoryWeaponModel() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x2720F24))(this);
	}
	template <typename T = void> T ShowWeaponModel() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x271EF80))(this);
	}
	template <typename T = void> T OnWeaponModelLoadFinish(int32_t weaponId) {
		return ((T (*)(OffWallWeaponStore*, int32_t))(Il2CppBase() + 0x27210AC))(this, weaponId);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x2721334))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(OffWallWeaponStore*, float))(Il2CppBase() + 0x272133C))(this, deltaTime);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x2721524))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnButtonClick() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x272152C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetButtonMessage() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x2721534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(OffWallWeaponStore*, bool))(Il2CppBase() + 0x272153C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x2721544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x272154C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCheckBeforeInteractive() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x2721554))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnCheckBeforeInteractive() {
		return ((T (*)(OffWallWeaponStore*))(Il2CppBase() + 0x272155C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyInteractiveContext(bool P0) {
		return ((T (*)(OffWallWeaponStore*, bool))(Il2CppBase() + 0x2721564))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(OffWallWeaponStore*, uintptr_t, bool))(Il2CppBase() + 0x272156C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(OffWallWeaponStore*, float))(Il2CppBase() + 0x2721574))(this, P0);
	}

};

}
