#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSendFriendGiftRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSendFriendGiftRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _friend_open_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSendFriendGiftRes*))(Il2CppBase() + 0x51E14D0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSendFriendGiftRes*, int32_t))(Il2CppBase() + 0x51E14D8))(this, value);
	}
	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(CSSendFriendGiftRes*))(Il2CppBase() + 0x51E14E0))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(CSSendFriendGiftRes*, uint64_t))(Il2CppBase() + 0x51E14E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_friend_open_id() {
		return ((T (*)(CSSendFriendGiftRes*))(Il2CppBase() + 0x51E14F8))(this);
	}
	template <typename T = void> T set_friend_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSendFriendGiftRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E1500))(this, value);
	}
	template <typename T = int32_t> T get_friend_type() {
		return ((T (*)(CSSendFriendGiftRes*))(Il2CppBase() + 0x51E1508))(this);
	}
	template <typename T = void> T set_friend_type(int32_t value) {
		return ((T (*)(CSSendFriendGiftRes*, int32_t))(Il2CppBase() + 0x51E1510))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSendFriendGiftRes*, bool))(Il2CppBase() + 0x51E1518))(this, createIfMissing);
	}

};

}
