#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRRankingTagsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRRankingTagsConfig"));
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
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54048))(this);
	}
	template <typename T = int32_t> T get_TagID() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D540E8))(this);
	}
	template <typename T = void> T set_TagID(int32_t value) {
		return ((T (*)(BRRankingTagsConfig*, int32_t))(Il2CppBase() + 0x2D540F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagType() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D540F8))(this);
	}
	template <typename T = void> T set_TagType(Il2CppString* value) {
		return ((T (*)(BRRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x2D54100))(this, value);
	}
	template <typename T = int32_t> T get_EnumValue() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54108))(this);
	}
	template <typename T = void> T set_EnumValue(int32_t value) {
		return ((T (*)(BRRankingTagsConfig*, int32_t))(Il2CppBase() + 0x2D54110))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54118))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x2D54120))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54128))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_UIRankParam1() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54138))(this);
	}
	template <typename T = void> T set_LOCID_UIRankParam1(Il2CppString* value) {
		return ((T (*)(BRRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x2D54140))(this, value);
	}
	template <typename T = Il2CppString*> T get_UIRankParam1() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54148))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_UIRankParam2() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54158))(this);
	}
	template <typename T = void> T set_LOCID_UIRankParam2(Il2CppString* value) {
		return ((T (*)(BRRankingTagsConfig*, Il2CppString*))(Il2CppBase() + 0x2D54160))(this, value);
	}
	template <typename T = Il2CppString*> T get_UIRankParam2() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54168))(this);
	}
	template <typename T = int32_t> T get_UITips() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54178))(this);
	}
	template <typename T = void> T set_UITips(int32_t value) {
		return ((T (*)(BRRankingTagsConfig*, int32_t))(Il2CppBase() + 0x2D54180))(this, value);
	}
	template <typename T = int32_t> T get_ShareValue() {
		return ((T (*)(BRRankingTagsConfig*))(Il2CppBase() + 0x2D54188))(this);
	}
	template <typename T = void> T set_ShareValue(int32_t value) {
		return ((T (*)(BRRankingTagsConfig*, int32_t))(Il2CppBase() + 0x2D54190))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRRankingTagsConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D54198))(this, bytes, position);
	}

};

}
