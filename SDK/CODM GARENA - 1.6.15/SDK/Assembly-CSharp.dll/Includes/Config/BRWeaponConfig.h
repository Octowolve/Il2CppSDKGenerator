#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRWeaponConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRWeaponConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Propertys() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AttachSlotUsability() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& EWeaponCategory() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AIPrefer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& WeaponCategory() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ClipItemId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& SquareName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& WhitePicture() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& MaxAttach() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& Optic() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& Barrel() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& Underbarrel() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = bool> T& Magazine() {
		return *(T*)((uintptr_t)this + 0x67);
	}
	template <typename T = bool> T& Body() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& Stock() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = int32_t> T& Init_skill() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& Init_Attach_lock() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& Init_optic() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& Init_barrel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Init_underbarrel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& Init_magazine() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& Init_body() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& Init_stock() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& Mobility() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& Damage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& Range() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& FireRate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WeaponSkinBox() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& IsShow() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& IsPickTipHide() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachSlotUsable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentUsable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D56FB8))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D56FC8))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57078))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Propertys() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D47AD8))(this);
	}
	template <typename T = void> T set_Propertys(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D57080))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AttachSlotUsability() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57088))(this);
	}
	template <typename T = void> T set_AttachSlotUsability(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D57090))(this, value);
	}
	template <typename T = bool> T IsAttachSlotUsable(uintptr_t attachSlot) {
		return ((T (*)(BRWeaponConfig*, uintptr_t))(Il2CppBase() + 0x2D57098))(this, attachSlot);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D571A8))(this);
	}
	template <typename T = void> T set_WeaponName(uintptr_t value) {
		return ((T (*)(BRWeaponConfig*, uintptr_t))(Il2CppBase() + 0x2D571B0))(this, value);
	}
	template <typename T = uintptr_t> T get_EWeaponCategory() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D571B8))(this);
	}
	template <typename T = void> T set_EWeaponCategory(uintptr_t value) {
		return ((T (*)(BRWeaponConfig*, uintptr_t))(Il2CppBase() + 0x2D571C0))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_CanAttachments() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D571C8))(this);
	}
	template <typename T = bool> T IsAttachmentUsable(int32_t attachmentItemId) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D5726C))(this, attachmentItemId);
	}
	template <typename T = uintptr_t> T get_EBRWeaponItemType() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57470))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57480))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57488))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577E8))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D478C8))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D578B8))(this, value);
	}
	template <typename T = int32_t> T get_AIPrefer() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D578C0))(this);
	}
	template <typename T = void> T set_AIPrefer(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D578C8))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57478))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D578D0))(this, value);
	}
	template <typename T = int32_t> T get_WeaponCategory() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577E0))(this);
	}
	template <typename T = void> T set_WeaponCategory(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D578D8))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D578E0))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D578E8))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D578F0))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D578F8))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57900))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57908))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57910))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57918))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57920))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57928))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57930))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57938))(this, value);
	}
	template <typename T = int32_t> T get_ClipItemId() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57940))(this);
	}
	template <typename T = void> T set_ClipItemId(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57948))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57950))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x2D57958))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57960))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57970))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x2D57978))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57980))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57990))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x2D57998))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D579A0))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D579B0))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x2D579B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SquareName() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D56FC0))(this);
	}
	template <typename T = void> T set_SquareName(Il2CppString* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x2D579C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_WhitePicture() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D579C8))(this);
	}
	template <typename T = void> T set_WhitePicture(Il2CppString* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x2D579D0))(this, value);
	}
	template <typename T = int32_t> T get_MaxAttach() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D579D8))(this);
	}
	template <typename T = void> T set_MaxAttach(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D579E0))(this, value);
	}
	template <typename T = bool> T get_Optic() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577B0))(this);
	}
	template <typename T = void> T set_Optic(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D579E8))(this, value);
	}
	template <typename T = bool> T get_Barrel() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577B8))(this);
	}
	template <typename T = void> T set_Barrel(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D579F0))(this, value);
	}
	template <typename T = bool> T get_Underbarrel() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577C0))(this);
	}
	template <typename T = void> T set_Underbarrel(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D579F8))(this, value);
	}
	template <typename T = bool> T get_Magazine() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577C8))(this);
	}
	template <typename T = void> T set_Magazine(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D57A00))(this, value);
	}
	template <typename T = bool> T get_Body() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577D0))(this);
	}
	template <typename T = void> T set_Body(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D57A08))(this, value);
	}
	template <typename T = bool> T get_Stock() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577D8))(this);
	}
	template <typename T = void> T set_Stock(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D57A10))(this, value);
	}
	template <typename T = int32_t> T get_Init_skill() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A18))(this);
	}
	template <typename T = void> T set_Init_skill(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A20))(this, value);
	}
	template <typename T = bool> T get_Init_Attach_lock() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A28))(this);
	}
	template <typename T = void> T set_Init_Attach_lock(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D57A30))(this, value);
	}
	template <typename T = int32_t> T get_Init_optic() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A38))(this);
	}
	template <typename T = void> T set_Init_optic(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A40))(this, value);
	}
	template <typename T = int32_t> T get_Init_barrel() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A48))(this);
	}
	template <typename T = void> T set_Init_barrel(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A50))(this, value);
	}
	template <typename T = int32_t> T get_Init_underbarrel() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A58))(this);
	}
	template <typename T = void> T set_Init_underbarrel(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A60))(this, value);
	}
	template <typename T = int32_t> T get_Init_magazine() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A68))(this);
	}
	template <typename T = void> T set_Init_magazine(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A70))(this, value);
	}
	template <typename T = int32_t> T get_Init_body() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A78))(this);
	}
	template <typename T = void> T set_Init_body(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A80))(this, value);
	}
	template <typename T = int32_t> T get_Init_stock() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57A88))(this);
	}
	template <typename T = void> T set_Init_stock(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A90))(this, value);
	}
	template <typename T = int32_t> T get_Mobility() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577A0))(this);
	}
	template <typename T = void> T set_Mobility(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57A98))(this, value);
	}
	template <typename T = int32_t> T get_Damage() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57788))(this);
	}
	template <typename T = void> T set_Damage(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57AA0))(this, value);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D577A8))(this);
	}
	template <typename T = void> T set_Range(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57AA8))(this, value);
	}
	template <typename T = int32_t> T get_FireRate() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57790))(this);
	}
	template <typename T = void> T set_FireRate(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57AB0))(this, value);
	}
	template <typename T = int32_t> T get_Accuracy() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57798))(this);
	}
	template <typename T = void> T set_Accuracy(int32_t value) {
		return ((T (*)(BRWeaponConfig*, int32_t))(Il2CppBase() + 0x2D57AB8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_WeaponSkinBox() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57AC0))(this);
	}
	template <typename T = void> T set_WeaponSkinBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRWeaponConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D57AC8))(this, value);
	}
	template <typename T = bool> T get_IsShow() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57AD0))(this);
	}
	template <typename T = void> T set_IsShow(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D57AD8))(this, value);
	}
	template <typename T = bool> T get_IsPickTipHide() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D57AE0))(this);
	}
	template <typename T = void> T set_IsPickTipHide(bool value) {
		return ((T (*)(BRWeaponConfig*, bool))(Il2CppBase() + 0x2D57AE8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRWeaponConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D57AF0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BRWeaponConfig*))(Il2CppBase() + 0x2D5804C))(this);
	}

};

}
