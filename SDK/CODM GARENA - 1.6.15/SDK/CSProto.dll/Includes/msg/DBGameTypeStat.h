#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBGameTypeStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBGameTypeStat"));
	}

	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _times_win() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _times_draw() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _times_lose() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _times_game() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _total_score() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _top_score() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _times_shot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _times_hit_target() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _times_be_killed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _times_headshot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _times_assist() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_stat() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _medals() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _times_mvp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B8154))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(DBGameTypeStat*, int32_t))(Il2CppBase() + 0x51B815C))(this, value);
	}
	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B8164))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(DBGameTypeStat*, int32_t))(Il2CppBase() + 0x51B816C))(this, value);
	}
	template <typename T = uint64_t> T get_map_id() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B8174))(this);
	}
	template <typename T = void> T set_map_id(uint64_t value) {
		return ((T (*)(DBGameTypeStat*, uint64_t))(Il2CppBase() + 0x51B817C))(this, value);
	}
	template <typename T = uint32_t> T get_times_win() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B818C))(this);
	}
	template <typename T = void> T set_times_win(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8194))(this, value);
	}
	template <typename T = uint32_t> T get_times_draw() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B819C))(this);
	}
	template <typename T = void> T set_times_draw(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B81A4))(this, value);
	}
	template <typename T = uint32_t> T get_times_lose() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B81AC))(this);
	}
	template <typename T = void> T set_times_lose(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B81B4))(this, value);
	}
	template <typename T = uint32_t> T get_times_game() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B81BC))(this);
	}
	template <typename T = void> T set_times_game(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B81C4))(this, value);
	}
	template <typename T = uint32_t> T get_total_score() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B81CC))(this);
	}
	template <typename T = void> T set_total_score(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B81D4))(this, value);
	}
	template <typename T = uint32_t> T get_top_score() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B81DC))(this);
	}
	template <typename T = void> T set_top_score(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B81E4))(this, value);
	}
	template <typename T = uint32_t> T get_times_shot() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B81EC))(this);
	}
	template <typename T = void> T set_times_shot(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B81F4))(this, value);
	}
	template <typename T = uint32_t> T get_times_hit_target() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B81FC))(this);
	}
	template <typename T = void> T set_times_hit_target(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8204))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B820C))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8214))(this, value);
	}
	template <typename T = uint32_t> T get_times_be_killed() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B821C))(this);
	}
	template <typename T = void> T set_times_be_killed(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8224))(this, value);
	}
	template <typename T = uint32_t> T get_times_headshot() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B822C))(this);
	}
	template <typename T = void> T set_times_headshot(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8234))(this, value);
	}
	template <typename T = uint32_t> T get_times_assist() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B823C))(this);
	}
	template <typename T = void> T set_times_assist(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8244))(this, value);
	}
	template <typename T = uint32_t> T get_game_time() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B824C))(this);
	}
	template <typename T = void> T set_game_time(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8254))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_stat() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B825C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_medals() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B8264))(this);
	}
	template <typename T = uint32_t> T get_times_mvp() {
		return ((T (*)(DBGameTypeStat*))(Il2CppBase() + 0x51B826C))(this);
	}
	template <typename T = void> T set_times_mvp(uint32_t value) {
		return ((T (*)(DBGameTypeStat*, uint32_t))(Il2CppBase() + 0x51B8274))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBGameTypeStat*, bool))(Il2CppBase() + 0x51B827C))(this, createIfMissing);
	}

};

}
