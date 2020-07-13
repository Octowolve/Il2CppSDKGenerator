#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameOutputsRulesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameOutputsRulesConfig"));
	}

	template <typename T = int32_t> T& Game_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Map_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Level_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Round() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Game_output_type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Add_exp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Add_gold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Add_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Box_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Fix_box_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Rate_color() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& Is_show_firstwin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Firstwin_add_exp() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Firstwin_add_gold() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Firstwin_add_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Firstwin_box_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Firstwin_fix_box_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Firstwin_rate_color() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& Words_template_name() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Star1_times() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Star2_times() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Star3_times() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& Show_name1() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& Show_num1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& Show_name2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& Show_num2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& Show_name3() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& Show_num3() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& Show_name4() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& Show_num4() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& Firstwinshow_name1() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& Firstwinshow_num1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& Firstwinshow_name2() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& Firstwinshow_num2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& Firstwinshow_name3() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& Firstwinshow_num3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& Firstwinshow_name4() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& Firstwinshow_num4() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindOutput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLevelOutput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T FindOutput(int32_t mapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4647F08))(0, mapID);
	}
	template <typename T = uintptr_t> static T FindLevelOutput(int32_t levelID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4648268))(0, levelID);
	}
	template <typename T = int32_t> T get_Game_type() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46483F8))(this);
	}
	template <typename T = void> T set_Game_type(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648400))(this, value);
	}
	template <typename T = int32_t> T get_Game_mode() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648408))(this);
	}
	template <typename T = void> T set_Game_mode(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648410))(this, value);
	}
	template <typename T = int32_t> T get_Map_id() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648418))(this);
	}
	template <typename T = void> T set_Map_id(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648420))(this, value);
	}
	template <typename T = int32_t> T get_Level_id() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648428))(this);
	}
	template <typename T = void> T set_Level_id(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648430))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648438))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x4648440))(this, value);
	}
	template <typename T = int32_t> T get_Round() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648448))(this);
	}
	template <typename T = void> T set_Round(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648450))(this, value);
	}
	template <typename T = int32_t> T get_Game_output_type() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648458))(this);
	}
	template <typename T = void> T set_Game_output_type(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648460))(this, value);
	}
	template <typename T = int32_t> T get_Add_exp() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648468))(this);
	}
	template <typename T = void> T set_Add_exp(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648470))(this, value);
	}
	template <typename T = int32_t> T get_Add_gold() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648478))(this);
	}
	template <typename T = void> T set_Add_gold(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648480))(this, value);
	}
	template <typename T = int32_t> T get_Add_apvp_gold() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648488))(this);
	}
	template <typename T = void> T set_Add_apvp_gold(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648490))(this, value);
	}
	template <typename T = int32_t> T get_Box_id() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648498))(this);
	}
	template <typename T = void> T set_Box_id(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46484A0))(this, value);
	}
	template <typename T = int32_t> T get_Fix_box_id() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46484A8))(this);
	}
	template <typename T = void> T set_Fix_box_id(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46484B0))(this, value);
	}
	template <typename T = int32_t> T get_Rate_color() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46484B8))(this);
	}
	template <typename T = void> T set_Rate_color(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46484C0))(this, value);
	}
	template <typename T = bool> T get_Is_show_firstwin() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46484C8))(this);
	}
	template <typename T = void> T set_Is_show_firstwin(bool value) {
		return ((T (*)(GameOutputsRulesConfig*, bool))(Il2CppBase() + 0x46484D0))(this, value);
	}
	template <typename T = int32_t> T get_Firstwin_add_exp() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46484D8))(this);
	}
	template <typename T = void> T set_Firstwin_add_exp(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46484E0))(this, value);
	}
	template <typename T = int32_t> T get_Firstwin_add_gold() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46484E8))(this);
	}
	template <typename T = void> T set_Firstwin_add_gold(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46484F0))(this, value);
	}
	template <typename T = int32_t> T get_Firstwin_add_apvp_gold() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46484F8))(this);
	}
	template <typename T = void> T set_Firstwin_add_apvp_gold(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648500))(this, value);
	}
	template <typename T = int32_t> T get_Firstwin_box_id() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648508))(this);
	}
	template <typename T = void> T set_Firstwin_box_id(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648510))(this, value);
	}
	template <typename T = int32_t> T get_Firstwin_fix_box_id() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648518))(this);
	}
	template <typename T = void> T set_Firstwin_fix_box_id(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648520))(this, value);
	}
	template <typename T = int32_t> T get_Firstwin_rate_color() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648528))(this);
	}
	template <typename T = void> T set_Firstwin_rate_color(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648530))(this, value);
	}
	template <typename T = Il2CppString*> T get_Words_template_name() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648538))(this);
	}
	template <typename T = void> T set_Words_template_name(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x4648540))(this, value);
	}
	template <typename T = int32_t> T get_Star1_times() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648548))(this);
	}
	template <typename T = void> T set_Star1_times(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648550))(this, value);
	}
	template <typename T = int32_t> T get_Star2_times() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648558))(this);
	}
	template <typename T = void> T set_Star2_times(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648560))(this, value);
	}
	template <typename T = int32_t> T get_Star3_times() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648568))(this);
	}
	template <typename T = void> T set_Star3_times(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648570))(this, value);
	}
	template <typename T = Il2CppString*> T get_Show_name1() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648578))(this);
	}
	template <typename T = void> T set_Show_name1(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x4648580))(this, value);
	}
	template <typename T = int32_t> T get_Show_num1() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648588))(this);
	}
	template <typename T = void> T set_Show_num1(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648590))(this, value);
	}
	template <typename T = Il2CppString*> T get_Show_name2() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648598))(this);
	}
	template <typename T = void> T set_Show_name2(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x46485A0))(this, value);
	}
	template <typename T = int32_t> T get_Show_num2() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46485A8))(this);
	}
	template <typename T = void> T set_Show_num2(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46485B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Show_name3() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46485B8))(this);
	}
	template <typename T = void> T set_Show_name3(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x46485C0))(this, value);
	}
	template <typename T = int32_t> T get_Show_num3() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46485C8))(this);
	}
	template <typename T = void> T set_Show_num3(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46485D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Show_name4() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46485D8))(this);
	}
	template <typename T = void> T set_Show_name4(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x46485E0))(this, value);
	}
	template <typename T = int32_t> T get_Show_num4() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46485E8))(this);
	}
	template <typename T = void> T set_Show_num4(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x46485F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Firstwinshow_name1() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x46485F8))(this);
	}
	template <typename T = void> T set_Firstwinshow_name1(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x4648600))(this, value);
	}
	template <typename T = int32_t> T get_Firstwinshow_num1() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648608))(this);
	}
	template <typename T = void> T set_Firstwinshow_num1(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648610))(this, value);
	}
	template <typename T = Il2CppString*> T get_Firstwinshow_name2() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648618))(this);
	}
	template <typename T = void> T set_Firstwinshow_name2(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x4648620))(this, value);
	}
	template <typename T = int32_t> T get_Firstwinshow_num2() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648628))(this);
	}
	template <typename T = void> T set_Firstwinshow_num2(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648630))(this, value);
	}
	template <typename T = Il2CppString*> T get_Firstwinshow_name3() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648638))(this);
	}
	template <typename T = void> T set_Firstwinshow_name3(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x4648640))(this, value);
	}
	template <typename T = int32_t> T get_Firstwinshow_num3() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648648))(this);
	}
	template <typename T = void> T set_Firstwinshow_num3(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648650))(this, value);
	}
	template <typename T = Il2CppString*> T get_Firstwinshow_name4() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648658))(this);
	}
	template <typename T = void> T set_Firstwinshow_name4(Il2CppString* value) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppString*))(Il2CppBase() + 0x4648660))(this, value);
	}
	template <typename T = int32_t> T get_Firstwinshow_num4() {
		return ((T (*)(GameOutputsRulesConfig*))(Il2CppBase() + 0x4648668))(this);
	}
	template <typename T = void> T set_Firstwinshow_num4(int32_t value) {
		return ((T (*)(GameOutputsRulesConfig*, int32_t))(Il2CppBase() + 0x4648670))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameOutputsRulesConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4648678))(this, bytes, position);
	}

};

}
