#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LethalAndTacticalConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LethalAndTacticalConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& ModelRot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Range() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Effect_Time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& DefWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& ModeCategory() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ModelRotation() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& InWonderBox() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376EF98))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, uintptr_t))(Il2CppBase() + 0x376EFA0))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376EFA8))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F0D4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376ADB8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(LethalAndTacticalConfConfig*, Il2CppString*))(Il2CppBase() + 0x376F17C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F184))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376ADC0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(LethalAndTacticalConfConfig*, Il2CppString*))(Il2CppBase() + 0x376F194))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F19C))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F174))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, uint32_t))(Il2CppBase() + 0x376F1AC))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F1B4))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F1BC))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F1C4))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F1CC))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F1D4))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F1DC))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F1E4))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F1EC))(this, value);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F1F4))(this);
	}
	template <typename T = void> T set_Range(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F1FC))(this, value);
	}
	template <typename T = float> T get_Damage() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F204))(this);
	}
	template <typename T = void> T set_Damage(float value) {
		return ((T (*)(LethalAndTacticalConfConfig*, float))(Il2CppBase() + 0x376F20C))(this, value);
	}
	template <typename T = int32_t> T get_Effect_Time() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F214))(this);
	}
	template <typename T = void> T set_Effect_Time(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F21C))(this, value);
	}
	template <typename T = bool> T get_ShowRare() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F224))(this);
	}
	template <typename T = void> T set_ShowRare(bool value) {
		return ((T (*)(LethalAndTacticalConfConfig*, bool))(Il2CppBase() + 0x376F22C))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F234))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(LethalAndTacticalConfConfig*, bool))(Il2CppBase() + 0x376F23C))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F244))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F24C))(this, value);
	}
	template <typename T = int32_t> T get_DefWeaponSkinID() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F254))(this);
	}
	template <typename T = void> T set_DefWeaponSkinID(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F25C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376ADA8))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(LethalAndTacticalConfConfig*, Il2CppString*))(Il2CppBase() + 0x376F264))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F26C))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376ADB0))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F27C))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F284))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F28C))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F294))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(LethalAndTacticalConfConfig*, Il2CppString*))(Il2CppBase() + 0x376F29C))(this, value);
	}
	template <typename T = int32_t> T get_SortWeight() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F2A4))(this);
	}
	template <typename T = void> T set_SortWeight(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F2AC))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F2B4))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(LethalAndTacticalConfConfig*, bool))(Il2CppBase() + 0x376F2BC))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F2C4))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F2CC))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F2D4))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, uint32_t))(Il2CppBase() + 0x376F2DC))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F2E4))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F2EC))(this, value);
	}
	template <typename T = int32_t> T get_ModeCategory() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F2F4))(this);
	}
	template <typename T = void> T set_ModeCategory(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F2FC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ModelRotation() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F0CC))(this);
	}
	template <typename T = void> T set_ModelRotation(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LethalAndTacticalConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x376F304))(this, value);
	}
	template <typename T = int32_t> T get_InWonderBox() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F30C))(this);
	}
	template <typename T = void> T set_InWonderBox(int32_t value) {
		return ((T (*)(LethalAndTacticalConfConfig*, int32_t))(Il2CppBase() + 0x376F314))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LethalAndTacticalConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376F31C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LethalAndTacticalConfConfig*))(Il2CppBase() + 0x376F6F8))(this);
	}

};

}
