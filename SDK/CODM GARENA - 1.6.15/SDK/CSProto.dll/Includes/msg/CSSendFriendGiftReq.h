#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSendFriendGiftReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSendFriendGiftReq"));
	}

	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _friend_open_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(CSSendFriendGiftReq*))(Il2CppBase() + 0x51E147C))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(CSSendFriendGiftReq*, uint64_t))(Il2CppBase() + 0x51E1484))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_friend_open_id() {
		return ((T (*)(CSSendFriendGiftReq*))(Il2CppBase() + 0x51E1494))(this);
	}
	template <typename T = void> T set_friend_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSendFriendGiftReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E149C))(this, value);
	}
	template <typename T = int32_t> T get_friend_type() {
		return ((T (*)(CSSendFriendGiftReq*))(Il2CppBase() + 0x51E14A4))(this);
	}
	template <typename T = void> T set_friend_type(int32_t value) {
		return ((T (*)(CSSendFriendGiftReq*, int32_t))(Il2CppBase() + 0x51E14AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSendFriendGiftReq*, bool))(Il2CppBase() + 0x51E14B4))(this, createIfMissing);
	}

};

}
