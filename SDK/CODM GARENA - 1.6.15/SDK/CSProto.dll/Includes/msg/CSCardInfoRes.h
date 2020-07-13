#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCardInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCardInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _card_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSCardInfoRes*))(Il2CppBase() + 0x51E5AB4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSCardInfoRes*, int32_t))(Il2CppBase() + 0x51E5ABC))(this, value);
	}
	template <typename T = uintptr_t> T get_card_info() {
		return ((T (*)(CSCardInfoRes*))(Il2CppBase() + 0x51E5AC4))(this);
	}
	template <typename T = void> T set_card_info(uintptr_t value) {
		return ((T (*)(CSCardInfoRes*, uintptr_t))(Il2CppBase() + 0x51E5ACC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCardInfoRes*, bool))(Il2CppBase() + 0x51E5AD4))(this, createIfMissing);
	}

};

}
