#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAcceptGiftReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAcceptGiftReq"));
	}

	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _accept_all() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSAcceptGiftReq*))(Il2CppBase() + 0x516F154))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSAcceptGiftReq*, uint64_t))(Il2CppBase() + 0x516F15C))(this, value);
	}
	template <typename T = int32_t> T get_accept_all() {
		return ((T (*)(CSAcceptGiftReq*))(Il2CppBase() + 0x516F16C))(this);
	}
	template <typename T = void> T set_accept_all(int32_t value) {
		return ((T (*)(CSAcceptGiftReq*, int32_t))(Il2CppBase() + 0x516F174))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAcceptGiftReq*, bool))(Il2CppBase() + 0x516F17C))(this, createIfMissing);
	}

};

}
