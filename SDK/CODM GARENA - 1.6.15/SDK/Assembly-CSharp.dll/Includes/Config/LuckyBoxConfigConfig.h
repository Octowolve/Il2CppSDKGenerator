#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LuckyBoxConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LuckyBoxConfigConfig"));
	}

	template <typename T = int32_t> T& Box_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Box_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Box_color() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Box_sub_color() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Title_cdn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Max_lucky_value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Show_draw_bonus() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& Show_promise() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppString*> T& Promise_locid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Promise_num() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Promise_item_locid() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Box_id() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x376AE78))(this);
	}
	template <typename T = void> T set_Box_id(int32_t value) {
		return ((T (*)(LuckyBoxConfigConfig*, int32_t))(Il2CppBase() + 0x37779D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x376AEA8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(LuckyBoxConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37779E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x376AE80))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x376AEB0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(LuckyBoxConfigConfig*, Il2CppString*))(Il2CppBase() + 0x37779E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x376AE90))(this);
	}
	template <typename T = int32_t> T get_Box_type() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x37779F0))(this);
	}
	template <typename T = void> T set_Box_type(int32_t value) {
		return ((T (*)(LuckyBoxConfigConfig*, int32_t))(Il2CppBase() + 0x37779F8))(this, value);
	}
	template <typename T = int32_t> T get_Box_color() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x376AEA0))(this);
	}
	template <typename T = void> T set_Box_color(int32_t value) {
		return ((T (*)(LuckyBoxConfigConfig*, int32_t))(Il2CppBase() + 0x3777A00))(this, value);
	}
	template <typename T = int32_t> T get_Box_sub_color() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A08))(this);
	}
	template <typename T = void> T set_Box_sub_color(int32_t value) {
		return ((T (*)(LuckyBoxConfigConfig*, int32_t))(Il2CppBase() + 0x3777A10))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title_cdn() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A18))(this);
	}
	template <typename T = void> T set_Title_cdn(Il2CppString* value) {
		return ((T (*)(LuckyBoxConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3777A20))(this, value);
	}
	template <typename T = int32_t> T get_Max_lucky_value() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A28))(this);
	}
	template <typename T = void> T set_Max_lucky_value(int32_t value) {
		return ((T (*)(LuckyBoxConfigConfig*, int32_t))(Il2CppBase() + 0x3777A30))(this, value);
	}
	template <typename T = bool> T get_Show_draw_bonus() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A38))(this);
	}
	template <typename T = void> T set_Show_draw_bonus(bool value) {
		return ((T (*)(LuckyBoxConfigConfig*, bool))(Il2CppBase() + 0x3777A40))(this, value);
	}
	template <typename T = bool> T get_Show_promise() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A48))(this);
	}
	template <typename T = void> T set_Show_promise(bool value) {
		return ((T (*)(LuckyBoxConfigConfig*, bool))(Il2CppBase() + 0x3777A50))(this, value);
	}
	template <typename T = Il2CppString*> T get_Promise_locid() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A58))(this);
	}
	template <typename T = void> T set_Promise_locid(Il2CppString* value) {
		return ((T (*)(LuckyBoxConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3777A60))(this, value);
	}
	template <typename T = int32_t> T get_Promise_num() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A68))(this);
	}
	template <typename T = void> T set_Promise_num(int32_t value) {
		return ((T (*)(LuckyBoxConfigConfig*, int32_t))(Il2CppBase() + 0x3777A70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Promise_item_locid() {
		return ((T (*)(LuckyBoxConfigConfig*))(Il2CppBase() + 0x3777A78))(this);
	}
	template <typename T = void> T set_Promise_item_locid(Il2CppString* value) {
		return ((T (*)(LuckyBoxConfigConfig*, Il2CppString*))(Il2CppBase() + 0x3777A80))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LuckyBoxConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3777A88))(this, bytes, position);
	}

};

}
