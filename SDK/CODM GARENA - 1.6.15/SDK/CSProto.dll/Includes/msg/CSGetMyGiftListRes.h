#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetMyGiftListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetMyGiftListRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _received_ask_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _received_gift_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _history_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetMyGiftListRes*))(Il2CppBase() + 0x521746C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetMyGiftListRes*, int32_t))(Il2CppBase() + 0x5217474))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_received_ask_list() {
		return ((T (*)(CSGetMyGiftListRes*))(Il2CppBase() + 0x521747C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_received_gift_list() {
		return ((T (*)(CSGetMyGiftListRes*))(Il2CppBase() + 0x5217484))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_history_list() {
		return ((T (*)(CSGetMyGiftListRes*))(Il2CppBase() + 0x521748C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetMyGiftListRes*, bool))(Il2CppBase() + 0x5217494))(this, createIfMissing);
	}

};

}
