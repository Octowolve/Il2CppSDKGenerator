#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class AttachmentConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "AttachmentConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Propertys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& WeaponCanUseSet() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& WeaponCantUseSet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& EAttachmentType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& AttachmentType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& PreConditionID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WeaponCanUseBox() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WeaponCantUseBox() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SlotCost() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Mobility() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Damage() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Range() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& FireRate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& ForAR() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& ForSniper() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& ForLMG() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = bool> T& ForSMG() {
		return *(T*)((uintptr_t)this + 0x67);
	}
	template <typename T = bool> T& ForShotgun() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& ForPistol() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& ForLaunch() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = bool> T& ForMelee() {
		return *(T*)((uintptr_t)this + 0x6B);
	}
	template <typename T = int32_t> T& UnloadPrice() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& InherentExp() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& LevelUpKey() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& PveBasicAttrType1() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& PveBasicAttrValue1() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& PveBasicAttrType2() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& PveBasicAttrValue2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& DisableForAI() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAdaptWeaponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D406EC))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(AttachmentConfConfig*, uintptr_t))(Il2CppBase() + 0x2D406F4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Propertys() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D406FC))(this);
	}
	template <typename T = void> T set_Propertys(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AttachmentConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D40704))(this, value);
	}
	template <typename T = void*> T get_WeaponCanUseSet() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D4070C))(this);
	}
	template <typename T = void> T set_WeaponCanUseSet(void* value) {
		return ((T (*)(AttachmentConfConfig*, void*))(Il2CppBase() + 0x2D40714))(this, value);
	}
	template <typename T = void*> T get_WeaponCantUseSet() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D4071C))(this);
	}
	template <typename T = void> T set_WeaponCantUseSet(void* value) {
		return ((T (*)(AttachmentConfConfig*, void*))(Il2CppBase() + 0x2D40724))(this, value);
	}
	template <typename T = uintptr_t> T get_EAttachmentType() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D4072C))(this);
	}
	template <typename T = void> T set_EAttachmentType(uintptr_t value) {
		return ((T (*)(AttachmentConfConfig*, uintptr_t))(Il2CppBase() + 0x2D40734))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D4073C))(this);
	}
	template <typename T = bool> T IsAdaptWeaponType(uintptr_t weaponConf) {
		return ((T (*)(AttachmentConfConfig*, uintptr_t))(Il2CppBase() + 0x2D40AF8))(this, weaponConf);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D6C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E14))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(AttachmentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D40E1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E24))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E34))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(AttachmentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D40E3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E44))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E0C))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(AttachmentConfConfig*, uint32_t))(Il2CppBase() + 0x2D40E54))(this, value);
	}
	template <typename T = int32_t> T get_AttachmentType() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AB8))(this);
	}
	template <typename T = void> T set_AttachmentType(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40E5C))(this, value);
	}
	template <typename T = uint32_t> T get_PreConditionID() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E64))(this);
	}
	template <typename T = void> T set_PreConditionID(uint32_t value) {
		return ((T (*)(AttachmentConfConfig*, uint32_t))(Il2CppBase() + 0x2D40E6C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_WeaponCanUseBox() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AE8))(this);
	}
	template <typename T = void> T set_WeaponCanUseBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AttachmentConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D40E74))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_WeaponCantUseBox() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AF0))(this);
	}
	template <typename T = void> T set_WeaponCantUseBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AttachmentConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D40E7C))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E84))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40E8C))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40E94))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40E9C))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40EA4))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40EAC))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40EB4))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40EBC))(this, value);
	}
	template <typename T = int32_t> T get_SlotCost() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40EC4))(this);
	}
	template <typename T = void> T set_SlotCost(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40ECC))(this, value);
	}
	template <typename T = int32_t> T get_Mobility() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AD8))(this);
	}
	template <typename T = void> T set_Mobility(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40ED4))(this, value);
	}
	template <typename T = int32_t> T get_Damage() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AC0))(this);
	}
	template <typename T = void> T set_Damage(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40EDC))(this, value);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AE0))(this);
	}
	template <typename T = void> T set_Range(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40EE4))(this, value);
	}
	template <typename T = int32_t> T get_FireRate() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AC8))(this);
	}
	template <typename T = void> T set_FireRate(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40EEC))(this, value);
	}
	template <typename T = int32_t> T get_Accuracy() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AD0))(this);
	}
	template <typename T = void> T set_Accuracy(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40EF4))(this, value);
	}
	template <typename T = bool> T get_ForAR() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D2C))(this);
	}
	template <typename T = void> T set_ForAR(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40EFC))(this, value);
	}
	template <typename T = bool> T get_ForSniper() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D34))(this);
	}
	template <typename T = void> T set_ForSniper(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F04))(this, value);
	}
	template <typename T = bool> T get_ForLMG() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D3C))(this);
	}
	template <typename T = void> T set_ForLMG(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F0C))(this, value);
	}
	template <typename T = bool> T get_ForSMG() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D44))(this);
	}
	template <typename T = void> T set_ForSMG(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F14))(this, value);
	}
	template <typename T = bool> T get_ForShotgun() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D4C))(this);
	}
	template <typename T = void> T set_ForShotgun(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F1C))(this, value);
	}
	template <typename T = bool> T get_ForPistol() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D54))(this);
	}
	template <typename T = void> T set_ForPistol(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F24))(this, value);
	}
	template <typename T = bool> T get_ForLaunch() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D5C))(this);
	}
	template <typename T = void> T set_ForLaunch(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F2C))(this, value);
	}
	template <typename T = bool> T get_ForMelee() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40D64))(this);
	}
	template <typename T = void> T set_ForMelee(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F34))(this, value);
	}
	template <typename T = int32_t> T get_UnloadPrice() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40F3C))(this);
	}
	template <typename T = void> T set_UnloadPrice(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40F44))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40F4C))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(AttachmentConfConfig*, uint32_t))(Il2CppBase() + 0x2D40F54))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40F5C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40F64))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40F6C))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40F74))(this, value);
	}
	template <typename T = int32_t> T get_ShowRare() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40F7C))(this);
	}
	template <typename T = void> T set_ShowRare(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40F84))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40F8C))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D40F94))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40F9C))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40FA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40FAC))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(AttachmentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D40FB4))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40FBC))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40AB0))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40FCC))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40FD4))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40FDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40FE4))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(AttachmentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D40FEC))(this, value);
	}
	template <typename T = int32_t> T get_SortWeight() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D40FF4))(this);
	}
	template <typename T = void> T set_SortWeight(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D40FFC))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41004))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(AttachmentConfConfig*, bool))(Il2CppBase() + 0x2D4100C))(this, value);
	}
	template <typename T = int32_t> T get_MaxLevel() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41014))(this);
	}
	template <typename T = void> T set_MaxLevel(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D4101C))(this, value);
	}
	template <typename T = int32_t> T get_InherentExp() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41024))(this);
	}
	template <typename T = void> T set_InherentExp(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D4102C))(this, value);
	}
	template <typename T = int32_t> T get_LevelUpKey() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41034))(this);
	}
	template <typename T = void> T set_LevelUpKey(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D4103C))(this, value);
	}
	template <typename T = int32_t> T get_PveBasicAttrType1() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41044))(this);
	}
	template <typename T = void> T set_PveBasicAttrType1(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D4104C))(this, value);
	}
	template <typename T = int32_t> T get_PveBasicAttrValue1() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41054))(this);
	}
	template <typename T = void> T set_PveBasicAttrValue1(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D4105C))(this, value);
	}
	template <typename T = int32_t> T get_PveBasicAttrType2() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41064))(this);
	}
	template <typename T = void> T set_PveBasicAttrType2(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D4106C))(this, value);
	}
	template <typename T = int32_t> T get_PveBasicAttrValue2() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41074))(this);
	}
	template <typename T = void> T set_PveBasicAttrValue2(int32_t value) {
		return ((T (*)(AttachmentConfConfig*, int32_t))(Il2CppBase() + 0x2D4107C))(this, value);
	}
	template <typename T = uint32_t> T get_DisableForAI() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41084))(this);
	}
	template <typename T = void> T set_DisableForAI(uint32_t value) {
		return ((T (*)(AttachmentConfConfig*, uint32_t))(Il2CppBase() + 0x2D4108C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AttachmentConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D41094))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(AttachmentConfConfig*))(Il2CppBase() + 0x2D41654))(this);
	}

};

}
