#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class NumberItemConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "NumberItemConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Usage_Tip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Provided_Num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& BufType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& EffectType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Durable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& BuffValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& UseLimitDay() {
		return *(T*)((uintptr_t)this + 0x3C);
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

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CB04))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x376AE30))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(NumberItemConfConfig*, uint32_t))(Il2CppBase() + 0x377CBA4))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x376AE58))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CBAC))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CBB4))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CBBC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x376AE68))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(NumberItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x377CBC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x376AE38))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x376AE70))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(NumberItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x377CBCC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x376AE48))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Usage_Tip() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CBD4))(this);
	}
	template <typename T = void> T set_LOCID_Usage_Tip(Il2CppString* value) {
		return ((T (*)(NumberItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x377CBDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Usage_Tip() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CBE4))(this);
	}
	template <typename T = int32_t> T get_Provided_Num() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CBF4))(this);
	}
	template <typename T = void> T set_Provided_Num(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CBFC))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x376AE60))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CC04))(this, value);
	}
	template <typename T = int32_t> T get_BufType() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CC0C))(this);
	}
	template <typename T = void> T set_BufType(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CC14))(this, value);
	}
	template <typename T = int32_t> T get_EffectType() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CC1C))(this);
	}
	template <typename T = void> T set_EffectType(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CC24))(this, value);
	}
	template <typename T = int32_t> T get_Durable() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CC2C))(this);
	}
	template <typename T = void> T set_Durable(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CC34))(this, value);
	}
	template <typename T = int32_t> T get_BuffValue() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CC3C))(this);
	}
	template <typename T = void> T set_BuffValue(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CC44))(this, value);
	}
	template <typename T = int32_t> T get_UseLimitDay() {
		return ((T (*)(NumberItemConfConfig*))(Il2CppBase() + 0x377CC4C))(this);
	}
	template <typename T = void> T set_UseLimitDay(int32_t value) {
		return ((T (*)(NumberItemConfConfig*, int32_t))(Il2CppBase() + 0x377CC54))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(NumberItemConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377CC5C))(this, bytes, position);
	}

};

}
