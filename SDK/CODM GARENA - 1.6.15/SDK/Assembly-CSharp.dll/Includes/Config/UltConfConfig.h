#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class UltConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "UltConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& UltType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& FireCost() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ActiveEnergy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& IncSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& URFIncSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& PveIncSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& BRPrepareIncSpeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& PvePercentDamage() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& PveDamageEnergy() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& IsInstantConsume() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& ConsumeSpeed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& MaxUltLayer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& UseInterval() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Param() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& BuildParam() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& UnloadPrice() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& CanHolding() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& NeedPredict() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& CanUseInAir() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& CanUseInWater() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = int32_t> T& CheckUseSpaceType() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& ValidUseSpaceSize() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsRemoteControlled() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& PreUseUltTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& NotShowHud() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& TriggerEffect1P() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& TriggerEffect1PSocket() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& TriggerEffect3P() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& TriggerEffect3PSocket() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& TriggerScreenEffect() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& EffectDuration() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& TriggerSoundEvent1P() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& TriggerSoundEvent3P() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CameraCenterPosition() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasUltEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUltSkillWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUltSkillIDByWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillConfById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillConfByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F07C8))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(UltConfConfig*, uintptr_t))(Il2CppBase() + 0x30F07D0))(this, value);
	}
	template <typename T = uintptr_t> T get_UltType() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F07D8))(this);
	}
	template <typename T = void> T set_UltType(uintptr_t value) {
		return ((T (*)(UltConfConfig*, uintptr_t))(Il2CppBase() + 0x30F07E0))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F07E8))(this);
	}
	template <typename T = bool> T HasUltEffect() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F08A4))(this);
	}
	template <typename T = bool> static T IsUltSkillWeapon(int32_t weaponID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30F0980))(0, weaponID);
	}
	template <typename T = uint32_t> static T GetUltSkillIDByWeaponID(int32_t weaponID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30F0B30))(0, weaponID);
	}
	template <typename T = uintptr_t> static T GetSkillConfById(uint64_t id) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x30F0CE4))(0, id);
	}
	template <typename T = uintptr_t> static T GetSkillConfByType(uintptr_t ultType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30F0DF8))(0, ultType);
	}
	template <typename T = int32_t> T get_UAV_WeaponId() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0F88))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0FCC))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0CDC))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(UltConfConfig*, uint32_t))(Il2CppBase() + 0x30F106C))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1074))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F107C))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1084))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F108C))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F089C))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1094))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F109C))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F10A4))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F10AC))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F10B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F10BC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F10C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F10CC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F10DC))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F10E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F10EC))(this);
	}
	template <typename T = bool> T get_FireCost() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F10FC))(this);
	}
	template <typename T = void> T set_FireCost(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F1104))(this, value);
	}
	template <typename T = int32_t> T get_ActiveEnergy() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F110C))(this);
	}
	template <typename T = void> T set_ActiveEnergy(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1114))(this, value);
	}
	template <typename T = int32_t> T get_IncSpeed() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F111C))(this);
	}
	template <typename T = void> T set_IncSpeed(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1124))(this, value);
	}
	template <typename T = int32_t> T get_URFIncSpeed() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F112C))(this);
	}
	template <typename T = void> T set_URFIncSpeed(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1134))(this, value);
	}
	template <typename T = int32_t> T get_PveIncSpeed() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F113C))(this);
	}
	template <typename T = void> T set_PveIncSpeed(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1144))(this, value);
	}
	template <typename T = int32_t> T get_BRPrepareIncSpeed() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F114C))(this);
	}
	template <typename T = void> T set_BRPrepareIncSpeed(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1154))(this, value);
	}
	template <typename T = int32_t> T get_PvePercentDamage() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F115C))(this);
	}
	template <typename T = void> T set_PvePercentDamage(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1164))(this, value);
	}
	template <typename T = int32_t> T get_PveDamageEnergy() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F116C))(this);
	}
	template <typename T = void> T set_PveDamageEnergy(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1174))(this, value);
	}
	template <typename T = int32_t> T get_IsInstantConsume() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F117C))(this);
	}
	template <typename T = void> T set_IsInstantConsume(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1184))(this, value);
	}
	template <typename T = int32_t> T get_ConsumeSpeed() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F118C))(this);
	}
	template <typename T = void> T set_ConsumeSpeed(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1194))(this, value);
	}
	template <typename T = int32_t> T get_MaxUltLayer() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F119C))(this);
	}
	template <typename T = void> T set_MaxUltLayer(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F11A4))(this, value);
	}
	template <typename T = float> T get_UseInterval() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F11AC))(this);
	}
	template <typename T = void> T set_UseInterval(float value) {
		return ((T (*)(UltConfConfig*, float))(Il2CppBase() + 0x30F11B4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Param() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0FC4))(this);
	}
	template <typename T = void> T set_Param(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UltConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F11BC))(this, value);
	}
	template <typename T = int32_t> T get_BuildParam() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F11C4))(this);
	}
	template <typename T = void> T set_BuildParam(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F11CC))(this, value);
	}
	template <typename T = int32_t> T get_UnloadPrice() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F11D4))(this);
	}
	template <typename T = void> T set_UnloadPrice(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F11DC))(this, value);
	}
	template <typename T = bool> T get_ShowRare() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F11E4))(this);
	}
	template <typename T = void> T set_ShowRare(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F11EC))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F11F4))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F11FC))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1204))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F120C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1214))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F121C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1224))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0894))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1234))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F123C))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1244))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F124C))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1254))(this, value);
	}
	template <typename T = int32_t> T get_SortWeight() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F125C))(this);
	}
	template <typename T = void> T set_SortWeight(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1264))(this, value);
	}
	template <typename T = bool> T get_CanHolding() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F126C))(this);
	}
	template <typename T = void> T set_CanHolding(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F1274))(this, value);
	}
	template <typename T = int32_t> T get_NeedPredict() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F127C))(this);
	}
	template <typename T = void> T set_NeedPredict(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1284))(this, value);
	}
	template <typename T = bool> T get_CanUseInAir() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F128C))(this);
	}
	template <typename T = void> T set_CanUseInAir(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F1294))(this, value);
	}
	template <typename T = bool> T get_CanUseInWater() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F129C))(this);
	}
	template <typename T = void> T set_CanUseInWater(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F12A4))(this, value);
	}
	template <typename T = int32_t> T get_CheckUseSpaceType() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F12AC))(this);
	}
	template <typename T = void> T set_CheckUseSpaceType(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F12B4))(this, value);
	}
	template <typename T = float> T get_ValidUseSpaceSize() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F12BC))(this);
	}
	template <typename T = void> T set_ValidUseSpaceSize(float value) {
		return ((T (*)(UltConfConfig*, float))(Il2CppBase() + 0x30F12C4))(this, value);
	}
	template <typename T = bool> T get_IsRemoteControlled() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F12CC))(this);
	}
	template <typename T = void> T set_IsRemoteControlled(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F12D4))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F12DC))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F12E4))(this, value);
	}
	template <typename T = float> T get_PreUseUltTime() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F12EC))(this);
	}
	template <typename T = void> T set_PreUseUltTime(float value) {
		return ((T (*)(UltConfConfig*, float))(Il2CppBase() + 0x30F12F4))(this, value);
	}
	template <typename T = bool> T get_NotShowHud() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F12FC))(this);
	}
	template <typename T = void> T set_NotShowHud(bool value) {
		return ((T (*)(UltConfConfig*, bool))(Il2CppBase() + 0x30F1304))(this, value);
	}
	template <typename T = int32_t> T get_TriggerEffect1P() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0968))(this);
	}
	template <typename T = void> T set_TriggerEffect1P(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F130C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TriggerEffect1PSocket() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1314))(this);
	}
	template <typename T = void> T set_TriggerEffect1PSocket(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F131C))(this, value);
	}
	template <typename T = int32_t> T get_TriggerEffect3P() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0970))(this);
	}
	template <typename T = void> T set_TriggerEffect3P(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F1324))(this, value);
	}
	template <typename T = Il2CppString*> T get_TriggerEffect3PSocket() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F132C))(this);
	}
	template <typename T = void> T set_TriggerEffect3PSocket(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1334))(this, value);
	}
	template <typename T = int32_t> T get_TriggerScreenEffect() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F0978))(this);
	}
	template <typename T = void> T set_TriggerScreenEffect(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F133C))(this, value);
	}
	template <typename T = float> T get_EffectDuration() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1344))(this);
	}
	template <typename T = void> T set_EffectDuration(float value) {
		return ((T (*)(UltConfConfig*, float))(Il2CppBase() + 0x30F134C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TriggerSoundEvent1P() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1354))(this);
	}
	template <typename T = void> T set_TriggerSoundEvent1P(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F135C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TriggerSoundEvent3P() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1364))(this);
	}
	template <typename T = void> T set_TriggerSoundEvent3P(Il2CppString* value) {
		return ((T (*)(UltConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F136C))(this, value);
	}
	template <typename T = int32_t> T get_IsAutoDemolition() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1374))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F137C))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1384))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F138C))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1394))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(UltConfConfig*, uint32_t))(Il2CppBase() + 0x30F139C))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F13A4))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(UltConfConfig*, int32_t))(Il2CppBase() + 0x30F13AC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CameraCenterPosition() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F13B4))(this);
	}
	template <typename T = void> T set_CameraCenterPosition(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UltConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F13BC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(UltConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F13C4))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(UltConfConfig*))(Il2CppBase() + 0x30F1A44))(this);
	}

};

}
