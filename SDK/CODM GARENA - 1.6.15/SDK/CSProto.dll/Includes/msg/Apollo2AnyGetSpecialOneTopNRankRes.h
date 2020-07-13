#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Apollo2AnyGetSpecialOneTopNRankRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Apollo2AnyGetSpecialOneTopNRankRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _rank_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _my_rank_info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _other_rank_info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*))(Il2CppBase() + 0x510C198))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*, int32_t))(Il2CppBase() + 0x510C1A0))(this, value);
	}
	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*))(Il2CppBase() + 0x510C1A8))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*, int32_t))(Il2CppBase() + 0x510C1B0))(this, value);
	}
	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*))(Il2CppBase() + 0x510C1B8))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*, int32_t))(Il2CppBase() + 0x510C1C0))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*))(Il2CppBase() + 0x510C1C8))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*, int32_t))(Il2CppBase() + 0x510C1D0))(this, value);
	}
	template <typename T = int32_t> T get_rank_type() {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*))(Il2CppBase() + 0x510C1D8))(this);
	}
	template <typename T = void> T set_rank_type(int32_t value) {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*, int32_t))(Il2CppBase() + 0x510C1E0))(this, value);
	}
	template <typename T = uintptr_t> T get_my_rank_info() {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*))(Il2CppBase() + 0x510C1E8))(this);
	}
	template <typename T = void> T set_my_rank_info(uintptr_t value) {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*, uintptr_t))(Il2CppBase() + 0x510C1F0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_other_rank_info() {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*))(Il2CppBase() + 0x510C1F8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Apollo2AnyGetSpecialOneTopNRankRes*, bool))(Il2CppBase() + 0x510C200))(this, createIfMissing);
	}

};

}
