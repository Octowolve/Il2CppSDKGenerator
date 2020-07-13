#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ExchangeCoinConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ExchangeCoinConf"));
	}

	template <typename T = int32_t> T& _CoinID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _ColorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _InventoryShow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_CoinID() {
		return ((T (*)(ExchangeCoinConf*))(Il2CppBase() + 0x5226E74))(this);
	}
	template <typename T = void> T set_CoinID(int32_t value) {
		return ((T (*)(ExchangeCoinConf*, int32_t))(Il2CppBase() + 0x5226E7C))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ExchangeCoinConf*))(Il2CppBase() + 0x5226E84))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(ExchangeCoinConf*, int32_t))(Il2CppBase() + 0x5226E8C))(this, value);
	}
	template <typename T = int32_t> T get_InventoryShow() {
		return ((T (*)(ExchangeCoinConf*))(Il2CppBase() + 0x5226E94))(this);
	}
	template <typename T = void> T set_InventoryShow(int32_t value) {
		return ((T (*)(ExchangeCoinConf*, int32_t))(Il2CppBase() + 0x5226E9C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ExchangeCoinConf*, bool))(Il2CppBase() + 0x5226EA4))(this, createIfMissing);
	}

};

}
