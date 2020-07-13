#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ApolloVoipPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ApolloVoipPlayerInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _client_ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(ApolloVoipPlayerInfo*))(Il2CppBase() + 0x510C410))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(ApolloVoipPlayerInfo*, uint64_t))(Il2CppBase() + 0x510C418))(this, value);
	}
	template <typename T = uint32_t> T get_client_ip() {
		return ((T (*)(ApolloVoipPlayerInfo*))(Il2CppBase() + 0x510C428))(this);
	}
	template <typename T = void> T set_client_ip(uint32_t value) {
		return ((T (*)(ApolloVoipPlayerInfo*, uint32_t))(Il2CppBase() + 0x510C430))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ApolloVoipPlayerInfo*, bool))(Il2CppBase() + 0x510C438))(this, createIfMissing);
	}

};

}
