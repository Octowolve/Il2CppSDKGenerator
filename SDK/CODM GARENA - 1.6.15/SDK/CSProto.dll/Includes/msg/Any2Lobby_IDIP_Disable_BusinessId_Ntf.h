#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2LobbyIDIPDisableBusinessIdNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Lobby_IDIP_Disable_BusinessId_Ntf"));
	}

	template <typename T = int32_t> T& _add_disable_business_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _del_disable_business_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_add_disable_business_id() {
		return ((T (*)(Any2LobbyIDIPDisableBusinessIdNtf*))(Il2CppBase() + 0x510BD7C))(this);
	}
	template <typename T = void> T set_add_disable_business_id(int32_t value) {
		return ((T (*)(Any2LobbyIDIPDisableBusinessIdNtf*, int32_t))(Il2CppBase() + 0x510BD84))(this, value);
	}
	template <typename T = int32_t> T get_del_disable_business_id() {
		return ((T (*)(Any2LobbyIDIPDisableBusinessIdNtf*))(Il2CppBase() + 0x510BD8C))(this);
	}
	template <typename T = void> T set_del_disable_business_id(int32_t value) {
		return ((T (*)(Any2LobbyIDIPDisableBusinessIdNtf*, int32_t))(Il2CppBase() + 0x510BD94))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2LobbyIDIPDisableBusinessIdNtf*, bool))(Il2CppBase() + 0x510BD9C))(this, createIfMissing);
	}

};

}
