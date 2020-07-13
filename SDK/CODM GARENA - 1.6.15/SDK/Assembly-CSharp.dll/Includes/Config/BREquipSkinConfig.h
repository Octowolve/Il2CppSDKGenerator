#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BREquipSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BREquipSkinConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& WeaponID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& BRWeaponID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Describe() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& EquipmentType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SkinType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& BrSkinWeaponID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& CamoID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDSight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDSto() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDIro() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDRai() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDGrip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDMuzzle() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDMag() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDMainWRoot() {
		return *(T*)((uintptr_t)this + 0x5C);
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
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BC54))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BCF4))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(BREquipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D4BCFC))(this, value);
	}
	template <typename T = uint32_t> T get_WeaponID() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD04))(this);
	}
	template <typename T = void> T set_WeaponID(uint32_t value) {
		return ((T (*)(BREquipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D4BD0C))(this, value);
	}
	template <typename T = uint32_t> T get_BRWeaponID() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD14))(this);
	}
	template <typename T = void> T set_BRWeaponID(uint32_t value) {
		return ((T (*)(BREquipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D4BD1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD24))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D4BD2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD34))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Describe() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD44))(this);
	}
	template <typename T = void> T set_LOCID_Describe(Il2CppString* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D4BD4C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Describe() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD54))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD64))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(BREquipSkinConfig*, int32_t))(Il2CppBase() + 0x2D4BD6C))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD74))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(BREquipSkinConfig*, int32_t))(Il2CppBase() + 0x2D4BD7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD84))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D4BD8C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BD94))(this);
	}
	template <typename T = int32_t> T get_EquipmentType() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BDA4))(this);
	}
	template <typename T = void> T set_EquipmentType(int32_t value) {
		return ((T (*)(BREquipSkinConfig*, int32_t))(Il2CppBase() + 0x2D4BDAC))(this, value);
	}
	template <typename T = int32_t> T get_SkinType() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BDB4))(this);
	}
	template <typename T = void> T set_SkinType(int32_t value) {
		return ((T (*)(BREquipSkinConfig*, int32_t))(Il2CppBase() + 0x2D4BDBC))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BDC4))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(BREquipSkinConfig*, bool))(Il2CppBase() + 0x2D4BDCC))(this, value);
	}
	template <typename T = int32_t> T get_BrSkinWeaponID() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BDD4))(this);
	}
	template <typename T = void> T set_BrSkinWeaponID(int32_t value) {
		return ((T (*)(BREquipSkinConfig*, int32_t))(Il2CppBase() + 0x2D4BDDC))(this, value);
	}
	template <typename T = int32_t> T get_CamoID() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BDE4))(this);
	}
	template <typename T = void> T set_CamoID(int32_t value) {
		return ((T (*)(BREquipSkinConfig*, int32_t))(Il2CppBase() + 0x2D4BDEC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDSight() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BDF4))(this);
	}
	template <typename T = void> T set_SkinIDSight(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BDFC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDSto() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BE04))(this);
	}
	template <typename T = void> T set_SkinIDSto(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BE0C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDIro() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BE14))(this);
	}
	template <typename T = void> T set_SkinIDIro(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BE1C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDRai() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BE24))(this);
	}
	template <typename T = void> T set_SkinIDRai(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BE2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDGrip() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BE34))(this);
	}
	template <typename T = void> T set_SkinIDGrip(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BE3C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDMuzzle() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BE44))(this);
	}
	template <typename T = void> T set_SkinIDMuzzle(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BE4C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDMag() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BE54))(this);
	}
	template <typename T = void> T set_SkinIDMag(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BE5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDMainWRoot() {
		return ((T (*)(BREquipSkinConfig*))(Il2CppBase() + 0x2D4BE64))(this);
	}
	template <typename T = void> T set_SkinIDMainWRoot(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4BE6C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BREquipSkinConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4BE74))(this, bytes, position);
	}

};

}
