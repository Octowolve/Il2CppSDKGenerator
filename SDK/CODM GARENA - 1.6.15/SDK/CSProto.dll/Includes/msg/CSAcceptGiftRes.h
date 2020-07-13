#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAcceptGiftRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAcceptGiftRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _accept_all() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAcceptGiftRes*))(Il2CppBase() + 0x516F198))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAcceptGiftRes*, int32_t))(Il2CppBase() + 0x516F1A0))(this, value);
	}
	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSAcceptGiftRes*))(Il2CppBase() + 0x516F1A8))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSAcceptGiftRes*, uint64_t))(Il2CppBase() + 0x516F1B0))(this, value);
	}
	template <typename T = int32_t> T get_accept_all() {
		return ((T (*)(CSAcceptGiftRes*))(Il2CppBase() + 0x516F1C0))(this);
	}
	template <typename T = void> T set_accept_all(int32_t value) {
		return ((T (*)(CSAcceptGiftRes*, int32_t))(Il2CppBase() + 0x516F1C8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAcceptGiftRes*, bool))(Il2CppBase() + 0x516F1D0))(this, createIfMissing);
	}

};

}
