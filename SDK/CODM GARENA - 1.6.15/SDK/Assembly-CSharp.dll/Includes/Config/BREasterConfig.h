#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BREasterConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BREasterConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& EasterType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& UpLimit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AutoPickUpCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& IsNotInBag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& GrabSound() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& DropSound() {
		return *(T*)((uintptr_t)this + 0x50);
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
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48534))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48544))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D485F4))(this);
	}
	template <typename T = uintptr_t> T get_EBREasterItemType() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D485FC))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D4860C))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48614))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D47908))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D486E4))(this, value);
	}
	template <typename T = int32_t> T get_EasterType() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D486EC))(this);
	}
	template <typename T = void> T set_EasterType(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D486F4))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48604))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D486FC))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48704))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4870C))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48714))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BREasterConfig*, bool))(Il2CppBase() + 0x2D4871C))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48724))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4872C))(this, value);
	}
	template <typename T = int32_t> T get_UpLimit() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48734))(this);
	}
	template <typename T = void> T set_UpLimit(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4873C))(this, value);
	}
	template <typename T = int32_t> T get_AutoPickUpCount() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48744))(this);
	}
	template <typename T = void> T set_AutoPickUpCount(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4874C))(this, value);
	}
	template <typename T = int32_t> T get_IsNotInBag() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48754))(this);
	}
	template <typename T = void> T set_IsNotInBag(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4875C))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48764))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4876C))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48774))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4877C))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48784))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BREasterConfig*, int32_t))(Il2CppBase() + 0x2D4878C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D48794))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BREasterConfig*, Il2CppString*))(Il2CppBase() + 0x2D4879C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D487A4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D487B4))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BREasterConfig*, Il2CppString*))(Il2CppBase() + 0x2D487BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D487C4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D487D4))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BREasterConfig*, Il2CppString*))(Il2CppBase() + 0x2D487DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D487E4))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D4853C))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BREasterConfig*, Il2CppString*))(Il2CppBase() + 0x2D487F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_GrabSound() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D487FC))(this);
	}
	template <typename T = void> T set_GrabSound(Il2CppString* value) {
		return ((T (*)(BREasterConfig*, Il2CppString*))(Il2CppBase() + 0x2D48804))(this, value);
	}
	template <typename T = Il2CppString*> T get_DropSound() {
		return ((T (*)(BREasterConfig*))(Il2CppBase() + 0x2D4880C))(this);
	}
	template <typename T = void> T set_DropSound(Il2CppString* value) {
		return ((T (*)(BREasterConfig*, Il2CppString*))(Il2CppBase() + 0x2D48814))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BREasterConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4881C))(this, bytes, position);
	}

};

}
