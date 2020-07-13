#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRNeedItemConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRNeedItemConfConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AttachWeaponID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& AttachWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ForAR() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& ForSniper() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& ForLMG() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = bool> T& ForSMG() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ForShotgun() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& ForPistol() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = int32_t> T& GroupID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Represent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Factor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Durability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Weight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponCanEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAdaptWeaponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachDependOnWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T CheckWeaponCanEquip(int32_t WeaponId) {
		return ((T (*)(BRNeedItemConfConfig*, int32_t))(Il2CppBase() + 0x2D50894))(this, WeaponId);
	}
	template <typename T = bool> T IsAdaptWeaponType(uintptr_t weaponType) {
		return ((T (*)(BRNeedItemConfConfig*, uintptr_t))(Il2CppBase() + 0x2D5099C))(this, weaponType);
	}
	template <typename T = bool> T IsAttachDependOnWeapon(int32_t weaponId) {
		return ((T (*)(BRNeedItemConfConfig*, int32_t))(Il2CppBase() + 0x2D50ADC))(this, weaponId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50BE4))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50C84))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRNeedItemConfConfig*, int32_t))(Il2CppBase() + 0x2D50C8C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50C94))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRNeedItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D50C9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50CA4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AttachWeaponID() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50BDC))(this);
	}
	template <typename T = void> T set_AttachWeaponID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRNeedItemConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D50CB4))(this, value);
	}
	template <typename T = bool> T get_AttachWeapon() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50CBC))(this);
	}
	template <typename T = void> T set_AttachWeapon(bool value) {
		return ((T (*)(BRNeedItemConfConfig*, bool))(Il2CppBase() + 0x2D50CC4))(this, value);
	}
	template <typename T = bool> T get_ForAR() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50AAC))(this);
	}
	template <typename T = void> T set_ForAR(bool value) {
		return ((T (*)(BRNeedItemConfConfig*, bool))(Il2CppBase() + 0x2D50CCC))(this, value);
	}
	template <typename T = bool> T get_ForSniper() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50AB4))(this);
	}
	template <typename T = void> T set_ForSniper(bool value) {
		return ((T (*)(BRNeedItemConfConfig*, bool))(Il2CppBase() + 0x2D50CD4))(this, value);
	}
	template <typename T = bool> T get_ForLMG() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50ABC))(this);
	}
	template <typename T = void> T set_ForLMG(bool value) {
		return ((T (*)(BRNeedItemConfConfig*, bool))(Il2CppBase() + 0x2D50CDC))(this, value);
	}
	template <typename T = bool> T get_ForSMG() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50AC4))(this);
	}
	template <typename T = void> T set_ForSMG(bool value) {
		return ((T (*)(BRNeedItemConfConfig*, bool))(Il2CppBase() + 0x2D50CE4))(this, value);
	}
	template <typename T = bool> T get_ForShotgun() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50ACC))(this);
	}
	template <typename T = void> T set_ForShotgun(bool value) {
		return ((T (*)(BRNeedItemConfConfig*, bool))(Il2CppBase() + 0x2D50CEC))(this, value);
	}
	template <typename T = bool> T get_ForPistol() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50AD4))(this);
	}
	template <typename T = void> T set_ForPistol(bool value) {
		return ((T (*)(BRNeedItemConfConfig*, bool))(Il2CppBase() + 0x2D50CF4))(this, value);
	}
	template <typename T = int32_t> T get_GroupID() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50CFC))(this);
	}
	template <typename T = void> T set_GroupID(int32_t value) {
		return ((T (*)(BRNeedItemConfConfig*, int32_t))(Il2CppBase() + 0x2D50D04))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50D0C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(BRNeedItemConfConfig*, int32_t))(Il2CppBase() + 0x2D50D14))(this, value);
	}
	template <typename T = int32_t> T get_Represent() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50D1C))(this);
	}
	template <typename T = void> T set_Represent(int32_t value) {
		return ((T (*)(BRNeedItemConfConfig*, int32_t))(Il2CppBase() + 0x2D50D24))(this, value);
	}
	template <typename T = float> T get_Factor() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50D2C))(this);
	}
	template <typename T = void> T set_Factor(float value) {
		return ((T (*)(BRNeedItemConfConfig*, float))(Il2CppBase() + 0x2D50D34))(this, value);
	}
	template <typename T = int32_t> T get_Durability() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50D3C))(this);
	}
	template <typename T = void> T set_Durability(int32_t value) {
		return ((T (*)(BRNeedItemConfConfig*, int32_t))(Il2CppBase() + 0x2D50D44))(this, value);
	}
	template <typename T = float> T get_Weight() {
		return ((T (*)(BRNeedItemConfConfig*))(Il2CppBase() + 0x2D50D4C))(this);
	}
	template <typename T = void> T set_Weight(float value) {
		return ((T (*)(BRNeedItemConfConfig*, float))(Il2CppBase() + 0x2D50D54))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRNeedItemConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D50D5C))(this, bytes, position);
	}

};

}
