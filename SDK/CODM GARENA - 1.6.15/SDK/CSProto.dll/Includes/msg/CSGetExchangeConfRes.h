#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetExchangeConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetExchangeConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ShopConf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ShopItems() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ExchangeRecords() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetExchangeConfRes*))(Il2CppBase() + 0x52161A4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetExchangeConfRes*, int32_t))(Il2CppBase() + 0x52161AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ShopConf() {
		return ((T (*)(CSGetExchangeConfRes*))(Il2CppBase() + 0x52161B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ShopItems() {
		return ((T (*)(CSGetExchangeConfRes*))(Il2CppBase() + 0x52161BC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ExchangeRecords() {
		return ((T (*)(CSGetExchangeConfRes*))(Il2CppBase() + 0x52161C4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetExchangeConfRes*, bool))(Il2CppBase() + 0x52161CC))(this, createIfMissing);
	}

};

}
