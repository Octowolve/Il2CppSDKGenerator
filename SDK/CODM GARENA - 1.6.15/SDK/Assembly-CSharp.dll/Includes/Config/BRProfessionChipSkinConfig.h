#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRProfessionChipSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRProfessionChipSkinConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ChipID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Note() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Describe() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& ShowInBag() {
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
	template <typename T = uint32_t> T& UIModelID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& ModelID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& CamoID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinIDAll() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& IsNotCleanCamo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& SkinName() {
		return *(T*)((uintptr_t)this + 0x54);
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
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D531D0))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53270))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D53278))(this, value);
	}
	template <typename T = uint32_t> T get_ChipID() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53280))(this);
	}
	template <typename T = void> T set_ChipID(uint32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D53288))(this, value);
	}
	template <typename T = Il2CppString*> T get_Note() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53290))(this);
	}
	template <typename T = void> T set_Note(Il2CppString* value) {
		return ((T (*)(BRProfessionChipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D53298))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D532A0))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRProfessionChipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D532A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D532B0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Describe() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D532C0))(this);
	}
	template <typename T = void> T set_LOCID_Describe(Il2CppString* value) {
		return ((T (*)(BRProfessionChipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D532C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Describe() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D532D0))(this);
	}
	template <typename T = uint32_t> T get_ColorID() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D532E0))(this);
	}
	template <typename T = void> T set_ColorID(uint32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D532E8))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D532F0))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(BRProfessionChipSkinConfig*, bool))(Il2CppBase() + 0x2D532F8))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53300))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, int32_t))(Il2CppBase() + 0x2D53308))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53310))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(BRProfessionChipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D53318))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53320))(this);
	}
	template <typename T = int32_t> T get_SkinType() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53330))(this);
	}
	template <typename T = void> T set_SkinType(int32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, int32_t))(Il2CppBase() + 0x2D53338))(this, value);
	}
	template <typename T = uint32_t> T get_UIModelID() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53340))(this);
	}
	template <typename T = void> T set_UIModelID(uint32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D53348))(this, value);
	}
	template <typename T = uint32_t> T get_ModelID() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53350))(this);
	}
	template <typename T = void> T set_ModelID(uint32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D53358))(this, value);
	}
	template <typename T = uint32_t> T get_CamoID() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53360))(this);
	}
	template <typename T = void> T set_CamoID(uint32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D53368))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinIDAll() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53370))(this);
	}
	template <typename T = void> T set_SkinIDAll(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRProfessionChipSkinConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D53378))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53380))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(BRProfessionChipSkinConfig*, bool))(Il2CppBase() + 0x2D53388))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D53390))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, uint32_t))(Il2CppBase() + 0x2D53398))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D533A0))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(BRProfessionChipSkinConfig*, int32_t))(Il2CppBase() + 0x2D533A8))(this, value);
	}
	template <typename T = bool> T get_IsNotCleanCamo() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D533B0))(this);
	}
	template <typename T = void> T set_IsNotCleanCamo(bool value) {
		return ((T (*)(BRProfessionChipSkinConfig*, bool))(Il2CppBase() + 0x2D533B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SkinName() {
		return ((T (*)(BRProfessionChipSkinConfig*))(Il2CppBase() + 0x2D533C0))(this);
	}
	template <typename T = void> T set_SkinName(Il2CppString* value) {
		return ((T (*)(BRProfessionChipSkinConfig*, Il2CppString*))(Il2CppBase() + 0x2D533C8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRProfessionChipSkinConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D533D0))(this, bytes, position);
	}

};

}
