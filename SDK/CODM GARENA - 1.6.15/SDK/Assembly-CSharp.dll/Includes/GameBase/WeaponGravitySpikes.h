#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGravitySpikes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGravitySpikes"));
	}

	template <typename T = uintptr_t> T& LeftHandMesh1P() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = uintptr_t> T& LeftHandMesh3P() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThrowWeaponFireStateValue_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftHandReady1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftHandReady3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseWeaponCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUnequipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> T get_IsWeaponDirectFire() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6C2E0))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponGravitySpikes*, uintptr_t))(Il2CppBase() + 0x1C6C2E8))(this, param);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6C3B4))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6C458))(this);
	}
	template <typename T = void> T SetThrowWeaponFireStateValue_BR(bool isInFireState) {
		return ((T (*)(WeaponGravitySpikes*, bool))(Il2CppBase() + 0x1C6C4FC))(this, isInFireState);
	}
	template <typename T = void> T OnLeftHandReady1P(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponGravitySpikes*, int32_t, uintptr_t))(Il2CppBase() + 0x1C6C5B0))(this, assetID, obj);
	}
	template <typename T = void> T OnLeftHandReady3P(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponGravitySpikes*, int32_t, uintptr_t))(Il2CppBase() + 0x1C6C9A0))(this, assetID, obj);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponGravitySpikes*, float))(Il2CppBase() + 0x1C6CD90))(this, deltaTime);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponGravitySpikes*, bool))(Il2CppBase() + 0x1C6CE40))(this, isHidden);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6CEF0))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6CF88))(this);
	}
	template <typename T = void> T OpenAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D020))(this);
	}
	template <typename T = void> T PostOpenAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D1B8))(this);
	}
	template <typename T = void> T CloseAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D25C))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D4C0))(this);
	}
	template <typename T = bool> T IsUseWeaponCheckFire() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D564))(this);
	}
	template <typename T = void> T PlayUnequipAnim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D604))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponGravitySpikes*, uintptr_t))(Il2CppBase() + 0x1C6D890))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D898))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetThrowWeaponFireStateValue_BR(bool P0) {
		return ((T (*)(WeaponGravitySpikes*, bool))(Il2CppBase() + 0x1C6D89C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGravitySpikes*, float))(Il2CppBase() + 0x1C6D8A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponGravitySpikes*, bool))(Il2CppBase() + 0x1C6D8A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OpenAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostOpenAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseAim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8BC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseWeaponCheckFire() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayUnequipAnim() {
		return ((T (*)(WeaponGravitySpikes*))(Il2CppBase() + 0x1C6D8C4))(this);
	}

};

}
