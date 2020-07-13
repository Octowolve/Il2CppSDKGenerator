#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SafeBoxConstantE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SafeBoxConstantE"));
	}

	template <typename T = int32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EnumName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Constant() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _ConstantList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SafeBoxConstantE*))(Il2CppBase() + 0x50722F0))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SafeBoxConstantE*, int32_t))(Il2CppBase() + 0x50722F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EnumName() {
		return ((T (*)(SafeBoxConstantE*))(Il2CppBase() + 0x5072300))(this);
	}
	template <typename T = void> T set_EnumName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SafeBoxConstantE*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072308))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Constant() {
		return ((T (*)(SafeBoxConstantE*))(Il2CppBase() + 0x5072310))(this);
	}
	template <typename T = void> T set_Constant(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SafeBoxConstantE*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072318))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_ConstantList() {
		return ((T (*)(SafeBoxConstantE*))(Il2CppBase() + 0x5072320))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SafeBoxConstantE*, bool))(Il2CppBase() + 0x5072328))(this, createIfMissing);
	}

};

}
