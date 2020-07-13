#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveEndLessInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveEndLessInfo"));
	}

	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _max_pve_mission_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _max_pve_score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _daily_pve_mission_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _daily_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _daily_max_pve_mission_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(PveEndLessInfo*))(Il2CppBase() + 0x506F338))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(PveEndLessInfo*, uint32_t))(Il2CppBase() + 0x506F340))(this, value);
	}
	template <typename T = uint32_t> T get_max_pve_mission_id() {
		return ((T (*)(PveEndLessInfo*))(Il2CppBase() + 0x506F348))(this);
	}
	template <typename T = void> T set_max_pve_mission_id(uint32_t value) {
		return ((T (*)(PveEndLessInfo*, uint32_t))(Il2CppBase() + 0x506F350))(this, value);
	}
	template <typename T = uint32_t> T get_max_pve_score() {
		return ((T (*)(PveEndLessInfo*))(Il2CppBase() + 0x506F358))(this);
	}
	template <typename T = void> T set_max_pve_score(uint32_t value) {
		return ((T (*)(PveEndLessInfo*, uint32_t))(Il2CppBase() + 0x506F360))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_daily_pve_mission_id() {
		return ((T (*)(PveEndLessInfo*))(Il2CppBase() + 0x506F368))(this);
	}
	template <typename T = uint32_t> T get_daily_time() {
		return ((T (*)(PveEndLessInfo*))(Il2CppBase() + 0x506F370))(this);
	}
	template <typename T = void> T set_daily_time(uint32_t value) {
		return ((T (*)(PveEndLessInfo*, uint32_t))(Il2CppBase() + 0x506F378))(this, value);
	}
	template <typename T = uint32_t> T get_daily_max_pve_mission_id() {
		return ((T (*)(PveEndLessInfo*))(Il2CppBase() + 0x506F380))(this);
	}
	template <typename T = void> T set_daily_max_pve_mission_id(uint32_t value) {
		return ((T (*)(PveEndLessInfo*, uint32_t))(Il2CppBase() + 0x506F388))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveEndLessInfo*, bool))(Il2CppBase() + 0x506F390))(this, createIfMissing);
	}

};

}
