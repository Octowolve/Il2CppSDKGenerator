#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSparrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSparrow"));
	}

	template <typename T = float> T& m_SparrowCrossHairSizeBase() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = int32_t> T& m_SparrowArrowAssetID1P() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = int32_t> T& m_SparrowArrowAssetID3P() {
		return *(T*)((uintptr_t)this + 0x5F4);
	}
	template <typename T = uintptr_t> T& ArrowMesh1P() {
		return *(T*)((uintptr_t)this + 0x5F8);
	}
	template <typename T = uintptr_t> T& ArrowMesh3P() {
		return *(T*)((uintptr_t)this + 0x5FC);
	}
	template <typename T = float> T& ArrowMeshHiddenTime() {
		return *(T*)((uintptr_t)this + 0x600);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThrowWeaponFireStateValue_BR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSparrowArrowReady1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSparrowArrowReady3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSparrowFireFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedShowCancelAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsADSAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponSparrow*, uintptr_t, bool))(Il2CppBase() + 0x3A86BCC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A86D04))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponSparrow*, uintptr_t))(Il2CppBase() + 0x3A86DC0))(this, param);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A86E88))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A870C0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A86F38))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A87370))(this);
	}
	template <typename T = void> T SetThrowWeaponFireStateValue_BR(bool isInFireState) {
		return ((T (*)(WeaponSparrow*, bool))(Il2CppBase() + 0x3A87420))(this, isInFireState);
	}
	template <typename T = void> T OnSparrowArrowReady1P(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponSparrow*, int32_t, uintptr_t))(Il2CppBase() + 0x3A874D8))(this, assetID, obj);
	}
	template <typename T = void> T OnSparrowArrowReady3P(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponSparrow*, int32_t, uintptr_t))(Il2CppBase() + 0x3A87948))(this, assetID, obj);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponSparrow*, float))(Il2CppBase() + 0x3A87D0C))(this, deltaTime);
	}
	template <typename T = void> T OnSparrowFireFire() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A88098))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponSparrow*, bool))(Il2CppBase() + 0x3A8813C))(this, isHidden);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A88224))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A882D4))(this);
	}
	template <typename T = bool> T IsNeedShowCancelAim() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A88384))(this);
	}
	template <typename T = bool> T IsADSAiming() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A8842C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponSparrow*, uintptr_t, bool))(Il2CppBase() + 0x3A8853C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponSparrow*, uintptr_t))(Il2CppBase() + 0x3A88544))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A8854C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A88554))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A8855C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetThrowWeaponFireStateValue_BR(bool P0) {
		return ((T (*)(WeaponSparrow*, bool))(Il2CppBase() + 0x3A88564))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSparrow*, float))(Il2CppBase() + 0x3A8856C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponSparrow*, bool))(Il2CppBase() + 0x3A88574))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A8857C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A88584))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedShowCancelAim() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A8858C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsADSAiming() {
		return ((T (*)(WeaponSparrow*))(Il2CppBase() + 0x3A88594))(this);
	}

};

}
