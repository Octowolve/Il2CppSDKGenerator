#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetGameNickReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetGameNick_Req"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _game_nick() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _client_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_game_nick() {
		return ((T (*)(CSAccountSetGameNickReq*))(Il2CppBase() + 0x5170730))(this);
	}
	template <typename T = void> T set_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountSetGameNickReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170738))(this, value);
	}
	template <typename T = uintptr_t> T get_client_info() {
		return ((T (*)(CSAccountSetGameNickReq*))(Il2CppBase() + 0x5170740))(this);
	}
	template <typename T = void> T set_client_info(uintptr_t value) {
		return ((T (*)(CSAccountSetGameNickReq*, uintptr_t))(Il2CppBase() + 0x5170748))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetGameNickReq*, bool))(Il2CppBase() + 0x5170750))(this, createIfMissing);
	}

};

}
