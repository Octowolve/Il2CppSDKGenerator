#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZMRankingTagsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZMRankingTagsConfig"));
	}

	template <typename T = int32_t> T& TagID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& TagType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& EnumValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_UIRankParam1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_UIRankParam2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& UITips() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ShareValue() {
		return *(T*)((uintptr_t)this + 0x28);
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
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDC0C))(this);
	}
	template <typename T = int32_t> T get_TagID() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDCAC))(this);
	}
	template <typename T = void> T set_TagID(int32_t value) {
		return ((T (*)(ZMRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30FDCB4))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagType() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDCBC))(this);
	}
	template <typename T = void> T set_TagType(Il2CppString* value) {
		return ((T (*)(ZMRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30FDCC4))(this, value);
	}
	template <typename T = int32_t> T get_EnumValue() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDCCC))(this);
	}
	template <typename T = void> T set_EnumValue(int32_t value) {
		return ((T (*)(ZMRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30FDCD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDCDC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZMRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30FDCE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDCEC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_UIRankParam1() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDCFC))(this);
	}
	template <typename T = void> T set_LOCID_UIRankParam1(Il2CppString* value) {
		return ((T (*)(ZMRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30FDD04))(this, value);
	}
	template <typename T = Il2CppString*> T get_UIRankParam1() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDD0C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_UIRankParam2() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDD1C))(this);
	}
	template <typename T = void> T set_LOCID_UIRankParam2(Il2CppString* value) {
		return ((T (*)(ZMRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30FDD24))(this, value);
	}
	template <typename T = Il2CppString*> T get_UIRankParam2() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDD2C))(this);
	}
	template <typename T = int32_t> T get_UITips() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDD3C))(this);
	}
	template <typename T = void> T set_UITips(int32_t value) {
		return ((T (*)(ZMRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30FDD44))(this, value);
	}
	template <typename T = int32_t> T get_ShareValue() {
		return ((T (*)(ZMRankingTagsConfig*))(Il2CppBase() + 0x30FDD4C))(this);
	}
	template <typename T = void> T set_ShareValue(int32_t value) {
		return ((T (*)(ZMRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30FDD54))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZMRankingTagsConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FDD5C))(this, bytes, position);
	}

};

}
