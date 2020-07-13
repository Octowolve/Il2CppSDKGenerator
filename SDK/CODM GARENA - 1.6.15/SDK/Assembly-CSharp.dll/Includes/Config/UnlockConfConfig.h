#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class UnlockConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "UnlockConfConfig"));
	}

	template <typename T = int32_t> T& UnlockID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CdtType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& CdtNote() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& CdtTypeNote() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Cdt_Value1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Cdt_Value2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Cdt_Value3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& Cdt_Value4() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Tip_Type1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Tip_Type2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Tip_Type3() {
		return *(T*)((uintptr_t)this + 0x34);
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
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1C50))(this);
	}
	template <typename T = int32_t> T get_UnlockID() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1CF0))(this);
	}
	template <typename T = void> T set_UnlockID(int32_t value) {
		return ((T (*)(UnlockConfConfig*, int32_t))(Il2CppBase() + 0x30F1CF8))(this, value);
	}
	template <typename T = int32_t> T get_CdtType() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D00))(this);
	}
	template <typename T = void> T set_CdtType(int32_t value) {
		return ((T (*)(UnlockConfConfig*, int32_t))(Il2CppBase() + 0x30F1D08))(this, value);
	}
	template <typename T = Il2CppString*> T get_CdtNote() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D10))(this);
	}
	template <typename T = void> T set_CdtNote(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D18))(this, value);
	}
	template <typename T = Il2CppString*> T get_CdtTypeNote() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D20))(this);
	}
	template <typename T = void> T set_CdtTypeNote(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D28))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cdt_Value1() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D30))(this);
	}
	template <typename T = void> T set_Cdt_Value1(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D38))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cdt_Value2() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D40))(this);
	}
	template <typename T = void> T set_Cdt_Value2(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D48))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cdt_Value3() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D50))(this);
	}
	template <typename T = void> T set_Cdt_Value3(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D58))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cdt_Value4() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D60))(this);
	}
	template <typename T = void> T set_Cdt_Value4(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D68))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tip_Type1() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D70))(this);
	}
	template <typename T = void> T set_Tip_Type1(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D78))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tip_Type2() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D80))(this);
	}
	template <typename T = void> T set_Tip_Type2(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D88))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tip_Type3() {
		return ((T (*)(UnlockConfConfig*))(Il2CppBase() + 0x30F1D90))(this);
	}
	template <typename T = void> T set_Tip_Type3(Il2CppString* value) {
		return ((T (*)(UnlockConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F1D98))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(UnlockConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F1DA0))(this, bytes, position);
	}

};

}
