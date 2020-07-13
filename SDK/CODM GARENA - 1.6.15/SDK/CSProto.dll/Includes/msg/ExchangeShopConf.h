#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ExchangeShopConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ExchangeShopConf"));
	}

	template <typename T = int32_t> T& _ExchangeShopID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _SkipSystem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _SkipID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _ShopName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _ShopDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _OpenTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _CloseTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& _SkipIDArray() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _OpenTimeStamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _CloseTimeStamp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_ExchangeShopID() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5226F98))(this);
	}
	template <typename T = void> T set_ExchangeShopID(int32_t value) {
		return ((T (*)(ExchangeShopConf*, int32_t))(Il2CppBase() + 0x5226FA0))(this, value);
	}
	template <typename T = int32_t> T get_SkipSystem() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5226FA8))(this);
	}
	template <typename T = void> T set_SkipSystem(int32_t value) {
		return ((T (*)(ExchangeShopConf*, int32_t))(Il2CppBase() + 0x5226FB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SkipID() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5226FB8))(this);
	}
	template <typename T = void> T set_SkipID(Il2CppString* value) {
		return ((T (*)(ExchangeShopConf*, Il2CppString*))(Il2CppBase() + 0x5226FC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShopName() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5226FC8))(this);
	}
	template <typename T = void> T set_ShopName(Il2CppString* value) {
		return ((T (*)(ExchangeShopConf*, Il2CppString*))(Il2CppBase() + 0x5226FD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShopDesc() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5226FD8))(this);
	}
	template <typename T = void> T set_ShopDesc(Il2CppString* value) {
		return ((T (*)(ExchangeShopConf*, Il2CppString*))(Il2CppBase() + 0x5226FE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_OpenTime() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5226FE8))(this);
	}
	template <typename T = void> T set_OpenTime(Il2CppString* value) {
		return ((T (*)(ExchangeShopConf*, Il2CppString*))(Il2CppBase() + 0x5226FF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CloseTime() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5226FF8))(this);
	}
	template <typename T = void> T set_CloseTime(Il2CppString* value) {
		return ((T (*)(ExchangeShopConf*, Il2CppString*))(Il2CppBase() + 0x5227000))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_SkipIDArray() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5227008))(this);
	}
	template <typename T = uint32_t> T get_OpenTimeStamp() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5227010))(this);
	}
	template <typename T = void> T set_OpenTimeStamp(uint32_t value) {
		return ((T (*)(ExchangeShopConf*, uint32_t))(Il2CppBase() + 0x5227018))(this, value);
	}
	template <typename T = uint32_t> T get_CloseTimeStamp() {
		return ((T (*)(ExchangeShopConf*))(Il2CppBase() + 0x5227020))(this);
	}
	template <typename T = void> T set_CloseTimeStamp(uint32_t value) {
		return ((T (*)(ExchangeShopConf*, uint32_t))(Il2CppBase() + 0x5227028))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ExchangeShopConf*, bool))(Il2CppBase() + 0x5227030))(this, createIfMissing);
	}

};

}
