#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryCompoundRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryCompoundRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _frage_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryCompoundRes*))(Il2CppBase() + 0x5137944))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryCompoundRes*, int32_t))(Il2CppBase() + 0x513794C))(this, value);
	}
	template <typename T = uint32_t> T get_frage_id() {
		return ((T (*)(CSInventoryCompoundRes*))(Il2CppBase() + 0x5137954))(this);
	}
	template <typename T = void> T set_frage_id(uint32_t value) {
		return ((T (*)(CSInventoryCompoundRes*, uint32_t))(Il2CppBase() + 0x513795C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSInventoryCompoundRes*))(Il2CppBase() + 0x5137964))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSInventoryCompoundRes*))(Il2CppBase() + 0x513796C))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSInventoryCompoundRes*, bool))(Il2CppBase() + 0x5137974))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryCompoundRes*, bool))(Il2CppBase() + 0x513797C))(this, createIfMissing);
	}

};

}
