#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetRecommendFriendsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetRecommendFriendsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _favor_gametype() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _rank_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _recommend_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetRecommendFriendsRes*))(Il2CppBase() + 0x5218110))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetRecommendFriendsRes*, int32_t))(Il2CppBase() + 0x5218118))(this, value);
	}
	template <typename T = int32_t> T get_favor_gametype() {
		return ((T (*)(CSGetRecommendFriendsRes*))(Il2CppBase() + 0x5218120))(this);
	}
	template <typename T = void> T set_favor_gametype(int32_t value) {
		return ((T (*)(CSGetRecommendFriendsRes*, int32_t))(Il2CppBase() + 0x5218128))(this, value);
	}
	template <typename T = int32_t> T get_rank_level() {
		return ((T (*)(CSGetRecommendFriendsRes*))(Il2CppBase() + 0x5218130))(this);
	}
	template <typename T = void> T set_rank_level(int32_t value) {
		return ((T (*)(CSGetRecommendFriendsRes*, int32_t))(Il2CppBase() + 0x5218138))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_recommend_list() {
		return ((T (*)(CSGetRecommendFriendsRes*))(Il2CppBase() + 0x5218140))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetRecommendFriendsRes*, bool))(Il2CppBase() + 0x5218148))(this, createIfMissing);
	}

};

}
