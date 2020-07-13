#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SuiteConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SuiteConfConfig"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& PartList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& CollectAwardList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& EquipBuffList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& DescriptionEquipBuffList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& PartsID_1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& PartsID_2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& PartsID_3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& PartsID_4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& CollectReward_1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& CollectReward_2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& EquipBuff_1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_Description_EquipBuff_1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& EquipBuff_2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& LOCID_Description_EquipBuff_2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& EquipBuff_3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& LOCID_Description_EquipBuff_3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& MailTitleLocId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& MailCtxLocId() {
		return *(T*)((uintptr_t)this + 0x58);
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
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ECF14))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2F0))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED390))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(SuiteConfConfig*, int32_t))(Il2CppBase() + 0x30ED398))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED3A0))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SuiteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30ED3A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED3B0))(this);
	}
	template <typename T = uint32_t> T get_PartsID_1() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED290))(this);
	}
	template <typename T = void> T set_PartsID_1(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED3C0))(this, value);
	}
	template <typename T = uint32_t> T get_PartsID_2() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED298))(this);
	}
	template <typename T = void> T set_PartsID_2(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED3C8))(this, value);
	}
	template <typename T = uint32_t> T get_PartsID_3() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2A0))(this);
	}
	template <typename T = void> T set_PartsID_3(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED3D0))(this, value);
	}
	template <typename T = uint32_t> T get_PartsID_4() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2A8))(this);
	}
	template <typename T = void> T set_PartsID_4(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED3D8))(this, value);
	}
	template <typename T = uint32_t> T get_CollectReward_1() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2B0))(this);
	}
	template <typename T = void> T set_CollectReward_1(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED3E0))(this, value);
	}
	template <typename T = uint32_t> T get_CollectReward_2() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2B8))(this);
	}
	template <typename T = void> T set_CollectReward_2(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED3E8))(this, value);
	}
	template <typename T = uint32_t> T get_EquipBuff_1() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2C0))(this);
	}
	template <typename T = void> T set_EquipBuff_1(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED3F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description_EquipBuff_1() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2C8))(this);
	}
	template <typename T = void> T set_LOCID_Description_EquipBuff_1(Il2CppString* value) {
		return ((T (*)(SuiteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30ED3F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description_EquipBuff_1() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED400))(this);
	}
	template <typename T = uint32_t> T get_EquipBuff_2() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2D0))(this);
	}
	template <typename T = void> T set_EquipBuff_2(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED410))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description_EquipBuff_2() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2D8))(this);
	}
	template <typename T = void> T set_LOCID_Description_EquipBuff_2(Il2CppString* value) {
		return ((T (*)(SuiteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30ED418))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description_EquipBuff_2() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED420))(this);
	}
	template <typename T = uint32_t> T get_EquipBuff_3() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2E0))(this);
	}
	template <typename T = void> T set_EquipBuff_3(uint32_t value) {
		return ((T (*)(SuiteConfConfig*, uint32_t))(Il2CppBase() + 0x30ED430))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description_EquipBuff_3() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED2E8))(this);
	}
	template <typename T = void> T set_LOCID_Description_EquipBuff_3(Il2CppString* value) {
		return ((T (*)(SuiteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30ED438))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description_EquipBuff_3() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED440))(this);
	}
	template <typename T = Il2CppString*> T get_MailTitleLocId() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED450))(this);
	}
	template <typename T = void> T set_MailTitleLocId(Il2CppString* value) {
		return ((T (*)(SuiteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30ED458))(this, value);
	}
	template <typename T = Il2CppString*> T get_MailCtxLocId() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED460))(this);
	}
	template <typename T = void> T set_MailCtxLocId(Il2CppString* value) {
		return ((T (*)(SuiteConfConfig*, Il2CppString*))(Il2CppBase() + 0x30ED468))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SuiteConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30ED470))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SuiteConfConfig*))(Il2CppBase() + 0x30ED764))(this);
	}

};

}
