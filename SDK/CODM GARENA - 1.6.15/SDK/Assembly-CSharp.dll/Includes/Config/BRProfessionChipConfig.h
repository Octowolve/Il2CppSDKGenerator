#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRProfessionChipConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRProfessionChipConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SpriteNameOut() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SpriteNameBig() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& SpriteNameSmall() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& PerkId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& UltId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& DriverId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& DriverNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& NextChipId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChipSkinBox() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& AvatarType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AvatarAssetID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& SelectShow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Shelf() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& ForbiddenMode() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& TeachVideoSpriteName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CameraCenterPosition() {
		return *(T*)((uintptr_t)this + 0x84);
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

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D529D0))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52A70))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52A78))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52A80))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52A88))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52A90))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52AA0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52AA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52AB0))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteNameOut() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52AC0))(this);
	}
	template <typename T = void> T set_SpriteNameOut(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52AC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteNameBig() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52AD0))(this);
	}
	template <typename T = void> T set_SpriteNameBig(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52AD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteNameSmall() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52AE0))(this);
	}
	template <typename T = void> T set_SpriteNameSmall(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52AE8))(this, value);
	}
	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52AF0))(this);
	}
	template <typename T = void> T set_Weight(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52AF8))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B00))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B08))(this, value);
	}
	template <typename T = int32_t> T get_PerkId() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B10))(this);
	}
	template <typename T = void> T set_PerkId(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B18))(this, value);
	}
	template <typename T = int32_t> T get_UltId() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B20))(this);
	}
	template <typename T = void> T set_UltId(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B28))(this, value);
	}
	template <typename T = int32_t> T get_DriverId() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B30))(this);
	}
	template <typename T = void> T set_DriverId(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B38))(this, value);
	}
	template <typename T = int32_t> T get_DriverNum() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B40))(this);
	}
	template <typename T = void> T set_DriverNum(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B48))(this, value);
	}
	template <typename T = int32_t> T get_NextChipId() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B50))(this);
	}
	template <typename T = void> T set_NextChipId(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B58))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChipSkinBox() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B60))(this);
	}
	template <typename T = void> T set_ChipSkinBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D52B68))(this, value);
	}
	template <typename T = int32_t> T get_AvatarType() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B70))(this);
	}
	template <typename T = void> T set_AvatarType(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B78))(this, value);
	}
	template <typename T = int32_t> T get_AvatarAssetID() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B80))(this);
	}
	template <typename T = void> T set_AvatarAssetID(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B88))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52B90))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52B98))(this, value);
	}
	template <typename T = bool> T get_SelectShow() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52BA0))(this);
	}
	template <typename T = void> T set_SelectShow(bool value) {
		return ((T (*)(BRProfessionChipConfig*, bool))(Il2CppBase() + 0x2D52BA8))(this, value);
	}
	template <typename T = int32_t> T get_Shelf() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52BB0))(this);
	}
	template <typename T = void> T set_Shelf(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52BB8))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52BC0))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(BRProfessionChipConfig*, bool))(Il2CppBase() + 0x2D52BC8))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52BD0))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52BD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52BE0))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52BE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52BF0))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C00))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52C08))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C10))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52C18))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C20))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52C28))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C30))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(BRProfessionChipConfig*, bool))(Il2CppBase() + 0x2D52C38))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C40))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(BRProfessionChipConfig*, uint32_t))(Il2CppBase() + 0x2D52C48))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C50))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(BRProfessionChipConfig*, int32_t))(Il2CppBase() + 0x2D52C58))(this, value);
	}
	template <typename T = Il2CppString*> T get_ForbiddenMode() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C60))(this);
	}
	template <typename T = void> T set_ForbiddenMode(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52C68))(this, value);
	}
	template <typename T = Il2CppString*> T get_TeachVideoSpriteName() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C70))(this);
	}
	template <typename T = void> T set_TeachVideoSpriteName(Il2CppString* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppString*))(Il2CppBase() + 0x2D52C78))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CameraCenterPosition() {
		return ((T (*)(BRProfessionChipConfig*))(Il2CppBase() + 0x2D52C80))(this);
	}
	template <typename T = void> T set_CameraCenterPosition(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D52C88))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRProfessionChipConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D52C90))(this, bytes, position);
	}

};

}
