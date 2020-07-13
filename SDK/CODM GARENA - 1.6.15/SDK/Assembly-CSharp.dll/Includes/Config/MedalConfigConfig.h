#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MedalConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MedalConfigConfig"));
	}

	template <typename T = uintptr_t> T& EType() {
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
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Weights() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& IsShow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Cond_arg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Activecond() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Activecond_arg() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Award_xp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Sortorder() {
		return *(T*)((uintptr_t)this + 0x48);
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

	template <typename T = void> T PostInit() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377AF6C))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B018))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B0C0))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(MedalConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377B0C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B0D0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B0E0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(MedalConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377B0E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B0F0))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B0B8))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B100))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B010))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B108))(this, value);
	}
	template <typename T = Il2CppString*> T get_Condition() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B110))(this);
	}
	template <typename T = void> T set_Condition(Il2CppString* value) {
		return ((T (*)(MedalConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377B118))(this, value);
	}
	template <typename T = int32_t> T get_Weights() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B120))(this);
	}
	template <typename T = void> T set_Weights(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B128))(this, value);
	}
	template <typename T = int32_t> T get_IsShow() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B130))(this);
	}
	template <typename T = void> T set_IsShow(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B138))(this, value);
	}
	template <typename T = int32_t> T get_Cond_arg() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B140))(this);
	}
	template <typename T = void> T set_Cond_arg(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B148))(this, value);
	}
	template <typename T = Il2CppString*> T get_Activecond() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B150))(this);
	}
	template <typename T = void> T set_Activecond(Il2CppString* value) {
		return ((T (*)(MedalConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377B158))(this, value);
	}
	template <typename T = Il2CppString*> T get_Activecond_arg() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B160))(this);
	}
	template <typename T = void> T set_Activecond_arg(Il2CppString* value) {
		return ((T (*)(MedalConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377B168))(this, value);
	}
	template <typename T = int32_t> T get_Award_xp() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B170))(this);
	}
	template <typename T = void> T set_Award_xp(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B178))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B180))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(MedalConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377B188))(this, value);
	}
	template <typename T = Il2CppString*> T get_Sound() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B190))(this);
	}
	template <typename T = void> T set_Sound(Il2CppString* value) {
		return ((T (*)(MedalConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377B198))(this, value);
	}
	template <typename T = int32_t> T get_Difficulty() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B1A0))(this);
	}
	template <typename T = void> T set_Difficulty(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B1A8))(this, value);
	}
	template <typename T = int32_t> T get_Sortorder() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B1B0))(this);
	}
	template <typename T = void> T set_Sortorder(int32_t value) {
		return ((T (*)(MedalConfigConfig*, int32_t))(Il2CppBase() + 0x377B1B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MedalConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377B1C0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(MedalConfigConfig*))(Il2CppBase() + 0x377B47C))(this);
	}

};

}
