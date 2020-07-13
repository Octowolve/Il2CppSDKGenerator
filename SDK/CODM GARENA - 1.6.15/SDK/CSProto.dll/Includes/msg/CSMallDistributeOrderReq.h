#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallDistributeOrderReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallDistributeOrderReq"));
	}

	template <typename T = int32_t> T& _commodity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _midas_item_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _real_price() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _is_send_ntf_to_all() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_commodity_id() {
		return ((T (*)(CSMallDistributeOrderReq*))(Il2CppBase() + 0x51F024C))(this);
	}
	template <typename T = void> T set_commodity_id(int32_t value) {
		return ((T (*)(CSMallDistributeOrderReq*, int32_t))(Il2CppBase() + 0x51F0254))(this, value);
	}
	template <typename T = Il2CppString*> T get_midas_item_id() {
		return ((T (*)(CSMallDistributeOrderReq*))(Il2CppBase() + 0x51F025C))(this);
	}
	template <typename T = void> T set_midas_item_id(Il2CppString* value) {
		return ((T (*)(CSMallDistributeOrderReq*, Il2CppString*))(Il2CppBase() + 0x51F0264))(this, value);
	}
	template <typename T = int32_t> T get_real_price() {
		return ((T (*)(CSMallDistributeOrderReq*))(Il2CppBase() + 0x51F026C))(this);
	}
	template <typename T = void> T set_real_price(int32_t value) {
		return ((T (*)(CSMallDistributeOrderReq*, int32_t))(Il2CppBase() + 0x51F0274))(this, value);
	}
	template <typename T = int32_t> T get_num() {
		return ((T (*)(CSMallDistributeOrderReq*))(Il2CppBase() + 0x51F027C))(this);
	}
	template <typename T = void> T set_num(int32_t value) {
		return ((T (*)(CSMallDistributeOrderReq*, int32_t))(Il2CppBase() + 0x51F0284))(this, value);
	}
	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(CSMallDistributeOrderReq*))(Il2CppBase() + 0x51F028C))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(CSMallDistributeOrderReq*, uint64_t))(Il2CppBase() + 0x51F0294))(this, value);
	}
	template <typename T = int32_t> T get_is_send_ntf_to_all() {
		return ((T (*)(CSMallDistributeOrderReq*))(Il2CppBase() + 0x51F02A4))(this);
	}
	template <typename T = void> T set_is_send_ntf_to_all(int32_t value) {
		return ((T (*)(CSMallDistributeOrderReq*, int32_t))(Il2CppBase() + 0x51F02AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallDistributeOrderReq*, bool))(Il2CppBase() + 0x51F02B4))(this, createIfMissing);
	}

};

}
