#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class AchievementConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "AchievementConfig"));
	}

	template <typename T = uintptr_t> T& EPersonalInfoType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& IsShow() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Sequence() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Condition1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Condition2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Condition3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Icon2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Icon3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Lv() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconByPeriod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConditionValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C254))(this);
	}
	template <typename T = Il2CppString*> T GetIconByPeriod(int32_t index) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C300))(this, index);
	}
	template <typename T = int32_t> T GetConditionValue(int32_t condition) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C440))(this, condition);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C52C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C5D4))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(AchievementConfig*, Il2CppString*))(Il2CppBase() + 0x2D3C5DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C5E4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C5F4))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(AchievementConfig*, Il2CppString*))(Il2CppBase() + 0x2D3C5FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C604))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C5CC))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C614))(this, value);
	}
	template <typename T = int32_t> T get_IsShow() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C61C))(this);
	}
	template <typename T = void> T set_IsShow(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C624))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C2F8))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C62C))(this, value);
	}
	template <typename T = int32_t> T get_Sequence() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C634))(this);
	}
	template <typename T = void> T set_Sequence(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C63C))(this, value);
	}
	template <typename T = int32_t> T get_Condition1() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C514))(this);
	}
	template <typename T = void> T set_Condition1(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C644))(this, value);
	}
	template <typename T = int32_t> T get_Condition2() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C51C))(this);
	}
	template <typename T = void> T set_Condition2(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C64C))(this, value);
	}
	template <typename T = int32_t> T get_Condition3() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C524))(this);
	}
	template <typename T = void> T set_Condition3(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C654))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C428))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(AchievementConfig*, Il2CppString*))(Il2CppBase() + 0x2D3C65C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon2() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C430))(this);
	}
	template <typename T = void> T set_Icon2(Il2CppString* value) {
		return ((T (*)(AchievementConfig*, Il2CppString*))(Il2CppBase() + 0x2D3C664))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon3() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C438))(this);
	}
	template <typename T = void> T set_Icon3(Il2CppString* value) {
		return ((T (*)(AchievementConfig*, Il2CppString*))(Il2CppBase() + 0x2D3C66C))(this, value);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C674))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C67C))(this, value);
	}
	template <typename T = int32_t> T get_Lv() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C684))(this);
	}
	template <typename T = void> T set_Lv(int32_t value) {
		return ((T (*)(AchievementConfig*, int32_t))(Il2CppBase() + 0x2D3C68C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AchievementConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D3C694))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(AchievementConfig*))(Il2CppBase() + 0x2D3C938))(this);
	}

};

}
