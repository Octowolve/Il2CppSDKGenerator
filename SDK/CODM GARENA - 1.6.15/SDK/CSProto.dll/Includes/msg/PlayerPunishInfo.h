#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerPunishInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerPunishInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _punish_item_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _parent_protect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_punish_item_list() {
		return ((T (*)(PlayerPunishInfo*))(Il2CppBase() + 0x4EA8EF4))(this);
	}
	template <typename T = uintptr_t> T get_parent_protect() {
		return ((T (*)(PlayerPunishInfo*))(Il2CppBase() + 0x4EA8EFC))(this);
	}
	template <typename T = void> T set_parent_protect(uintptr_t value) {
		return ((T (*)(PlayerPunishInfo*, uintptr_t))(Il2CppBase() + 0x4EA8F04))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerPunishInfo*, bool))(Il2CppBase() + 0x4EA8F0C))(this, createIfMissing);
	}

};

}
