#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PayConfInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PayConfInfo"));
	}

	template <typename T = Il2CppString*> T& _ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _ProductAndroidID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& _Original_Price() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _Add_Diamonds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _Discount_Num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& _Discount_Price() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _Discount_Start_Time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _Discount_StartTime_Int() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _Discount_End_Time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _Discount_EndTime_Int() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _Extra_Diamonds() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _Extra_Start_Time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _Extra_StartTime_Int() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _Extra_End_Time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _Extra_EndTime_Int() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Icon_Res() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Tips_Name() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Location() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Firstpay_Tips() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _Firstpay_Extra() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _Anyonepay_Mult() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& _Anyonepay_Start_Time() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _Anyonepay_StartTime_Int() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& _Anyonepay_End_Time() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _Anyonepay_EndTime_Int() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _AreaID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Channel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = Il2CppString*> T get_ID() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5E8C))(this);
	}
	template <typename T = void> T set_ID(Il2CppString* value) {
		return ((T (*)(PayConfInfo*, Il2CppString*))(Il2CppBase() + 0x4EA5E94))(this, value);
	}
	template <typename T = int32_t> T get_ProductAndroidID() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5E9C))(this);
	}
	template <typename T = void> T set_ProductAndroidID(int32_t value) {
		return ((T (*)(PayConfInfo*, int32_t))(Il2CppBase() + 0x4EA5EA4))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5EAC))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(PayConfInfo*, int32_t))(Il2CppBase() + 0x4EA5EB4))(this, value);
	}
	template <typename T = float> T get_Original_Price() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5EBC))(this);
	}
	template <typename T = void> T set_Original_Price(float value) {
		return ((T (*)(PayConfInfo*, float))(Il2CppBase() + 0x4EA5EC4))(this, value);
	}
	template <typename T = uint32_t> T get_Add_Diamonds() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5ECC))(this);
	}
	template <typename T = void> T set_Add_Diamonds(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA5ED4))(this, value);
	}
	template <typename T = float> T get_Discount_Num() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5EDC))(this);
	}
	template <typename T = void> T set_Discount_Num(float value) {
		return ((T (*)(PayConfInfo*, float))(Il2CppBase() + 0x4EA5EE4))(this, value);
	}
	template <typename T = float> T get_Discount_Price() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5EEC))(this);
	}
	template <typename T = void> T set_Discount_Price(float value) {
		return ((T (*)(PayConfInfo*, float))(Il2CppBase() + 0x4EA5EF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Discount_Start_Time() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5EFC))(this);
	}
	template <typename T = void> T set_Discount_Start_Time(Il2CppString* value) {
		return ((T (*)(PayConfInfo*, Il2CppString*))(Il2CppBase() + 0x4EA5F04))(this, value);
	}
	template <typename T = uint32_t> T get_Discount_StartTime_Int() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F0C))(this);
	}
	template <typename T = void> T set_Discount_StartTime_Int(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA5F14))(this, value);
	}
	template <typename T = Il2CppString*> T get_Discount_End_Time() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F1C))(this);
	}
	template <typename T = void> T set_Discount_End_Time(Il2CppString* value) {
		return ((T (*)(PayConfInfo*, Il2CppString*))(Il2CppBase() + 0x4EA5F24))(this, value);
	}
	template <typename T = uint32_t> T get_Discount_EndTime_Int() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F2C))(this);
	}
	template <typename T = void> T set_Discount_EndTime_Int(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA5F34))(this, value);
	}
	template <typename T = uint32_t> T get_Extra_Diamonds() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F3C))(this);
	}
	template <typename T = void> T set_Extra_Diamonds(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA5F44))(this, value);
	}
	template <typename T = Il2CppString*> T get_Extra_Start_Time() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F4C))(this);
	}
	template <typename T = void> T set_Extra_Start_Time(Il2CppString* value) {
		return ((T (*)(PayConfInfo*, Il2CppString*))(Il2CppBase() + 0x4EA5F54))(this, value);
	}
	template <typename T = uint32_t> T get_Extra_StartTime_Int() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F5C))(this);
	}
	template <typename T = void> T set_Extra_StartTime_Int(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA5F64))(this, value);
	}
	template <typename T = Il2CppString*> T get_Extra_End_Time() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F6C))(this);
	}
	template <typename T = void> T set_Extra_End_Time(Il2CppString* value) {
		return ((T (*)(PayConfInfo*, Il2CppString*))(Il2CppBase() + 0x4EA5F74))(this, value);
	}
	template <typename T = uint32_t> T get_Extra_EndTime_Int() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F7C))(this);
	}
	template <typename T = void> T set_Extra_EndTime_Int(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA5F84))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Icon_Res() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F8C))(this);
	}
	template <typename T = void> T set_Icon_Res(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PayConfInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5F94))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Tips_Name() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5F9C))(this);
	}
	template <typename T = void> T set_Tips_Name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PayConfInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5FA4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Location() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5FAC))(this);
	}
	template <typename T = void> T set_Location(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PayConfInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5FB4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Firstpay_Tips() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5FBC))(this);
	}
	template <typename T = void> T set_Firstpay_Tips(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PayConfInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5FC4))(this, value);
	}
	template <typename T = uint32_t> T get_Firstpay_Extra() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5FCC))(this);
	}
	template <typename T = void> T set_Firstpay_Extra(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA5FD4))(this, value);
	}
	template <typename T = float> T get_Anyonepay_Mult() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5FDC))(this);
	}
	template <typename T = void> T set_Anyonepay_Mult(float value) {
		return ((T (*)(PayConfInfo*, float))(Il2CppBase() + 0x4EA5FE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Anyonepay_Start_Time() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5FEC))(this);
	}
	template <typename T = void> T set_Anyonepay_Start_Time(Il2CppString* value) {
		return ((T (*)(PayConfInfo*, Il2CppString*))(Il2CppBase() + 0x4EA5FF4))(this, value);
	}
	template <typename T = uint32_t> T get_Anyonepay_StartTime_Int() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA5FFC))(this);
	}
	template <typename T = void> T set_Anyonepay_StartTime_Int(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA6004))(this, value);
	}
	template <typename T = Il2CppString*> T get_Anyonepay_End_Time() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA600C))(this);
	}
	template <typename T = void> T set_Anyonepay_End_Time(Il2CppString* value) {
		return ((T (*)(PayConfInfo*, Il2CppString*))(Il2CppBase() + 0x4EA6014))(this, value);
	}
	template <typename T = uint32_t> T get_Anyonepay_EndTime_Int() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA601C))(this);
	}
	template <typename T = void> T set_Anyonepay_EndTime_Int(uint32_t value) {
		return ((T (*)(PayConfInfo*, uint32_t))(Il2CppBase() + 0x4EA6024))(this, value);
	}
	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA602C))(this);
	}
	template <typename T = void> T set_AreaID(int32_t value) {
		return ((T (*)(PayConfInfo*, int32_t))(Il2CppBase() + 0x4EA6034))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Channel() {
		return ((T (*)(PayConfInfo*))(Il2CppBase() + 0x4EA603C))(this);
	}
	template <typename T = void> T set_Channel(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PayConfInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6044))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PayConfInfo*, bool))(Il2CppBase() + 0x4EA604C))(this, createIfMissing);
	}

};

}
