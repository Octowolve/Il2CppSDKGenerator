#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DiamondCardInDB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DiamondCardInDB"));
	}

	template <typename T = Il2CppString*> T& _product_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _begin_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _grandtotal_opendays() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _award_times() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _last_award_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = Il2CppString*> T get_product_id() {
		return ((T (*)(DiamondCardInDB*))(Il2CppBase() + 0x5226654))(this);
	}
	template <typename T = void> T set_product_id(Il2CppString* value) {
		return ((T (*)(DiamondCardInDB*, Il2CppString*))(Il2CppBase() + 0x522665C))(this, value);
	}
	template <typename T = uint64_t> T get_begin_time() {
		return ((T (*)(DiamondCardInDB*))(Il2CppBase() + 0x5226664))(this);
	}
	template <typename T = void> T set_begin_time(uint64_t value) {
		return ((T (*)(DiamondCardInDB*, uint64_t))(Il2CppBase() + 0x522666C))(this, value);
	}
	template <typename T = uint64_t> T get_end_time() {
		return ((T (*)(DiamondCardInDB*))(Il2CppBase() + 0x522667C))(this);
	}
	template <typename T = void> T set_end_time(uint64_t value) {
		return ((T (*)(DiamondCardInDB*, uint64_t))(Il2CppBase() + 0x5226684))(this, value);
	}
	template <typename T = uint32_t> T get_grandtotal_opendays() {
		return ((T (*)(DiamondCardInDB*))(Il2CppBase() + 0x5226694))(this);
	}
	template <typename T = void> T set_grandtotal_opendays(uint32_t value) {
		return ((T (*)(DiamondCardInDB*, uint32_t))(Il2CppBase() + 0x522669C))(this, value);
	}
	template <typename T = int32_t> T get_award_times() {
		return ((T (*)(DiamondCardInDB*))(Il2CppBase() + 0x52266A4))(this);
	}
	template <typename T = void> T set_award_times(int32_t value) {
		return ((T (*)(DiamondCardInDB*, int32_t))(Il2CppBase() + 0x52266AC))(this, value);
	}
	template <typename T = uint32_t> T get_last_award_time() {
		return ((T (*)(DiamondCardInDB*))(Il2CppBase() + 0x52266B4))(this);
	}
	template <typename T = void> T set_last_award_time(uint32_t value) {
		return ((T (*)(DiamondCardInDB*, uint32_t))(Il2CppBase() + 0x52266BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DiamondCardInDB*, bool))(Il2CppBase() + 0x52266C4))(this, createIfMissing);
	}

};

}
