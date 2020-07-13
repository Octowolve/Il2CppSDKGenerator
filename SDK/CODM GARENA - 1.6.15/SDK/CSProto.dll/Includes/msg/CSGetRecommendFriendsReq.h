#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetRecommendFriendsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetRecommendFriendsReq"));
	}

	template <typename T = int32_t> T& _favor_gametype() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _rank_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_favor_gametype() {
		return ((T (*)(CSGetRecommendFriendsReq*))(Il2CppBase() + 0x5218030))(this);
	}
	template <typename T = void> T set_favor_gametype(int32_t value) {
		return ((T (*)(CSGetRecommendFriendsReq*, int32_t))(Il2CppBase() + 0x5218038))(this, value);
	}
	template <typename T = int32_t> T get_rank_level() {
		return ((T (*)(CSGetRecommendFriendsReq*))(Il2CppBase() + 0x5218040))(this);
	}
	template <typename T = void> T set_rank_level(int32_t value) {
		return ((T (*)(CSGetRecommendFriendsReq*, int32_t))(Il2CppBase() + 0x5218048))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetRecommendFriendsReq*, bool))(Il2CppBase() + 0x5218050))(this, createIfMissing);
	}

};

}
