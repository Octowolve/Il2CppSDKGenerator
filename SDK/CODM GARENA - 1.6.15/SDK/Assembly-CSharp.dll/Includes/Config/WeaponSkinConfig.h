#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponSkinConfig"));
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
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
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
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsCleanCamo() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& MaxValueDay() {
		return *(T*)((uintptr_t)this + 0x70);
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
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCD0C))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCDAC))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(WeaponSkinConfig*, uint32_t))(Il2CppBase() + 0x30FCDB4))(this, value);
	}
	template <typename T = uint32_t> T get_WeaponID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCDBC))(this);
	}
	template <typename T = void> T set_WeaponID(uint32_t value) {
		return ((T (*)(WeaponSkinConfig*, uint32_t))(Il2CppBase() + 0x30FCDC4))(this, value);
	}
	template <typename T = uint32_t> T get_BRWeaponID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCDCC))(this);
	}
	template <typename T = void> T set_BRWeaponID(uint32_t value) {
		return ((T (*)(WeaponSkinConfig*, uint32_t))(Il2CppBase() + 0x30FCDD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCDDC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppString*))(Il2CppBase() + 0x30FCDE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCDEC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Describe() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCDFC))(this);
	}
	template <typename T = void> T set_LOCID_Describe(Il2CppString* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppString*))(Il2CppBase() + 0x30FCE04))(this, value);
	}
	template <typename T = Il2CppString*> T get_Describe() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE0C))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE1C))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCE24))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE2C))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCE34))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE3C))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCE44))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE4C))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppString*))(Il2CppBase() + 0x30FCE54))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE5C))(this);
	}
	template <typename T = int32_t> T get_SkinType() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE6C))(this);
	}
	template <typename T = void> T set_SkinType(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCE74))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE7C))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(WeaponSkinConfig*, bool))(Il2CppBase() + 0x30FCE84))(this, value);
	}
	template <typename T = int32_t> T get_BrSkinWeaponID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE8C))(this);
	}
	template <typename T = void> T set_BrSkinWeaponID(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCE94))(this, value);
	}
	template <typename T = int32_t> T get_CamoID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCE9C))(this);
	}
	template <typename T = void> T set_CamoID(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCEA4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDSight() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCEAC))(this);
	}
	template <typename T = void> T set_SkinIDSight(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCEB4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDSto() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCEBC))(this);
	}
	template <typename T = void> T set_SkinIDSto(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCEC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDIro() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCECC))(this);
	}
	template <typename T = void> T set_SkinIDIro(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCED4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDRai() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCEDC))(this);
	}
	template <typename T = void> T set_SkinIDRai(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCEE4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDGrip() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCEEC))(this);
	}
	template <typename T = void> T set_SkinIDGrip(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCEF4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDMuzzle() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCEFC))(this);
	}
	template <typename T = void> T set_SkinIDMuzzle(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCF04))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDMag() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCF0C))(this);
	}
	template <typename T = void> T set_SkinIDMag(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCF14))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDMainWRoot() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCF1C))(this);
	}
	template <typename T = void> T set_SkinIDMainWRoot(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FCF24))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCF2C))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(WeaponSkinConfig*, bool))(Il2CppBase() + 0x30FCF34))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCF3C))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(WeaponSkinConfig*, uint32_t))(Il2CppBase() + 0x30FCF44))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCF4C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCF54))(this, value);
	}
	template <typename T = bool> T get_IsCleanCamo() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCF5C))(this);
	}
	template <typename T = void> T set_IsCleanCamo(bool value) {
		return ((T (*)(WeaponSkinConfig*, bool))(Il2CppBase() + 0x30FCF64))(this, value);
	}
	template <typename T = int32_t> T get_MaxValueDay() {
		return ((T (*)(WeaponSkinConfig*))(Il2CppBase() + 0x30FCF6C))(this);
	}
	template <typename T = void> T set_MaxValueDay(int32_t value) {
		return ((T (*)(WeaponSkinConfig*, int32_t))(Il2CppBase() + 0x30FCF74))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponSkinConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FCF7C))(this, bytes, position);
	}

};

}
