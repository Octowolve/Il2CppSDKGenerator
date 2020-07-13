#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponAttrConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponAttrConfConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Param_1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Param_2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ParamInt_1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ParamInt_2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ActiveBeginTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& ActiveEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LOC_ID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x38);
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

	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F41CC))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4310))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F43B0))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(WeaponAttrConfConfig*, int32_t))(Il2CppBase() + 0x30F43B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Type() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F43C0))(this);
	}
	template <typename T = void> T set_Type(Il2CppString* value) {
		return ((T (*)(WeaponAttrConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F43C8))(this, value);
	}
	template <typename T = float> T get_Param_1() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F42F8))(this);
	}
	template <typename T = void> T set_Param_1(float value) {
		return ((T (*)(WeaponAttrConfConfig*, float))(Il2CppBase() + 0x30F43D0))(this, value);
	}
	template <typename T = int32_t> T get_Param_2() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4300))(this);
	}
	template <typename T = void> T set_Param_2(int32_t value) {
		return ((T (*)(WeaponAttrConfConfig*, int32_t))(Il2CppBase() + 0x30F43D8))(this, value);
	}
	template <typename T = int32_t> T get_ParamInt_1() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F43E0))(this);
	}
	template <typename T = void> T set_ParamInt_1(int32_t value) {
		return ((T (*)(WeaponAttrConfConfig*, int32_t))(Il2CppBase() + 0x30F43E8))(this, value);
	}
	template <typename T = int32_t> T get_ParamInt_2() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F43F0))(this);
	}
	template <typename T = void> T set_ParamInt_2(int32_t value) {
		return ((T (*)(WeaponAttrConfConfig*, int32_t))(Il2CppBase() + 0x30F43F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveBeginTime() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4400))(this);
	}
	template <typename T = void> T set_ActiveBeginTime(Il2CppString* value) {
		return ((T (*)(WeaponAttrConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F4408))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveEndTime() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4410))(this);
	}
	template <typename T = void> T set_ActiveEndTime(Il2CppString* value) {
		return ((T (*)(WeaponAttrConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F4418))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4420))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(WeaponAttrConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F4428))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4430))(this);
	}
	template <typename T = Il2CppString*> T get_LOC_ID() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4308))(this);
	}
	template <typename T = void> T set_LOC_ID(Il2CppString* value) {
		return ((T (*)(WeaponAttrConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F4440))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4448))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(WeaponAttrConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F4450))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(WeaponAttrConfConfig*))(Il2CppBase() + 0x30F4458))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(WeaponAttrConfConfig*, int32_t))(Il2CppBase() + 0x30F4460))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponAttrConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F4468))(this, bytes, position);
	}

};

}
