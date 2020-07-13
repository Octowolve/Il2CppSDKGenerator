#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SPVPRankingTagsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SPVPRankingTagsConfig"));
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
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB588))(this);
	}
	template <typename T = int32_t> T get_TagID() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB628))(this);
	}
	template <typename T = void> T set_TagID(int32_t value) {
		return ((T (*)(SPVPRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30EB630))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagType() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB638))(this);
	}
	template <typename T = void> T set_TagType(Il2CppString* value) {
		return ((T (*)(SPVPRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30EB640))(this, value);
	}
	template <typename T = int32_t> T get_EnumValue() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB648))(this);
	}
	template <typename T = void> T set_EnumValue(int32_t value) {
		return ((T (*)(SPVPRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30EB650))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB658))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SPVPRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30EB660))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB668))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_UIRankParam1() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB678))(this);
	}
	template <typename T = void> T set_LOCID_UIRankParam1(Il2CppString* value) {
		return ((T (*)(SPVPRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30EB680))(this, value);
	}
	template <typename T = Il2CppString*> T get_UIRankParam1() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB688))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_UIRankParam2() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB698))(this);
	}
	template <typename T = void> T set_LOCID_UIRankParam2(Il2CppString* value) {
		return ((T (*)(SPVPRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x30EB6A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_UIRankParam2() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB6A8))(this);
	}
	template <typename T = int32_t> T get_UITips() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB6B8))(this);
	}
	template <typename T = void> T set_UITips(int32_t value) {
		return ((T (*)(SPVPRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30EB6C0))(this, value);
	}
	template <typename T = int32_t> T get_ShareValue() {
		return ((T (*)(SPVPRankingTagsConfig*))(Il2CppBase() + 0x30EB6C8))(this);
	}
	template <typename T = void> T set_ShareValue(int32_t value) {
		return ((T (*)(SPVPRankingTagsConfig*, int32_t))(Il2CppBase() + 0x30EB6D0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SPVPRankingTagsConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EB6D8))(this, bytes, position);
	}

};

}
