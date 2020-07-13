#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspLikeLikeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGspLike_LikeRes"));
	}

	template <typename T = uint64_t> T& _other_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_other_player_id() {
		return ((T (*)(CSGspLikeLikeRes*))(Il2CppBase() + 0x51DA0A8))(this);
	}
	template <typename T = void> T set_other_player_id(uint64_t value) {
		return ((T (*)(CSGspLikeLikeRes*, uint64_t))(Il2CppBase() + 0x51DA0B0))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGspLikeLikeRes*))(Il2CppBase() + 0x51DA0C0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGspLikeLikeRes*, int32_t))(Il2CppBase() + 0x51DA0C8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspLikeLikeRes*, bool))(Il2CppBase() + 0x51DA0D0))(this, createIfMissing);
	}

};

}
