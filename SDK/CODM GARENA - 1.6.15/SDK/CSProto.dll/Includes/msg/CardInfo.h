#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CardInfo"));
	}

	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _obtain_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _main_weapon_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _vice_weapon_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _grenades() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _ovr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _rankid() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _produced_card() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DCDC))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(CardInfo*, uint64_t))(Il2CppBase() + 0x516DCE4))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DCF4))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CardInfo*, int32_t))(Il2CppBase() + 0x516DCFC))(this, value);
	}
	template <typename T = uint32_t> T get_obtain_time() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD04))(this);
	}
	template <typename T = void> T set_obtain_time(uint32_t value) {
		return ((T (*)(CardInfo*, uint32_t))(Il2CppBase() + 0x516DD0C))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD14))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CardInfo*, int32_t))(Il2CppBase() + 0x516DD1C))(this, value);
	}
	template <typename T = uint32_t> T get_main_weapon_id() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD24))(this);
	}
	template <typename T = void> T set_main_weapon_id(uint32_t value) {
		return ((T (*)(CardInfo*, uint32_t))(Il2CppBase() + 0x516DD2C))(this, value);
	}
	template <typename T = uint32_t> T get_vice_weapon_id() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD34))(this);
	}
	template <typename T = void> T set_vice_weapon_id(uint32_t value) {
		return ((T (*)(CardInfo*, uint32_t))(Il2CppBase() + 0x516DD3C))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_grenades() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD44))(this);
	}
	template <typename T = int32_t> T get_ovr() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD4C))(this);
	}
	template <typename T = void> T set_ovr(int32_t value) {
		return ((T (*)(CardInfo*, int32_t))(Il2CppBase() + 0x516DD54))(this, value);
	}
	template <typename T = int32_t> T get_rankid() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD5C))(this);
	}
	template <typename T = void> T set_rankid(int32_t value) {
		return ((T (*)(CardInfo*, int32_t))(Il2CppBase() + 0x516DD64))(this, value);
	}
	template <typename T = uint32_t> T get_produced_card() {
		return ((T (*)(CardInfo*))(Il2CppBase() + 0x516DD6C))(this);
	}
	template <typename T = void> T set_produced_card(uint32_t value) {
		return ((T (*)(CardInfo*, uint32_t))(Il2CppBase() + 0x516DD74))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CardInfo*, bool))(Il2CppBase() + 0x516DD7C))(this, createIfMissing);
	}

};

}
