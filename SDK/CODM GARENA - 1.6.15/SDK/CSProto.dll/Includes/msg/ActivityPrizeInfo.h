#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActivityPrizeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActivityPrizeInfo"));
	}

	template <typename T = int32_t> T& _rank_lower_limit() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _rank_upper_limit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _is_percent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prize_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_rank_lower_limit() {
		return ((T (*)(ActivityPrizeInfo*))(Il2CppBase() + 0x510B108))(this);
	}
	template <typename T = void> T set_rank_lower_limit(int32_t value) {
		return ((T (*)(ActivityPrizeInfo*, int32_t))(Il2CppBase() + 0x510B110))(this, value);
	}
	template <typename T = int32_t> T get_rank_upper_limit() {
		return ((T (*)(ActivityPrizeInfo*))(Il2CppBase() + 0x510B118))(this);
	}
	template <typename T = void> T set_rank_upper_limit(int32_t value) {
		return ((T (*)(ActivityPrizeInfo*, int32_t))(Il2CppBase() + 0x510B120))(this, value);
	}
	template <typename T = bool> T get_is_percent() {
		return ((T (*)(ActivityPrizeInfo*))(Il2CppBase() + 0x510B128))(this);
	}
	template <typename T = void> T set_is_percent(bool value) {
		return ((T (*)(ActivityPrizeInfo*, bool))(Il2CppBase() + 0x510B130))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prize_info() {
		return ((T (*)(ActivityPrizeInfo*))(Il2CppBase() + 0x510B138))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActivityPrizeInfo*, bool))(Il2CppBase() + 0x510B140))(this, createIfMissing);
	}

};

}
