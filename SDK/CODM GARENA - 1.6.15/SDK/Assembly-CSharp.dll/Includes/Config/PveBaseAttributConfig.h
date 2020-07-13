#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PveBaseAttributConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PveBaseAttributConfig"));
	}

	template <typename T = uintptr_t> T& m_PropertyType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PropType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Plus() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Multi() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Div() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttributeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x3785F6C))(this);
	}
	template <typename T = bool> static T GetAttributeInfo(int32_t attrID, uintptr_t propType, uintptr_t calcType) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3786030))(0, attrID, propType, calcType);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x378A918))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x378A9B8))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(PveBaseAttributConfig*, int32_t))(Il2CppBase() + 0x378A9C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x378A9C8))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(PveBaseAttributConfig*, Il2CppString*))(Il2CppBase() + 0x378A9D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PropType() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x3786028))(this);
	}
	template <typename T = void> T set_PropType(Il2CppString* value) {
		return ((T (*)(PveBaseAttributConfig*, Il2CppString*))(Il2CppBase() + 0x378A9D8))(this, value);
	}
	template <typename T = int32_t> T get_Plus() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x3786200))(this);
	}
	template <typename T = void> T set_Plus(int32_t value) {
		return ((T (*)(PveBaseAttributConfig*, int32_t))(Il2CppBase() + 0x378A9E0))(this, value);
	}
	template <typename T = int32_t> T get_Multi() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x3786208))(this);
	}
	template <typename T = void> T set_Multi(int32_t value) {
		return ((T (*)(PveBaseAttributConfig*, int32_t))(Il2CppBase() + 0x378A9E8))(this, value);
	}
	template <typename T = int32_t> T get_Div() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x3786210))(this);
	}
	template <typename T = void> T set_Div(int32_t value) {
		return ((T (*)(PveBaseAttributConfig*, int32_t))(Il2CppBase() + 0x378A9F0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PveBaseAttributConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378A9F8))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(PveBaseAttributConfig*))(Il2CppBase() + 0x378AB80))(this);
	}

};

}
