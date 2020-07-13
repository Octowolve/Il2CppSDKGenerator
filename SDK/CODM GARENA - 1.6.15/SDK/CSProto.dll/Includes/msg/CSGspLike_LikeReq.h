#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspLikeLikeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGspLike_LikeReq"));
	}

	template <typename T = uint64_t> T& _other_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _gsp_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_other_player_id() {
		return ((T (*)(CSGspLikeLikeReq*))(Il2CppBase() + 0x51DA05C))(this);
	}
	template <typename T = void> T set_other_player_id(uint64_t value) {
		return ((T (*)(CSGspLikeLikeReq*, uint64_t))(Il2CppBase() + 0x51DA064))(this, value);
	}
	template <typename T = uint64_t> T get_gsp_guid() {
		return ((T (*)(CSGspLikeLikeReq*))(Il2CppBase() + 0x51DA074))(this);
	}
	template <typename T = void> T set_gsp_guid(uint64_t value) {
		return ((T (*)(CSGspLikeLikeReq*, uint64_t))(Il2CppBase() + 0x51DA07C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspLikeLikeReq*, bool))(Il2CppBase() + 0x51DA08C))(this, createIfMissing);
	}

};

}
