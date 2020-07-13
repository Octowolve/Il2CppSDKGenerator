#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRClipConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRClipConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AutoPickUpCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LOCID_Grid() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& GrabSound() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& DropSound() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45C04))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45C14))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45CC4))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45CCC))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45CD4))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45DA4))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45DAC))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45DB4))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45DBC))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45DC4))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45DCC))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45DD4))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRClipConfig*, bool))(Il2CppBase() + 0x2D45DDC))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45DE4))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45DEC))(this, value);
	}
	template <typename T = int32_t> T get_AutoPickUpCount() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45DF4))(this);
	}
	template <typename T = void> T set_AutoPickUpCount(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45DFC))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E04))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45E0C))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E14))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45E1C))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E24))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BRClipConfig*, int32_t))(Il2CppBase() + 0x2D45E2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E34))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRClipConfig*, Il2CppString*))(Il2CppBase() + 0x2D45E3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E44))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E54))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRClipConfig*, Il2CppString*))(Il2CppBase() + 0x2D45E5C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E64))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E74))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRClipConfig*, Il2CppString*))(Il2CppBase() + 0x2D45E7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E84))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Grid() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45E94))(this);
	}
	template <typename T = void> T set_LOCID_Grid(Il2CppString* value) {
		return ((T (*)(BRClipConfig*, Il2CppString*))(Il2CppBase() + 0x2D45E9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Grid() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45EA4))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45C0C))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRClipConfig*, Il2CppString*))(Il2CppBase() + 0x2D45EB4))(this, value);
	}
	template <typename T = Il2CppString*> T get_GrabSound() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45EBC))(this);
	}
	template <typename T = void> T set_GrabSound(Il2CppString* value) {
		return ((T (*)(BRClipConfig*, Il2CppString*))(Il2CppBase() + 0x2D45EC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_DropSound() {
		return ((T (*)(BRClipConfig*))(Il2CppBase() + 0x2D45ECC))(this);
	}
	template <typename T = void> T set_DropSound(Il2CppString* value) {
		return ((T (*)(BRClipConfig*, Il2CppString*))(Il2CppBase() + 0x2D45ED4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRClipConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D45EDC))(this, bytes, position);
	}

};

}
