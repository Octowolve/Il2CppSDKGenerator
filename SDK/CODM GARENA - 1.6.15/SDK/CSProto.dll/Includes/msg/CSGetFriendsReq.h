#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFriendsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFriendsReq"));
	}

	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetFriendsReq*))(Il2CppBase() + 0x521680C))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetFriendsReq*, int32_t))(Il2CppBase() + 0x5216814))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSGetFriendsReq*))(Il2CppBase() + 0x521681C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSGetFriendsReq*, int32_t))(Il2CppBase() + 0x5216824))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFriendsReq*, bool))(Il2CppBase() + 0x521682C))(this, createIfMissing);
	}

};

}
