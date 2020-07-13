#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetGroupFriendReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetGroupFriendReq"));
	}

	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_type() {
		return ((T (*)(CSGetGroupFriendReq*))(Il2CppBase() + 0x5216A6C))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(CSGetGroupFriendReq*, uint32_t))(Il2CppBase() + 0x5216A74))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetGroupFriendReq*))(Il2CppBase() + 0x5216A7C))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetGroupFriendReq*, int32_t))(Il2CppBase() + 0x5216A84))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetGroupFriendReq*, bool))(Il2CppBase() + 0x5216A8C))(this, createIfMissing);
	}

};

}
