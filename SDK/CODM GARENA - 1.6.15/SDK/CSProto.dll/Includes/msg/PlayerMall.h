#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerMall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerMall"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _commoditys() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _refreshable_commoditys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _refresh_times_today() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _next_auto_refresh_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _last_refresh_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _refresh_times_limit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _mall_currency() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _mall_currency_today() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _mall_currency_limit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _last_refresh_currency_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8C5C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(PlayerMall*, int32_t))(Il2CppBase() + 0x4EA8C64))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_commoditys() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8C6C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_refreshable_commoditys() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8C74))(this);
	}
	template <typename T = int32_t> T get_refresh_times_today() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8C7C))(this);
	}
	template <typename T = void> T set_refresh_times_today(int32_t value) {
		return ((T (*)(PlayerMall*, int32_t))(Il2CppBase() + 0x4EA8C84))(this, value);
	}
	template <typename T = uint32_t> T get_next_auto_refresh_time() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8C8C))(this);
	}
	template <typename T = void> T set_next_auto_refresh_time(uint32_t value) {
		return ((T (*)(PlayerMall*, uint32_t))(Il2CppBase() + 0x4EA8C94))(this, value);
	}
	template <typename T = uint32_t> T get_last_refresh_time() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8C9C))(this);
	}
	template <typename T = void> T set_last_refresh_time(uint32_t value) {
		return ((T (*)(PlayerMall*, uint32_t))(Il2CppBase() + 0x4EA8CA4))(this, value);
	}
	template <typename T = int32_t> T get_refresh_times_limit() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8CAC))(this);
	}
	template <typename T = void> T set_refresh_times_limit(int32_t value) {
		return ((T (*)(PlayerMall*, int32_t))(Il2CppBase() + 0x4EA8CB4))(this, value);
	}
	template <typename T = int64_t> T get_mall_currency() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8CBC))(this);
	}
	template <typename T = void> T set_mall_currency(int64_t value) {
		return ((T (*)(PlayerMall*, int64_t))(Il2CppBase() + 0x4EA8CC4))(this, value);
	}
	template <typename T = int32_t> T get_mall_currency_today() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8CD4))(this);
	}
	template <typename T = void> T set_mall_currency_today(int32_t value) {
		return ((T (*)(PlayerMall*, int32_t))(Il2CppBase() + 0x4EA8CDC))(this, value);
	}
	template <typename T = int32_t> T get_mall_currency_limit() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8CE4))(this);
	}
	template <typename T = void> T set_mall_currency_limit(int32_t value) {
		return ((T (*)(PlayerMall*, int32_t))(Il2CppBase() + 0x4EA8CEC))(this, value);
	}
	template <typename T = uint32_t> T get_last_refresh_currency_time() {
		return ((T (*)(PlayerMall*))(Il2CppBase() + 0x4EA8CF4))(this);
	}
	template <typename T = void> T set_last_refresh_currency_time(uint32_t value) {
		return ((T (*)(PlayerMall*, uint32_t))(Il2CppBase() + 0x4EA8CFC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerMall*, bool))(Il2CppBase() + 0x4EA8D04))(this, createIfMissing);
	}

};

}
