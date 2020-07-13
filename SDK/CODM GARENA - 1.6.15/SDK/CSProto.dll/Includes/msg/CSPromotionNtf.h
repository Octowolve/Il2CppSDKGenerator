#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotionNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotionNtf"));
	}

	template <typename T = uint32_t> T& _total_game_times() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _win_game_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _game_record() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _season_no() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _conf_total_game_times() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _conf_win_game_times() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _promotion_final() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _game_mode_valid() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& _promotion_result() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = int32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _is_in_promotion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uint32_t> T get_total_game_times() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F17AC))(this);
	}
	template <typename T = void> T set_total_game_times(uint32_t value) {
		return ((T (*)(CSPromotionNtf*, uint32_t))(Il2CppBase() + 0x51F17B4))(this, value);
	}
	template <typename T = uint32_t> T get_win_game_times() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F17BC))(this);
	}
	template <typename T = void> T set_win_game_times(uint32_t value) {
		return ((T (*)(CSPromotionNtf*, uint32_t))(Il2CppBase() + 0x51F17C4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_game_record() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F17CC))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_game_mode() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F17D4))(this);
	}
	template <typename T = uint32_t> T get_season_no() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F17DC))(this);
	}
	template <typename T = void> T set_season_no(uint32_t value) {
		return ((T (*)(CSPromotionNtf*, uint32_t))(Il2CppBase() + 0x51F17E4))(this, value);
	}
	template <typename T = uint32_t> T get_conf_total_game_times() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F17EC))(this);
	}
	template <typename T = void> T set_conf_total_game_times(uint32_t value) {
		return ((T (*)(CSPromotionNtf*, uint32_t))(Il2CppBase() + 0x51F17F4))(this, value);
	}
	template <typename T = uint32_t> T get_conf_win_game_times() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F17FC))(this);
	}
	template <typename T = void> T set_conf_win_game_times(uint32_t value) {
		return ((T (*)(CSPromotionNtf*, uint32_t))(Il2CppBase() + 0x51F1804))(this, value);
	}
	template <typename T = bool> T get_promotion_final() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F180C))(this);
	}
	template <typename T = void> T set_promotion_final(bool value) {
		return ((T (*)(CSPromotionNtf*, bool))(Il2CppBase() + 0x51F1814))(this, value);
	}
	template <typename T = bool> T get_game_mode_valid() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F181C))(this);
	}
	template <typename T = void> T set_game_mode_valid(bool value) {
		return ((T (*)(CSPromotionNtf*, bool))(Il2CppBase() + 0x51F1824))(this, value);
	}
	template <typename T = bool> T get_promotion_result() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F182C))(this);
	}
	template <typename T = void> T set_promotion_result(bool value) {
		return ((T (*)(CSPromotionNtf*, bool))(Il2CppBase() + 0x51F1834))(this, value);
	}
	template <typename T = int32_t> T get_ladder_score() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F183C))(this);
	}
	template <typename T = void> T set_ladder_score(int32_t value) {
		return ((T (*)(CSPromotionNtf*, int32_t))(Il2CppBase() + 0x51F1844))(this, value);
	}
	template <typename T = int32_t> T get_ladder_level() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F184C))(this);
	}
	template <typename T = void> T set_ladder_level(int32_t value) {
		return ((T (*)(CSPromotionNtf*, int32_t))(Il2CppBase() + 0x51F1854))(this, value);
	}
	template <typename T = bool> T get_is_in_promotion() {
		return ((T (*)(CSPromotionNtf*))(Il2CppBase() + 0x51F185C))(this);
	}
	template <typename T = void> T set_is_in_promotion(bool value) {
		return ((T (*)(CSPromotionNtf*, bool))(Il2CppBase() + 0x51F1864))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotionNtf*, bool))(Il2CppBase() + 0x51F186C))(this, createIfMissing);
	}

};

}
