#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSPlayerClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSPlayerClass"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapons() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _perks() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _grenades() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _role() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _is_restrict_role_and_equip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _selected() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _wingsuit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _camo_pairs() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _vehicle_pairs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skillitem_pairs() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _parachute() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _appearance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _profession_chip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _ce_points() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _ballprof() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _throwing_pairs() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A95FC))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(SSPlayerClass*, int32_t))(Il2CppBase() + 0x51A9604))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A960C))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SSPlayerClass*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9614))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapons() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A961C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_perks() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A9624))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_grenades() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A962C))(this);
	}
	template <typename T = uintptr_t> T get_role() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A9634))(this);
	}
	template <typename T = void> T set_role(uintptr_t value) {
		return ((T (*)(SSPlayerClass*, uintptr_t))(Il2CppBase() + 0x51A963C))(this, value);
	}
	template <typename T = bool> T get_is_restrict_role_and_equip() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A9644))(this);
	}
	template <typename T = void> T set_is_restrict_role_and_equip(bool value) {
		return ((T (*)(SSPlayerClass*, bool))(Il2CppBase() + 0x51A964C))(this, value);
	}
	template <typename T = int32_t> T get_selected() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A9654))(this);
	}
	template <typename T = void> T set_selected(int32_t value) {
		return ((T (*)(SSPlayerClass*, int32_t))(Il2CppBase() + 0x51A965C))(this, value);
	}
	template <typename T = uintptr_t> T get_wingsuit() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A9664))(this);
	}
	template <typename T = void> T set_wingsuit(uintptr_t value) {
		return ((T (*)(SSPlayerClass*, uintptr_t))(Il2CppBase() + 0x51A966C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_camo_pairs() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A9674))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_vehicle_pairs() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A967C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_skillitem_pairs() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A9684))(this);
	}
	template <typename T = uintptr_t> T get_parachute() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A968C))(this);
	}
	template <typename T = void> T set_parachute(uintptr_t value) {
		return ((T (*)(SSPlayerClass*, uintptr_t))(Il2CppBase() + 0x51A9694))(this, value);
	}
	template <typename T = uintptr_t> T get_appearance() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A969C))(this);
	}
	template <typename T = void> T set_appearance(uintptr_t value) {
		return ((T (*)(SSPlayerClass*, uintptr_t))(Il2CppBase() + 0x51A96A4))(this, value);
	}
	template <typename T = uint32_t> T get_profession_chip() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A96AC))(this);
	}
	template <typename T = void> T set_profession_chip(uint32_t value) {
		return ((T (*)(SSPlayerClass*, uint32_t))(Il2CppBase() + 0x51A96B4))(this, value);
	}
	template <typename T = uint32_t> T get_ce_points() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A96BC))(this);
	}
	template <typename T = void> T set_ce_points(uint32_t value) {
		return ((T (*)(SSPlayerClass*, uint32_t))(Il2CppBase() + 0x51A96C4))(this, value);
	}
	template <typename T = uint32_t> T get_ballprof() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A96CC))(this);
	}
	template <typename T = void> T set_ballprof(uint32_t value) {
		return ((T (*)(SSPlayerClass*, uint32_t))(Il2CppBase() + 0x51A96D4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_throwing_pairs() {
		return ((T (*)(SSPlayerClass*))(Il2CppBase() + 0x51A96DC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSPlayerClass*, bool))(Il2CppBase() + 0x51A96E4))(this, createIfMissing);
	}

};

}
