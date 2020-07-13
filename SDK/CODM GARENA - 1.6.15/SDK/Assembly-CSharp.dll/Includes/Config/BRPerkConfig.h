#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRPerkConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRPerkConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& CanAIUse() {
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
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Thumbnail() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& BuffId0() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& BuffId1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& BuffId2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& BuffId3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& BuffId4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& BuffId5() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& BuffId6() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5166C))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5167C))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5172C))(this);
	}
	template <typename T = uintptr_t> T get_EBRPerkItemType() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51734))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51744))(this);
	}
	template <typename T = bool> T HasBuff(int32_t buffId) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D5174C))(this, buffId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51884))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D478F8))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51954))(this, value);
	}
	template <typename T = bool> T get_CanAIUse() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5195C))(this);
	}
	template <typename T = void> T set_CanAIUse(bool value) {
		return ((T (*)(BRPerkConfig*, bool))(Il2CppBase() + 0x2D51964))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5173C))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D5196C))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51974))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D5197C))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51984))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRPerkConfig*, bool))(Il2CppBase() + 0x2D5198C))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51994))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D5199C))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D519A4))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D519AC))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D519B4))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D519BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D519C4))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRPerkConfig*, Il2CppString*))(Il2CppBase() + 0x2D519CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D519D4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D519E4))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRPerkConfig*, Il2CppString*))(Il2CppBase() + 0x2D519EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D519F4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51A04))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRPerkConfig*, Il2CppString*))(Il2CppBase() + 0x2D51A0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51A14))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51674))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRPerkConfig*, Il2CppString*))(Il2CppBase() + 0x2D51A24))(this, value);
	}
	template <typename T = Il2CppString*> T get_Thumbnail() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51A2C))(this);
	}
	template <typename T = void> T set_Thumbnail(Il2CppString* value) {
		return ((T (*)(BRPerkConfig*, Il2CppString*))(Il2CppBase() + 0x2D51A34))(this, value);
	}
	template <typename T = int32_t> T get_BuffId0() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5185C))(this);
	}
	template <typename T = void> T set_BuffId0(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51A3C))(this, value);
	}
	template <typename T = int32_t> T get_BuffId1() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51864))(this);
	}
	template <typename T = void> T set_BuffId1(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51A44))(this, value);
	}
	template <typename T = int32_t> T get_BuffId2() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5186C))(this);
	}
	template <typename T = void> T set_BuffId2(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51A4C))(this, value);
	}
	template <typename T = int32_t> T get_BuffId3() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51874))(this);
	}
	template <typename T = void> T set_BuffId3(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51A54))(this, value);
	}
	template <typename T = int32_t> T get_BuffId4() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D5187C))(this);
	}
	template <typename T = void> T set_BuffId4(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51A5C))(this, value);
	}
	template <typename T = int32_t> T get_BuffId5() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51A64))(this);
	}
	template <typename T = void> T set_BuffId5(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51A6C))(this, value);
	}
	template <typename T = int32_t> T get_BuffId6() {
		return ((T (*)(BRPerkConfig*))(Il2CppBase() + 0x2D51A74))(this);
	}
	template <typename T = void> T set_BuffId6(int32_t value) {
		return ((T (*)(BRPerkConfig*, int32_t))(Il2CppBase() + 0x2D51A7C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRPerkConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D51A84))(this, bytes, position);
	}

};

}
