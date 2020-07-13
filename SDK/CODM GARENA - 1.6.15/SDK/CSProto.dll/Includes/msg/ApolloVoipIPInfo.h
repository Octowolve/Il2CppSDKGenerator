#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ApolloVoipIPInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ApolloVoipIPInfo"));
	}

	template <typename T = uint32_t> T& _ip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _port() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_ip() {
		return ((T (*)(ApolloVoipIPInfo*))(Il2CppBase() + 0x510C3D4))(this);
	}
	template <typename T = void> T set_ip(uint32_t value) {
		return ((T (*)(ApolloVoipIPInfo*, uint32_t))(Il2CppBase() + 0x510C3DC))(this, value);
	}
	template <typename T = uint32_t> T get_port() {
		return ((T (*)(ApolloVoipIPInfo*))(Il2CppBase() + 0x510C3E4))(this);
	}
	template <typename T = void> T set_port(uint32_t value) {
		return ((T (*)(ApolloVoipIPInfo*, uint32_t))(Il2CppBase() + 0x510C3EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ApolloVoipIPInfo*, bool))(Il2CppBase() + 0x510C3F4))(this, createIfMissing);
	}

};

}
