#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerCardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerCardInfo"));
	}

	template <typename T = uint32_t> T& _card_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cards() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_card_index() {
		return ((T (*)(PlayerCardInfo*))(Il2CppBase() + 0x4EA65C8))(this);
	}
	template <typename T = void> T set_card_index(uint32_t value) {
		return ((T (*)(PlayerCardInfo*, uint32_t))(Il2CppBase() + 0x4EA65D0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_cards() {
		return ((T (*)(PlayerCardInfo*))(Il2CppBase() + 0x4EA65D8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerCardInfo*, bool))(Il2CppBase() + 0x4EA65E0))(this, createIfMissing);
	}

};

}
