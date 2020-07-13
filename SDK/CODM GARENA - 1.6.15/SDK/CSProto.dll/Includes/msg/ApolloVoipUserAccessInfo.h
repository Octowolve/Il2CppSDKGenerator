#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ApolloVoipUserAccessInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ApolloVoipUserAccessInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _member_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _room_key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _extra_data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _access_ip_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_open_id() {
		return ((T (*)(ApolloVoipUserAccessInfo*))(Il2CppBase() + 0x510C4F8))(this);
	}
	template <typename T = void> T set_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ApolloVoipUserAccessInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510C500))(this, value);
	}
	template <typename T = uint32_t> T get_member_id() {
		return ((T (*)(ApolloVoipUserAccessInfo*))(Il2CppBase() + 0x510C508))(this);
	}
	template <typename T = void> T set_member_id(uint32_t value) {
		return ((T (*)(ApolloVoipUserAccessInfo*, uint32_t))(Il2CppBase() + 0x510C510))(this, value);
	}
	template <typename T = uint64_t> T get_room_key() {
		return ((T (*)(ApolloVoipUserAccessInfo*))(Il2CppBase() + 0x510C518))(this);
	}
	template <typename T = void> T set_room_key(uint64_t value) {
		return ((T (*)(ApolloVoipUserAccessInfo*, uint64_t))(Il2CppBase() + 0x510C520))(this, value);
	}
	template <typename T = uint64_t> T get_extra_data() {
		return ((T (*)(ApolloVoipUserAccessInfo*))(Il2CppBase() + 0x510C530))(this);
	}
	template <typename T = void> T set_extra_data(uint64_t value) {
		return ((T (*)(ApolloVoipUserAccessInfo*, uint64_t))(Il2CppBase() + 0x510C538))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_access_ip_list() {
		return ((T (*)(ApolloVoipUserAccessInfo*))(Il2CppBase() + 0x510C548))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ApolloVoipUserAccessInfo*, bool))(Il2CppBase() + 0x510C550))(this, createIfMissing);
	}

};

}
