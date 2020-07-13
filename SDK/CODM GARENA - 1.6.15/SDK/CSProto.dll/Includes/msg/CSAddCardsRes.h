#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAddCardsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAddCardsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _boss_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cards() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAddCardsRes*))(Il2CppBase() + 0x51E4100))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAddCardsRes*, int32_t))(Il2CppBase() + 0x51E4108))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSAddCardsRes*))(Il2CppBase() + 0x51E4110))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSAddCardsRes*, uint32_t))(Il2CppBase() + 0x51E4118))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSAddCardsRes*))(Il2CppBase() + 0x51E4120))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSAddCardsRes*, uint32_t))(Il2CppBase() + 0x51E4128))(this, value);
	}
	template <typename T = uint32_t> T get_boss_id() {
		return ((T (*)(CSAddCardsRes*))(Il2CppBase() + 0x51E4130))(this);
	}
	template <typename T = void> T set_boss_id(uint32_t value) {
		return ((T (*)(CSAddCardsRes*, uint32_t))(Il2CppBase() + 0x51E4138))(this, value);
	}
	template <typename T = int32_t> T get_rank() {
		return ((T (*)(CSAddCardsRes*))(Il2CppBase() + 0x51E4140))(this);
	}
	template <typename T = void> T set_rank(int32_t value) {
		return ((T (*)(CSAddCardsRes*, int32_t))(Il2CppBase() + 0x51E4148))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_cards() {
		return ((T (*)(CSAddCardsRes*))(Il2CppBase() + 0x51E4150))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAddCardsRes*, bool))(Il2CppBase() + 0x51E4158))(this, createIfMissing);
	}

};

}
