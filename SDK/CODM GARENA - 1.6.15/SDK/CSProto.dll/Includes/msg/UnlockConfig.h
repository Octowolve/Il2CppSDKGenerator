#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UnlockConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UnlockConfig"));
	}

	template <typename T = int32_t> T& _UnlockID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _CdtType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Cdt_Value1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Cdt_Value2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Cdt_Value3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Cdt_Value4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Tip_Type1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Tip_Type2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Tip_Type3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_UnlockID() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA908))(this);
	}
	template <typename T = void> T set_UnlockID(int32_t value) {
		return ((T (*)(UnlockConfig*, int32_t))(Il2CppBase() + 0x51AA910))(this, value);
	}
	template <typename T = int32_t> T get_CdtType() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA918))(this);
	}
	template <typename T = void> T set_CdtType(int32_t value) {
		return ((T (*)(UnlockConfig*, int32_t))(Il2CppBase() + 0x51AA920))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Cdt_Value1() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA928))(this);
	}
	template <typename T = void> T set_Cdt_Value1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA930))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Cdt_Value2() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA938))(this);
	}
	template <typename T = void> T set_Cdt_Value2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA940))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Cdt_Value3() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA948))(this);
	}
	template <typename T = void> T set_Cdt_Value3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA950))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Cdt_Value4() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA958))(this);
	}
	template <typename T = void> T set_Cdt_Value4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA960))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Tip_Type1() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA968))(this);
	}
	template <typename T = void> T set_Tip_Type1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA970))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Tip_Type2() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA978))(this);
	}
	template <typename T = void> T set_Tip_Type2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA980))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Tip_Type3() {
		return ((T (*)(UnlockConfig*))(Il2CppBase() + 0x51AA988))(this);
	}
	template <typename T = void> T set_Tip_Type3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA990))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UnlockConfig*, bool))(Il2CppBase() + 0x51AA998))(this, createIfMissing);
	}

};

}
