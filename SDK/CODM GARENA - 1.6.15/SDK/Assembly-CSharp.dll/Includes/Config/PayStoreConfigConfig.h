#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PayStoreConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PayStoreConfigConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Show_currency() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Pay_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Spec_label() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Limit_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Limit_show() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EE78))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EF18))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(PayStoreConfigConfig*, int32_t))(Il2CppBase() + 0x377EF20))(this, value);
	}
	template <typename T = Il2CppString*> T get_Show_currency() {
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EF28))(this);
	}
	template <typename T = void> T set_Show_currency(Il2CppString* value) {
		return ((T (*)(PayStoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377EF30))(this, value);
	}
	template <typename T = int32_t> T get_Pay_id() {
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EF38))(this);
	}
	template <typename T = void> T set_Pay_id(int32_t value) {
		return ((T (*)(PayStoreConfigConfig*, int32_t))(Il2CppBase() + 0x377EF40))(this, value);
	}
	template <typename T = Il2CppString*> T get_Spec_label() {
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EF48))(this);
	}
	template <typename T = void> T set_Spec_label(Il2CppString* value) {
		return ((T (*)(PayStoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377EF50))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EF58))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(PayStoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377EF60))(this, value);
	}
	template <typename T = int32_t> T get_Limit_count() {
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EF68))(this);
	}
	template <typename T = void> T set_Limit_count(int32_t value) {
		return ((T (*)(PayStoreConfigConfig*, int32_t))(Il2CppBase() + 0x377EF70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Limit_show() {
		return ((T (*)(PayStoreConfigConfig*))(Il2CppBase() + 0x377EF78))(this);
	}
	template <typename T = void> T set_Limit_show(Il2CppString* value) {
		return ((T (*)(PayStoreConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377EF80))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PayStoreConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377EF88))(this, bytes, position);
	}

};

}
