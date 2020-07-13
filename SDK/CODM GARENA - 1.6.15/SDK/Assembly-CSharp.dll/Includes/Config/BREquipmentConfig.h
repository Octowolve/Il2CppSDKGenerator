#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BREquipmentConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BREquipmentConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& EquipmentType() {
		return *(T*)((uintptr_t)this + 0x40);
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

	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D495E8))(this);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D495F0))(this);
	}
	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D495F8))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(BREquipmentConfig*, uintptr_t))(Il2CppBase() + 0x2D49600))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49608))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D496B4))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49754))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(BREquipmentConfig*, uint32_t))(Il2CppBase() + 0x2D4975C))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49764))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D4976C))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49774))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D4977C))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49784))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D4978C))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49794))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D4979C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D497A4))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BREquipmentConfig*, Il2CppString*))(Il2CppBase() + 0x2D497AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D497B4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D497C4))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(BREquipmentConfig*, Il2CppString*))(Il2CppBase() + 0x2D497CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D497D4))(this);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D497E4))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(BREquipmentConfig*, bool))(Il2CppBase() + 0x2D497EC))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D497F4))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D497FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49804))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(BREquipmentConfig*, Il2CppString*))(Il2CppBase() + 0x2D4980C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49814))(this);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49824))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D4982C))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D496AC))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D49834))(this, value);
	}
	template <typename T = int32_t> T get_EquipmentType() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D4983C))(this);
	}
	template <typename T = void> T set_EquipmentType(int32_t value) {
		return ((T (*)(BREquipmentConfig*, int32_t))(Il2CppBase() + 0x2D49844))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BREquipmentConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4984C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BREquipmentConfig*))(Il2CppBase() + 0x2D49AE8))(this);
	}

};

}
