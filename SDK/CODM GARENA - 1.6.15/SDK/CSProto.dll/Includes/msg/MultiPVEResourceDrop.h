#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MultiPVEResourceDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MultiPVEResourceDrop"));
	}

	template <typename T = uint32_t> T& _monster_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _res_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _res_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _probability() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _max_drop_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _min_drop_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _multiple() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_monster_id() {
		return ((T (*)(MultiPVEResourceDrop*))(Il2CppBase() + 0x4EA56E0))(this);
	}
	template <typename T = void> T set_monster_id(uint32_t value) {
		return ((T (*)(MultiPVEResourceDrop*, uint32_t))(Il2CppBase() + 0x4EA56E8))(this, value);
	}
	template <typename T = uint32_t> T get_res_type() {
		return ((T (*)(MultiPVEResourceDrop*))(Il2CppBase() + 0x4EA56F0))(this);
	}
	template <typename T = void> T set_res_type(uint32_t value) {
		return ((T (*)(MultiPVEResourceDrop*, uint32_t))(Il2CppBase() + 0x4EA56F8))(this, value);
	}
	template <typename T = uint32_t> T get_res_count() {
		return ((T (*)(MultiPVEResourceDrop*))(Il2CppBase() + 0x4EA5700))(this);
	}
	template <typename T = void> T set_res_count(uint32_t value) {
		return ((T (*)(MultiPVEResourceDrop*, uint32_t))(Il2CppBase() + 0x4EA5708))(this, value);
	}
	template <typename T = uint32_t> T get_probability() {
		return ((T (*)(MultiPVEResourceDrop*))(Il2CppBase() + 0x4EA5710))(this);
	}
	template <typename T = void> T set_probability(uint32_t value) {
		return ((T (*)(MultiPVEResourceDrop*, uint32_t))(Il2CppBase() + 0x4EA5718))(this, value);
	}
	template <typename T = uint32_t> T get_max_drop_count() {
		return ((T (*)(MultiPVEResourceDrop*))(Il2CppBase() + 0x4EA5720))(this);
	}
	template <typename T = void> T set_max_drop_count(uint32_t value) {
		return ((T (*)(MultiPVEResourceDrop*, uint32_t))(Il2CppBase() + 0x4EA5728))(this, value);
	}
	template <typename T = uint32_t> T get_min_drop_count() {
		return ((T (*)(MultiPVEResourceDrop*))(Il2CppBase() + 0x4EA5730))(this);
	}
	template <typename T = void> T set_min_drop_count(uint32_t value) {
		return ((T (*)(MultiPVEResourceDrop*, uint32_t))(Il2CppBase() + 0x4EA5738))(this, value);
	}
	template <typename T = uint32_t> T get_multiple() {
		return ((T (*)(MultiPVEResourceDrop*))(Il2CppBase() + 0x4EA5740))(this);
	}
	template <typename T = void> T set_multiple(uint32_t value) {
		return ((T (*)(MultiPVEResourceDrop*, uint32_t))(Il2CppBase() + 0x4EA5748))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MultiPVEResourceDrop*, bool))(Il2CppBase() + 0x4EA5750))(this, createIfMissing);
	}

};

}
