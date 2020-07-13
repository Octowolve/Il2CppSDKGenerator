#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRProfessionDriverConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRProfessionDriverConfig"));
	}

	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SubItemType() {
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
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D5398C))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D5399C))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53A4C))(this);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53A54))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53984))(this, value);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53A5C))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53A64))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D47900))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53B34))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53B3C))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53B44))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53B4C))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRProfessionDriverConfig*, bool))(Il2CppBase() + 0x2D53B54))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53B5C))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53B64))(this, value);
	}
	template <typename T = int32_t> T get_AutoPickUpCount() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53B6C))(this);
	}
	template <typename T = void> T set_AutoPickUpCount(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53B74))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53B7C))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53B84))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53B8C))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53B94))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53B9C))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BRProfessionDriverConfig*, int32_t))(Il2CppBase() + 0x2D53BA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53BAC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppString*))(Il2CppBase() + 0x2D53BB4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53BBC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53BCC))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppString*))(Il2CppBase() + 0x2D53BD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53BDC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53BEC))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppString*))(Il2CppBase() + 0x2D53BF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53BFC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Grid() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53C0C))(this);
	}
	template <typename T = void> T set_LOCID_Grid(Il2CppString* value) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppString*))(Il2CppBase() + 0x2D53C14))(this, value);
	}
	template <typename T = Il2CppString*> T get_Grid() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53C1C))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53994))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppString*))(Il2CppBase() + 0x2D53C2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_GrabSound() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53C34))(this);
	}
	template <typename T = void> T set_GrabSound(Il2CppString* value) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppString*))(Il2CppBase() + 0x2D53C3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_DropSound() {
		return ((T (*)(BRProfessionDriverConfig*))(Il2CppBase() + 0x2D53C44))(this);
	}
	template <typename T = void> T set_DropSound(Il2CppString* value) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppString*))(Il2CppBase() + 0x2D53C4C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRProfessionDriverConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D53C54))(this, bytes, position);
	}

};

}
