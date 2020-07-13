#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UseIndividuationItemStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UseIndividuationItemStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _use_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _player_pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(UseIndividuationItemStatis*))(Il2CppBase() + 0x51AAA40))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(UseIndividuationItemStatis*, uint32_t))(Il2CppBase() + 0x51AAA48))(this, value);
	}
	template <typename T = uint32_t> T get_use_times() {
		return ((T (*)(UseIndividuationItemStatis*))(Il2CppBase() + 0x51AAA50))(this);
	}
	template <typename T = void> T set_use_times(uint32_t value) {
		return ((T (*)(UseIndividuationItemStatis*, uint32_t))(Il2CppBase() + 0x51AAA58))(this, value);
	}
	template <typename T = uintptr_t> T get_player_pos() {
		return ((T (*)(UseIndividuationItemStatis*))(Il2CppBase() + 0x51AAA60))(this);
	}
	template <typename T = void> T set_player_pos(uintptr_t value) {
		return ((T (*)(UseIndividuationItemStatis*, uintptr_t))(Il2CppBase() + 0x51AAA68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UseIndividuationItemStatis*, bool))(Il2CppBase() + 0x51AAA70))(this, createIfMissing);
	}

};

}
