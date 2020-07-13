#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSReadGiftReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSReadGiftReq"));
	}

	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSReadGiftReq*))(Il2CppBase() + 0x51E01D4))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSReadGiftReq*, uint64_t))(Il2CppBase() + 0x51E01DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSReadGiftReq*, bool))(Il2CppBase() + 0x51E01EC))(this, createIfMissing);
	}

};

}
