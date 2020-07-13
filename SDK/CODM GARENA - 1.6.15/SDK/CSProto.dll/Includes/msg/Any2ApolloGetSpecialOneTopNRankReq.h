#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2ApolloGetSpecialOneTopNRankReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2ApolloGetSpecialOneTopNRankReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _rank_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _up_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _down_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*))(Il2CppBase() + 0x510BC30))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*, uint64_t))(Il2CppBase() + 0x510BC38))(this, value);
	}
	template <typename T = uint32_t> T get_rank_type() {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*))(Il2CppBase() + 0x510BC48))(this);
	}
	template <typename T = void> T set_rank_type(uint32_t value) {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*, uint32_t))(Il2CppBase() + 0x510BC50))(this, value);
	}
	template <typename T = uint32_t> T get_up_count() {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*))(Il2CppBase() + 0x510BC58))(this);
	}
	template <typename T = void> T set_up_count(uint32_t value) {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*, uint32_t))(Il2CppBase() + 0x510BC60))(this, value);
	}
	template <typename T = uint32_t> T get_down_count() {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*))(Il2CppBase() + 0x510BC68))(this);
	}
	template <typename T = void> T set_down_count(uint32_t value) {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*, uint32_t))(Il2CppBase() + 0x510BC70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2ApolloGetSpecialOneTopNRankReq*, bool))(Il2CppBase() + 0x510BC78))(this, createIfMissing);
	}

};

}
