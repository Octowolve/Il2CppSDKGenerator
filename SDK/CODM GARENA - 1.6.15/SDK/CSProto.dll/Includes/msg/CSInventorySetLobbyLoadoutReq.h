#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventorySetLobbyLoadoutReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventorySetLobbyLoadoutReq"));
	}

	template <typename T = uintptr_t> T& _lobby_loadout() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_lobby_loadout() {
		return ((T (*)(CSInventorySetLobbyLoadoutReq*))(Il2CppBase() + 0x513844C))(this);
	}
	template <typename T = void> T set_lobby_loadout(uintptr_t value) {
		return ((T (*)(CSInventorySetLobbyLoadoutReq*, uintptr_t))(Il2CppBase() + 0x5138454))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventorySetLobbyLoadoutReq*, bool))(Il2CppBase() + 0x513845C))(this, createIfMissing);
	}

};

}
