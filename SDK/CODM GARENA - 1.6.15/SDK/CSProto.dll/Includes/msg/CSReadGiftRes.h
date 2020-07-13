#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSReadGiftRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSReadGiftRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSReadGiftRes*))(Il2CppBase() + 0x51E0208))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSReadGiftRes*, int32_t))(Il2CppBase() + 0x51E0210))(this, value);
	}
	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSReadGiftRes*))(Il2CppBase() + 0x51E0218))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSReadGiftRes*, uint64_t))(Il2CppBase() + 0x51E0220))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSReadGiftRes*, bool))(Il2CppBase() + 0x51E0230))(this, createIfMissing);
	}

};

}
