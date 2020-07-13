#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspLikeLikeNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGspLike_LikeNtf"));
	}

	template <typename T = uint64_t> T& _other_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _other_player_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_other_player_id() {
		return ((T (*)(CSGspLikeLikeNtf*))(Il2CppBase() + 0x51DA018))(this);
	}
	template <typename T = void> T set_other_player_id(uint64_t value) {
		return ((T (*)(CSGspLikeLikeNtf*, uint64_t))(Il2CppBase() + 0x51DA020))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_other_player_name() {
		return ((T (*)(CSGspLikeLikeNtf*))(Il2CppBase() + 0x51DA030))(this);
	}
	template <typename T = void> T set_other_player_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGspLikeLikeNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA038))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspLikeLikeNtf*, bool))(Il2CppBase() + 0x51DA040))(this, createIfMissing);
	}

};

}
