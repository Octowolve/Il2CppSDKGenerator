#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PveSuffixConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PveSuffixConfConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Rand_info_1_rand_items() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Rand_info_1_item_rand_values() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Rand_info_1_is_repeat_get() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Rand_info_1_rand_counts() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Rand_info_2_rand_items() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& Rand_info_2_item_rand_values() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Rand_info_2_is_repeat_get() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Rand_info_2_rand_counts() {
		return *(T*)((uintptr_t)this + 0x30);
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
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BDC0))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BE60))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(PveSuffixConfConfig*, int32_t))(Il2CppBase() + 0x378BE68))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BE70))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(PveSuffixConfConfig*, int32_t))(Il2CppBase() + 0x378BE78))(this, value);
	}
	template <typename T = Il2CppString*> T get_Rand_info_1_rand_items() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BE80))(this);
	}
	template <typename T = void> T set_Rand_info_1_rand_items(Il2CppString* value) {
		return ((T (*)(PveSuffixConfConfig*, Il2CppString*))(Il2CppBase() + 0x378BE88))(this, value);
	}
	template <typename T = Il2CppString*> T get_Rand_info_1_item_rand_values() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BE90))(this);
	}
	template <typename T = void> T set_Rand_info_1_item_rand_values(Il2CppString* value) {
		return ((T (*)(PveSuffixConfConfig*, Il2CppString*))(Il2CppBase() + 0x378BE98))(this, value);
	}
	template <typename T = int32_t> T get_Rand_info_1_is_repeat_get() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BEA0))(this);
	}
	template <typename T = void> T set_Rand_info_1_is_repeat_get(int32_t value) {
		return ((T (*)(PveSuffixConfConfig*, int32_t))(Il2CppBase() + 0x378BEA8))(this, value);
	}
	template <typename T = int32_t> T get_Rand_info_1_rand_counts() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BEB0))(this);
	}
	template <typename T = void> T set_Rand_info_1_rand_counts(int32_t value) {
		return ((T (*)(PveSuffixConfConfig*, int32_t))(Il2CppBase() + 0x378BEB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Rand_info_2_rand_items() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BEC0))(this);
	}
	template <typename T = void> T set_Rand_info_2_rand_items(Il2CppString* value) {
		return ((T (*)(PveSuffixConfConfig*, Il2CppString*))(Il2CppBase() + 0x378BEC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Rand_info_2_item_rand_values() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BED0))(this);
	}
	template <typename T = void> T set_Rand_info_2_item_rand_values(Il2CppString* value) {
		return ((T (*)(PveSuffixConfConfig*, Il2CppString*))(Il2CppBase() + 0x378BED8))(this, value);
	}
	template <typename T = int32_t> T get_Rand_info_2_is_repeat_get() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BEE0))(this);
	}
	template <typename T = void> T set_Rand_info_2_is_repeat_get(int32_t value) {
		return ((T (*)(PveSuffixConfConfig*, int32_t))(Il2CppBase() + 0x378BEE8))(this, value);
	}
	template <typename T = int32_t> T get_Rand_info_2_rand_counts() {
		return ((T (*)(PveSuffixConfConfig*))(Il2CppBase() + 0x378BEF0))(this);
	}
	template <typename T = void> T set_Rand_info_2_rand_counts(int32_t value) {
		return ((T (*)(PveSuffixConfConfig*, int32_t))(Il2CppBase() + 0x378BEF8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PveSuffixConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378BF00))(this, bytes, position);
	}

};

}
