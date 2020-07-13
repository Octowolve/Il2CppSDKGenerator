#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallDistributeOrderRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallDistributeOrderRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _token() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _url_param() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _midas_item_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _commodity_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _is_send_ntf_to_all() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMallDistributeOrderRes*))(Il2CppBase() + 0x51F02D0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMallDistributeOrderRes*, int32_t))(Il2CppBase() + 0x51F02D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_token() {
		return ((T (*)(CSMallDistributeOrderRes*))(Il2CppBase() + 0x51F02E0))(this);
	}
	template <typename T = void> T set_token(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSMallDistributeOrderRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F02E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_url_param() {
		return ((T (*)(CSMallDistributeOrderRes*))(Il2CppBase() + 0x51F02F0))(this);
	}
	template <typename T = void> T set_url_param(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSMallDistributeOrderRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F02F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_midas_item_id() {
		return ((T (*)(CSMallDistributeOrderRes*))(Il2CppBase() + 0x51F0300))(this);
	}
	template <typename T = void> T set_midas_item_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSMallDistributeOrderRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F0308))(this, value);
	}
	template <typename T = int32_t> T get_commodity_id() {
		return ((T (*)(CSMallDistributeOrderRes*))(Il2CppBase() + 0x51F0310))(this);
	}
	template <typename T = void> T set_commodity_id(int32_t value) {
		return ((T (*)(CSMallDistributeOrderRes*, int32_t))(Il2CppBase() + 0x51F0318))(this, value);
	}
	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(CSMallDistributeOrderRes*))(Il2CppBase() + 0x51F0320))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(CSMallDistributeOrderRes*, uint64_t))(Il2CppBase() + 0x51F0328))(this, value);
	}
	template <typename T = int32_t> T get_is_send_ntf_to_all() {
		return ((T (*)(CSMallDistributeOrderRes*))(Il2CppBase() + 0x51F0338))(this);
	}
	template <typename T = void> T set_is_send_ntf_to_all(int32_t value) {
		return ((T (*)(CSMallDistributeOrderRes*, int32_t))(Il2CppBase() + 0x51F0340))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallDistributeOrderRes*, bool))(Il2CppBase() + 0x51F0348))(this, createIfMissing);
	}

};

}
