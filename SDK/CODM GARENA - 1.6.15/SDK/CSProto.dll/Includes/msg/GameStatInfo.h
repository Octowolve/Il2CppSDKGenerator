#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameStatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameStatInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _game_type_stat() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _selected_medalId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _triple_kill() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _frenzy_kill() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _ultra_kill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _first_ace() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _lethal_knife() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _zombie_state() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _apvp_state() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _tenfold_kill() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<int32_t>*> T& _selected_medals_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_game_type_stat() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CCFD4))(this);
	}
	template <typename T = int32_t> T get_selected_medalId() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CCFDC))(this);
	}
	template <typename T = void> T set_selected_medalId(int32_t value) {
		return ((T (*)(GameStatInfo*, int32_t))(Il2CppBase() + 0x50CCFE4))(this, value);
	}
	template <typename T = int32_t> T get_triple_kill() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CCFEC))(this);
	}
	template <typename T = void> T set_triple_kill(int32_t value) {
		return ((T (*)(GameStatInfo*, int32_t))(Il2CppBase() + 0x50CCFF4))(this, value);
	}
	template <typename T = int32_t> T get_frenzy_kill() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CCFFC))(this);
	}
	template <typename T = void> T set_frenzy_kill(int32_t value) {
		return ((T (*)(GameStatInfo*, int32_t))(Il2CppBase() + 0x50CD004))(this, value);
	}
	template <typename T = int32_t> T get_ultra_kill() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CD00C))(this);
	}
	template <typename T = void> T set_ultra_kill(int32_t value) {
		return ((T (*)(GameStatInfo*, int32_t))(Il2CppBase() + 0x50CD014))(this, value);
	}
	template <typename T = int32_t> T get_first_ace() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CD01C))(this);
	}
	template <typename T = void> T set_first_ace(int32_t value) {
		return ((T (*)(GameStatInfo*, int32_t))(Il2CppBase() + 0x50CD024))(this, value);
	}
	template <typename T = int32_t> T get_lethal_knife() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CD02C))(this);
	}
	template <typename T = void> T set_lethal_knife(int32_t value) {
		return ((T (*)(GameStatInfo*, int32_t))(Il2CppBase() + 0x50CD034))(this, value);
	}
	template <typename T = uintptr_t> T get_zombie_state() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CD03C))(this);
	}
	template <typename T = void> T set_zombie_state(uintptr_t value) {
		return ((T (*)(GameStatInfo*, uintptr_t))(Il2CppBase() + 0x50CD044))(this, value);
	}
	template <typename T = uintptr_t> T get_apvp_state() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CD04C))(this);
	}
	template <typename T = void> T set_apvp_state(uintptr_t value) {
		return ((T (*)(GameStatInfo*, uintptr_t))(Il2CppBase() + 0x50CD054))(this, value);
	}
	template <typename T = int32_t> T get_tenfold_kill() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CD05C))(this);
	}
	template <typename T = void> T set_tenfold_kill(int32_t value) {
		return ((T (*)(GameStatInfo*, int32_t))(Il2CppBase() + 0x50CD064))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_selected_medals_list() {
		return ((T (*)(GameStatInfo*))(Il2CppBase() + 0x50CD06C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameStatInfo*, bool))(Il2CppBase() + 0x50CD074))(this, createIfMissing);
	}

};

}
