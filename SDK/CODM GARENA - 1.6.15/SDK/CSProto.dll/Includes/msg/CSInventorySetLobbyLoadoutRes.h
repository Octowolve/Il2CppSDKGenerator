#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventorySetLobbyLoadoutRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventorySetLobbyLoadoutRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _lobby_loadout() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventorySetLobbyLoadoutRes*))(Il2CppBase() + 0x5138478))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventorySetLobbyLoadoutRes*, int32_t))(Il2CppBase() + 0x5138480))(this, value);
	}
	template <typename T = uintptr_t> T get_lobby_loadout() {
		return ((T (*)(CSInventorySetLobbyLoadoutRes*))(Il2CppBase() + 0x5138488))(this);
	}
	template <typename T = void> T set_lobby_loadout(uintptr_t value) {
		return ((T (*)(CSInventorySetLobbyLoadoutRes*, uintptr_t))(Il2CppBase() + 0x5138490))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventorySetLobbyLoadoutRes*, bool))(Il2CppBase() + 0x5138498))(this, createIfMissing);
	}

};

}
