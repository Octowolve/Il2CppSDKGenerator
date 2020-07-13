#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpSeasonUILabelConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpSeasonUILabelConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Season_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Label_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& High() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Pivot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Pos_x() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Pos_y() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Alignment() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Font() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Font_effect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Color_r() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Color_g() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Color_b() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& User_data() {
		return *(T*)((uintptr_t)this + 0x48);
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
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7E34))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7ED4))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7EDC))(this, value);
	}
	template <typename T = int32_t> T get_Season_id() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7EE4))(this);
	}
	template <typename T = void> T set_Season_id(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7EEC))(this, value);
	}
	template <typename T = int32_t> T get_Label_type() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7EF4))(this);
	}
	template <typename T = void> T set_Label_type(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7EFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F04))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(SpSeasonUILabelConfig*, Il2CppString*))(Il2CppBase() + 0x30E7F0C))(this, value);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F14))(this);
	}
	template <typename T = void> T set_Width(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F1C))(this, value);
	}
	template <typename T = int32_t> T get_High() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F24))(this);
	}
	template <typename T = void> T set_High(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F2C))(this, value);
	}
	template <typename T = int32_t> T get_Pivot() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F34))(this);
	}
	template <typename T = void> T set_Pivot(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F3C))(this, value);
	}
	template <typename T = int32_t> T get_Pos_x() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F44))(this);
	}
	template <typename T = void> T set_Pos_x(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F4C))(this, value);
	}
	template <typename T = int32_t> T get_Pos_y() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F54))(this);
	}
	template <typename T = void> T set_Pos_y(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F5C))(this, value);
	}
	template <typename T = int32_t> T get_Alignment() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F64))(this);
	}
	template <typename T = void> T set_Alignment(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F6C))(this, value);
	}
	template <typename T = int32_t> T get_Font() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F74))(this);
	}
	template <typename T = void> T set_Font(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F7C))(this, value);
	}
	template <typename T = int32_t> T get_Font_effect() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F84))(this);
	}
	template <typename T = void> T set_Font_effect(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F8C))(this, value);
	}
	template <typename T = int32_t> T get_Color_r() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7F94))(this);
	}
	template <typename T = void> T set_Color_r(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7F9C))(this, value);
	}
	template <typename T = int32_t> T get_Color_g() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7FA4))(this);
	}
	template <typename T = void> T set_Color_g(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7FAC))(this, value);
	}
	template <typename T = int32_t> T get_Color_b() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7FB4))(this);
	}
	template <typename T = void> T set_Color_b(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7FBC))(this, value);
	}
	template <typename T = int32_t> T get_User_data() {
		return ((T (*)(SpSeasonUILabelConfig*))(Il2CppBase() + 0x30E7FC4))(this);
	}
	template <typename T = void> T set_User_data(int32_t value) {
		return ((T (*)(SpSeasonUILabelConfig*, int32_t))(Il2CppBase() + 0x30E7FCC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpSeasonUILabelConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E7FD4))(this, bytes, position);
	}

};

}
