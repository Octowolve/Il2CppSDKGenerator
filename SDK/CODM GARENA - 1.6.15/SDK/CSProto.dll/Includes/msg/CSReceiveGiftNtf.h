#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSReceiveGiftNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSReceiveGiftNtf"));
	}

	template <typename T = int32_t> T& _list_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _gift_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_list_type() {
		return ((T (*)(CSReceiveGiftNtf*))(Il2CppBase() + 0x51E04C0))(this);
	}
	template <typename T = void> T set_list_type(int32_t value) {
		return ((T (*)(CSReceiveGiftNtf*, int32_t))(Il2CppBase() + 0x51E04C8))(this, value);
	}
	template <typename T = uintptr_t> T get_gift_info() {
		return ((T (*)(CSReceiveGiftNtf*))(Il2CppBase() + 0x51E04D0))(this);
	}
	template <typename T = void> T set_gift_info(uintptr_t value) {
		return ((T (*)(CSReceiveGiftNtf*, uintptr_t))(Il2CppBase() + 0x51E04D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSReceiveGiftNtf*, bool))(Il2CppBase() + 0x51E04E0))(this, createIfMissing);
	}

};

}
