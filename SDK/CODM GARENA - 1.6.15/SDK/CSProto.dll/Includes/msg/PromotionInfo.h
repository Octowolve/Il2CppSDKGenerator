#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PromotionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PromotionInfo"));
	}

	template <typename T = bool> T& _is_in_promotion() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _total_game_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _win_game_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _game_record() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _mvp_times() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T get_is_in_promotion() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x506E720))(this);
	}
	template <typename T = void> T set_is_in_promotion(bool value) {
		return ((T (*)(PromotionInfo*, bool))(Il2CppBase() + 0x506E728))(this, value);
	}
	template <typename T = uint32_t> T get_total_game_times() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x506E730))(this);
	}
	template <typename T = void> T set_total_game_times(uint32_t value) {
		return ((T (*)(PromotionInfo*, uint32_t))(Il2CppBase() + 0x506E738))(this, value);
	}
	template <typename T = uint32_t> T get_win_game_times() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x506E740))(this);
	}
	template <typename T = void> T set_win_game_times(uint32_t value) {
		return ((T (*)(PromotionInfo*, uint32_t))(Il2CppBase() + 0x506E748))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_game_record() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x506E750))(this);
	}
	template <typename T = uint32_t> T get_mvp_times() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x506E758))(this);
	}
	template <typename T = void> T set_mvp_times(uint32_t value) {
		return ((T (*)(PromotionInfo*, uint32_t))(Il2CppBase() + 0x506E760))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PromotionInfo*, bool))(Il2CppBase() + 0x506E768))(this, createIfMissing);
	}

};

}
