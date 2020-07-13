#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFriendsRankReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFriendsRankReq"));
	}

	template <typename T = int32_t> T& _rank_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSGetFriendsRankReq*))(Il2CppBase() + 0x52166B8))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSGetFriendsRankReq*, int32_t))(Il2CppBase() + 0x52166C0))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetFriendsRankReq*))(Il2CppBase() + 0x52166C8))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetFriendsRankReq*, int32_t))(Il2CppBase() + 0x52166D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFriendsRankReq*, bool))(Il2CppBase() + 0x52166D8))(this, createIfMissing);
	}

};

}
