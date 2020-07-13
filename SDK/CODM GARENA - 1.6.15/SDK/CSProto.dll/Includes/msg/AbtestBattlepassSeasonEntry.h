#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AbtestBattlepassSeasonEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AbtestBattlepassSeasonEntry"));
	}

	template <typename T = uint32_t> T& _season_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _bp_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _bp_charge() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_season_id() {
		return ((T (*)(AbtestBattlepassSeasonEntry*))(Il2CppBase() + 0x510A498))(this);
	}
	template <typename T = void> T set_season_id(uint32_t value) {
		return ((T (*)(AbtestBattlepassSeasonEntry*, uint32_t))(Il2CppBase() + 0x510A4A0))(this, value);
	}
	template <typename T = uint32_t> T get_bp_level() {
		return ((T (*)(AbtestBattlepassSeasonEntry*))(Il2CppBase() + 0x510A4A8))(this);
	}
	template <typename T = void> T set_bp_level(uint32_t value) {
		return ((T (*)(AbtestBattlepassSeasonEntry*, uint32_t))(Il2CppBase() + 0x510A4B0))(this, value);
	}
	template <typename T = uint32_t> T get_bp_charge() {
		return ((T (*)(AbtestBattlepassSeasonEntry*))(Il2CppBase() + 0x510A4B8))(this);
	}
	template <typename T = void> T set_bp_charge(uint32_t value) {
		return ((T (*)(AbtestBattlepassSeasonEntry*, uint32_t))(Il2CppBase() + 0x510A4C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AbtestBattlepassSeasonEntry*, bool))(Il2CppBase() + 0x510A4C8))(this, createIfMissing);
	}

};

}
