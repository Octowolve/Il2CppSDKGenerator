#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PayConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PayConfConfig"));
	}

	template <typename T = Il2CppString*> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ProductAndroidID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& AreaID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Original_Price() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Add_Diamonds() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Discount_Num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Discount_Price() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Discount_Start_Time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Discount_End_Time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Extra_Diamonds() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Extra_Start_Time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Extra_End_Time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Icon_Res() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Tips_Name() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Location() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Firstpay_Tips() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Firstpay_Extra() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& Anyonepay_Tips() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Anyonepay_Mult() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& Anyonepay_Start_Time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& Anyonepay_End_Time() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_ID() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E920))(this);
	}
	template <typename T = void> T set_ID(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377E928))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProductAndroidID() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E930))(this);
	}
	template <typename T = void> T set_ProductAndroidID(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377E938))(this, value);
	}
	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E940))(this);
	}
	template <typename T = void> T set_AreaID(int32_t value) {
		return ((T (*)(PayConfConfig*, int32_t))(Il2CppBase() + 0x377E948))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E950))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(PayConfConfig*, int32_t))(Il2CppBase() + 0x377E958))(this, value);
	}
	template <typename T = float> T get_Original_Price() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E960))(this);
	}
	template <typename T = void> T set_Original_Price(float value) {
		return ((T (*)(PayConfConfig*, float))(Il2CppBase() + 0x377E968))(this, value);
	}
	template <typename T = int32_t> T get_Add_Diamonds() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E970))(this);
	}
	template <typename T = void> T set_Add_Diamonds(int32_t value) {
		return ((T (*)(PayConfConfig*, int32_t))(Il2CppBase() + 0x377E978))(this, value);
	}
	template <typename T = float> T get_Discount_Num() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E980))(this);
	}
	template <typename T = void> T set_Discount_Num(float value) {
		return ((T (*)(PayConfConfig*, float))(Il2CppBase() + 0x377E988))(this, value);
	}
	template <typename T = float> T get_Discount_Price() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E990))(this);
	}
	template <typename T = void> T set_Discount_Price(float value) {
		return ((T (*)(PayConfConfig*, float))(Il2CppBase() + 0x377E998))(this, value);
	}
	template <typename T = Il2CppString*> T get_Discount_Start_Time() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E9A0))(this);
	}
	template <typename T = void> T set_Discount_Start_Time(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377E9A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Discount_End_Time() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E9B0))(this);
	}
	template <typename T = void> T set_Discount_End_Time(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377E9B8))(this, value);
	}
	template <typename T = int32_t> T get_Extra_Diamonds() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E9C0))(this);
	}
	template <typename T = void> T set_Extra_Diamonds(int32_t value) {
		return ((T (*)(PayConfConfig*, int32_t))(Il2CppBase() + 0x377E9C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Extra_Start_Time() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E9D0))(this);
	}
	template <typename T = void> T set_Extra_Start_Time(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377E9D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Extra_End_Time() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E9E0))(this);
	}
	template <typename T = void> T set_Extra_End_Time(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377E9E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon_Res() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377E9F0))(this);
	}
	template <typename T = void> T set_Icon_Res(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377E9F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tips_Name() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA00))(this);
	}
	template <typename T = void> T set_Tips_Name(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377EA08))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Location() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA10))(this);
	}
	template <typename T = void> T set_Location(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PayConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x377EA18))(this, value);
	}
	template <typename T = Il2CppString*> T get_Firstpay_Tips() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA20))(this);
	}
	template <typename T = void> T set_Firstpay_Tips(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377EA28))(this, value);
	}
	template <typename T = int32_t> T get_Firstpay_Extra() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA30))(this);
	}
	template <typename T = void> T set_Firstpay_Extra(int32_t value) {
		return ((T (*)(PayConfConfig*, int32_t))(Il2CppBase() + 0x377EA38))(this, value);
	}
	template <typename T = Il2CppString*> T get_Anyonepay_Tips() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA40))(this);
	}
	template <typename T = void> T set_Anyonepay_Tips(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377EA48))(this, value);
	}
	template <typename T = float> T get_Anyonepay_Mult() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA50))(this);
	}
	template <typename T = void> T set_Anyonepay_Mult(float value) {
		return ((T (*)(PayConfConfig*, float))(Il2CppBase() + 0x377EA58))(this, value);
	}
	template <typename T = Il2CppString*> T get_Anyonepay_Start_Time() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA60))(this);
	}
	template <typename T = void> T set_Anyonepay_Start_Time(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377EA68))(this, value);
	}
	template <typename T = Il2CppString*> T get_Anyonepay_End_Time() {
		return ((T (*)(PayConfConfig*))(Il2CppBase() + 0x377EA70))(this);
	}
	template <typename T = void> T set_Anyonepay_End_Time(Il2CppString* value) {
		return ((T (*)(PayConfConfig*, Il2CppString*))(Il2CppBase() + 0x377EA78))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PayConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377EA80))(this, bytes, position);
	}

};

}
