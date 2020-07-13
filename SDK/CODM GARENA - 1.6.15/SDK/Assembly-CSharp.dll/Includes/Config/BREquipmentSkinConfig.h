#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BREquipmentSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BREquipmentSkinConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& BelongtoID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Describe() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DefaultSkin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SkinType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& UIModelID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& CamoID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDMainWRoot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& EquipmentType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AssetID1P() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& AssetID3P() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& TailAssetID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49BD8))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49C78))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, uint32_t))(Il2CppBase() + 0x2D49C80))(this, value);
	}
	template <typename T = uint32_t> T get_BelongtoID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49C88))(this);
	}
	template <typename T = void> T set_BelongtoID(uint32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, uint32_t))(Il2CppBase() + 0x2D49C90))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49C98))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BREquipmentSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D49CA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49CA8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Describe() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49CB8))(this);
	}
	template <typename T = void> T set_LOCID_Describe(Il2CppString* value) {
		return ((T (*)(BREquipmentSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D49CC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Describe() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49CC8))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49CD8))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49CE0))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49CE8))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49CF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49CF8))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(BREquipmentSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D49D00))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D08))(this);
	}
	template <typename T = int32_t> T get_DefaultSkin() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D18))(this);
	}
	template <typename T = void> T set_DefaultSkin(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49D20))(this, value);
	}
	template <typename T = int32_t> T get_SkinType() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D28))(this);
	}
	template <typename T = void> T set_SkinType(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49D30))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D38))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(BREquipmentSkinConfig*, bool))(Il2CppBase() + 0x2D49D40))(this, value);
	}
	template <typename T = int32_t> T get_UIModelID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D48))(this);
	}
	template <typename T = void> T set_UIModelID(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49D50))(this, value);
	}
	template <typename T = int32_t> T get_CamoID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D58))(this);
	}
	template <typename T = void> T set_CamoID(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49D60))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDMainWRoot() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D68))(this);
	}
	template <typename T = void> T set_SkinIDMainWRoot(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipmentSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D49D70))(this, value);
	}
	template <typename T = int32_t> T get_EquipmentType() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D78))(this);
	}
	template <typename T = void> T set_EquipmentType(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49D80))(this, value);
	}
	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D88))(this);
	}
	template <typename T = void> T set_AssetID(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49D90))(this, value);
	}
	template <typename T = int32_t> T get_AssetID1P() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49D98))(this);
	}
	template <typename T = void> T set_AssetID1P(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49DA0))(this, value);
	}
	template <typename T = int32_t> T get_AssetID3P() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49DA8))(this);
	}
	template <typename T = void> T set_AssetID3P(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49DB0))(this, value);
	}
	template <typename T = int32_t> T get_TailAssetID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49DB8))(this);
	}
	template <typename T = void> T set_TailAssetID(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49DC0))(this, value);
	}
	template <typename T = int32_t> T get_IsAutoDemolition() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49DC8))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49DD0))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49DD8))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49DE0))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49DE8))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, uint32_t))(Il2CppBase() + 0x2D49DF0))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49DF8))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49E00))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(BREquipmentSkinConfig*))(Il2CppBase() + 0x2D49E08))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(BREquipmentSkinConfig*, int32_t))(Il2CppBase() + 0x2D49E10))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BREquipmentSkinConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D49E18))(this, bytes, position);
	}

};

}
