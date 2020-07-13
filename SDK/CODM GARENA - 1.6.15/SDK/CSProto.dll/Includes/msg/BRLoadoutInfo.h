#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRLoadoutInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRLoadoutInfo"));
	}

	template <typename T = uintptr_t> T& _role() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _wingsuit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _melee() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _parachute() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _appearance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _camo_pairs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _vehicle_pairs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skillitem_pairs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _firearm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _professional_chip() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _otheritem_pairs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _throwing_pairs() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_role() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E240))(this);
	}
	template <typename T = void> T set_role(uintptr_t value) {
		return ((T (*)(BRLoadoutInfo*, uintptr_t))(Il2CppBase() + 0x510E248))(this, value);
	}
	template <typename T = uintptr_t> T get_wingsuit() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E250))(this);
	}
	template <typename T = void> T set_wingsuit(uintptr_t value) {
		return ((T (*)(BRLoadoutInfo*, uintptr_t))(Il2CppBase() + 0x510E258))(this, value);
	}
	template <typename T = uintptr_t> T get_melee() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E260))(this);
	}
	template <typename T = void> T set_melee(uintptr_t value) {
		return ((T (*)(BRLoadoutInfo*, uintptr_t))(Il2CppBase() + 0x510E268))(this, value);
	}
	template <typename T = uintptr_t> T get_parachute() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E270))(this);
	}
	template <typename T = void> T set_parachute(uintptr_t value) {
		return ((T (*)(BRLoadoutInfo*, uintptr_t))(Il2CppBase() + 0x510E278))(this, value);
	}
	template <typename T = uintptr_t> T get_appearance() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E280))(this);
	}
	template <typename T = void> T set_appearance(uintptr_t value) {
		return ((T (*)(BRLoadoutInfo*, uintptr_t))(Il2CppBase() + 0x510E288))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_camo_pairs() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E290))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_vehicle_pairs() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E298))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_skillitem_pairs() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E2A0))(this);
	}
	template <typename T = uintptr_t> T get_firearm() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E2A8))(this);
	}
	template <typename T = void> T set_firearm(uintptr_t value) {
		return ((T (*)(BRLoadoutInfo*, uintptr_t))(Il2CppBase() + 0x510E2B0))(this, value);
	}
	template <typename T = uintptr_t> T get_professional_chip() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E2B8))(this);
	}
	template <typename T = void> T set_professional_chip(uintptr_t value) {
		return ((T (*)(BRLoadoutInfo*, uintptr_t))(Il2CppBase() + 0x510E2C0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_otheritem_pairs() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E2C8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_throwing_pairs() {
		return ((T (*)(BRLoadoutInfo*))(Il2CppBase() + 0x510E2D0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRLoadoutInfo*, bool))(Il2CppBase() + 0x510E2D8))(this, createIfMissing);
	}

};

}
