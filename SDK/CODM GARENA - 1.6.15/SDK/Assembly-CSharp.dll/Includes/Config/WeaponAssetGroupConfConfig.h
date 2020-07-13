#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponAssetGroupConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponAssetGroupConfConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MeshAssetID1P() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MeshAssetID3P_L() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& FemaleMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& FemaleMeshAssetID3P_L() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MeshAssetIDUI() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& FireEffectGroupID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SpecialUnAimingEffectAssetID1P() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& WeaponPickUpAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ProjFlightAssetID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ProjFlightAssetID3P() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ProjAssetID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ProjExplosionAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ExtraDamageScreenEffectID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAssetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPartAssetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T GetWeaponAssetConfig(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30F32D0))(0, itemID);
	}
	template <typename T = uintptr_t> static T GetWeaponPartAssetConfig(int32_t itemID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30F344C))(0, itemID);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F35C8))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3668))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3670))(this, value);
	}
	template <typename T = int32_t> T get_MeshAssetID1P() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3678))(this);
	}
	template <typename T = void> T set_MeshAssetID1P(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3680))(this, value);
	}
	template <typename T = int32_t> T get_MeshAssetID3P() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3688))(this);
	}
	template <typename T = void> T set_MeshAssetID3P(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3690))(this, value);
	}
	template <typename T = int32_t> T get_MeshAssetID3P_L() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3698))(this);
	}
	template <typename T = void> T set_MeshAssetID3P_L(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F36A0))(this, value);
	}
	template <typename T = int32_t> T get_FemaleMeshAssetID3P() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F36A8))(this);
	}
	template <typename T = void> T set_FemaleMeshAssetID3P(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F36B0))(this, value);
	}
	template <typename T = int32_t> T get_FemaleMeshAssetID3P_L() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F36B8))(this);
	}
	template <typename T = void> T set_FemaleMeshAssetID3P_L(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F36C0))(this, value);
	}
	template <typename T = int32_t> T get_MeshAssetIDUI() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F36C8))(this);
	}
	template <typename T = void> T set_MeshAssetIDUI(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F36D0))(this, value);
	}
	template <typename T = int32_t> T get_FireEffectGroupID() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F36D8))(this);
	}
	template <typename T = void> T set_FireEffectGroupID(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F36E0))(this, value);
	}
	template <typename T = int32_t> T get_SpecialUnAimingEffectAssetID1P() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F36E8))(this);
	}
	template <typename T = void> T set_SpecialUnAimingEffectAssetID1P(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F36F0))(this, value);
	}
	template <typename T = int32_t> T get_WeaponPickUpAssetID() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F36F8))(this);
	}
	template <typename T = void> T set_WeaponPickUpAssetID(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3700))(this, value);
	}
	template <typename T = int32_t> T get_ProjFlightAssetID() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3708))(this);
	}
	template <typename T = void> T set_ProjFlightAssetID(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3710))(this, value);
	}
	template <typename T = int32_t> T get_ProjFlightAssetID3P() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3718))(this);
	}
	template <typename T = void> T set_ProjFlightAssetID3P(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3720))(this, value);
	}
	template <typename T = int32_t> T get_ProjAssetID() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3728))(this);
	}
	template <typename T = void> T set_ProjAssetID(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3730))(this, value);
	}
	template <typename T = int32_t> T get_ProjExplosionAssetID() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3738))(this);
	}
	template <typename T = void> T set_ProjExplosionAssetID(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3740))(this, value);
	}
	template <typename T = int32_t> T get_ExtraDamageScreenEffectID() {
		return ((T (*)(WeaponAssetGroupConfConfig*))(Il2CppBase() + 0x30F3748))(this);
	}
	template <typename T = void> T set_ExtraDamageScreenEffectID(int32_t value) {
		return ((T (*)(WeaponAssetGroupConfConfig*, int32_t))(Il2CppBase() + 0x30F3750))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponAssetGroupConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F3758))(this, bytes, position);
	}

};

}
