#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PVELoadoutInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PVELoadoutInfo"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _role() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _melee() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _showweapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _appearance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _stickgrenade() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _tripmine() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _offwallconf() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _wonderboxlist() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _mainweapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _showweapon_attr() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _mainweapon_attr() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _melee_attr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F7B8))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(PVELoadoutInfo*, int32_t))(Il2CppBase() + 0x506F7C0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F7C8))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PVELoadoutInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506F7D0))(this, value);
	}
	template <typename T = uintptr_t> T get_role() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F7D8))(this);
	}
	template <typename T = void> T set_role(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F7E0))(this, value);
	}
	template <typename T = uintptr_t> T get_melee() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F7E8))(this);
	}
	template <typename T = void> T set_melee(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F7F0))(this, value);
	}
	template <typename T = uintptr_t> T get_showweapon() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F7F8))(this);
	}
	template <typename T = void> T set_showweapon(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F800))(this, value);
	}
	template <typename T = uintptr_t> T get_appearance() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F808))(this);
	}
	template <typename T = void> T set_appearance(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F810))(this, value);
	}
	template <typename T = uintptr_t> T get_stickgrenade() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F818))(this);
	}
	template <typename T = void> T set_stickgrenade(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F820))(this, value);
	}
	template <typename T = uintptr_t> T get_tripmine() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F828))(this);
	}
	template <typename T = void> T set_tripmine(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F830))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_offwallconf() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F838))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_wonderboxlist() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F840))(this);
	}
	template <typename T = uintptr_t> T get_mainweapon() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F848))(this);
	}
	template <typename T = void> T set_mainweapon(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F850))(this, value);
	}
	template <typename T = uintptr_t> T get_showweapon_attr() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F858))(this);
	}
	template <typename T = void> T set_showweapon_attr(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F860))(this, value);
	}
	template <typename T = uintptr_t> T get_mainweapon_attr() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F868))(this);
	}
	template <typename T = void> T set_mainweapon_attr(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F870))(this, value);
	}
	template <typename T = uintptr_t> T get_melee_attr() {
		return ((T (*)(PVELoadoutInfo*))(Il2CppBase() + 0x506F878))(this);
	}
	template <typename T = void> T set_melee_attr(uintptr_t value) {
		return ((T (*)(PVELoadoutInfo*, uintptr_t))(Il2CppBase() + 0x506F880))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PVELoadoutInfo*, bool))(Il2CppBase() + 0x506F888))(this, createIfMissing);
	}

};

}
