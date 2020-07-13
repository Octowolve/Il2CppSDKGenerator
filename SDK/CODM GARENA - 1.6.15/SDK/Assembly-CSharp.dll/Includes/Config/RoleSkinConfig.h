#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RoleSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RoleSkinConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Describe() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& ShowHatAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& ShowBagAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& ShowClothAssetID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& HatAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& BRHatAssetID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& BagAssetID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint64_t> T& BRBagAssetID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint64_t> T& ClothAssetID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint64_t> T& BRClothAssetID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& ClothType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint64_t> T& SuitAssetID() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint64_t> T& BRSuitAssetID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MaterialIDs() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& CamoID() {
		return *(T*)((uintptr_t)this + 0x98);
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
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAC14))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DACB4))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(RoleSkinConfig*, uint32_t))(Il2CppBase() + 0x30DACBC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DACC4))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(RoleSkinConfig*, Il2CppString*))(Il2CppBase() + 0x30DACCC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DACD4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Describe() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DACE4))(this);
	}
	template <typename T = void> T set_LOCID_Describe(Il2CppString* value) {
		return ((T (*)(RoleSkinConfig*, Il2CppString*))(Il2CppBase() + 0x30DACEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Describe() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DACF4))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD04))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(RoleSkinConfig*, int32_t))(Il2CppBase() + 0x30DAD0C))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD14))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(RoleSkinConfig*, int32_t))(Il2CppBase() + 0x30DAD1C))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD24))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(RoleSkinConfig*, bool))(Il2CppBase() + 0x30DAD2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD34))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(RoleSkinConfig*, Il2CppString*))(Il2CppBase() + 0x30DAD3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD44))(this);
	}
	template <typename T = uint64_t> T get_ShowHatAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD54))(this);
	}
	template <typename T = void> T set_ShowHatAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DAD5C))(this, value);
	}
	template <typename T = uint64_t> T get_ShowBagAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD6C))(this);
	}
	template <typename T = void> T set_ShowBagAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DAD74))(this, value);
	}
	template <typename T = uint64_t> T get_ShowClothAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD84))(this);
	}
	template <typename T = void> T set_ShowClothAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DAD8C))(this, value);
	}
	template <typename T = uint64_t> T get_HatAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAD9C))(this);
	}
	template <typename T = void> T set_HatAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DADA4))(this, value);
	}
	template <typename T = uint64_t> T get_BRHatAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DADB4))(this);
	}
	template <typename T = void> T set_BRHatAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DADBC))(this, value);
	}
	template <typename T = uint64_t> T get_BagAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DADCC))(this);
	}
	template <typename T = void> T set_BagAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DADD4))(this, value);
	}
	template <typename T = uint64_t> T get_BRBagAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DADE4))(this);
	}
	template <typename T = void> T set_BRBagAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DADEC))(this, value);
	}
	template <typename T = uint64_t> T get_ClothAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DADFC))(this);
	}
	template <typename T = void> T set_ClothAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DAE04))(this, value);
	}
	template <typename T = uint64_t> T get_BRClothAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE14))(this);
	}
	template <typename T = void> T set_BRClothAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DAE1C))(this, value);
	}
	template <typename T = int32_t> T get_ClothType() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE2C))(this);
	}
	template <typename T = void> T set_ClothType(int32_t value) {
		return ((T (*)(RoleSkinConfig*, int32_t))(Il2CppBase() + 0x30DAE34))(this, value);
	}
	template <typename T = uint64_t> T get_SuitAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE3C))(this);
	}
	template <typename T = void> T set_SuitAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DAE44))(this, value);
	}
	template <typename T = uint64_t> T get_BRSuitAssetID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE54))(this);
	}
	template <typename T = void> T set_BRSuitAssetID(uint64_t value) {
		return ((T (*)(RoleSkinConfig*, uint64_t))(Il2CppBase() + 0x30DAE5C))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE6C))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(RoleSkinConfig*, bool))(Il2CppBase() + 0x30DAE74))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE7C))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(RoleSkinConfig*, uint32_t))(Il2CppBase() + 0x30DAE84))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE8C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(RoleSkinConfig*, int32_t))(Il2CppBase() + 0x30DAE94))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MaterialIDs() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAE9C))(this);
	}
	template <typename T = void> T set_MaterialIDs(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RoleSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30DAEA4))(this, value);
	}
	template <typename T = int32_t> T get_CamoID() {
		return ((T (*)(RoleSkinConfig*))(Il2CppBase() + 0x30DAEAC))(this);
	}
	template <typename T = void> T set_CamoID(int32_t value) {
		return ((T (*)(RoleSkinConfig*, int32_t))(Il2CppBase() + 0x30DAEB4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RoleSkinConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DAEBC))(this, bytes, position);
	}

};

}
