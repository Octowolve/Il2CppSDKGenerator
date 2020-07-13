#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyRefreshTokenNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyRefreshTokenNtf"));
	}

	template <typename T = Il2CppString*> T& _access_token() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _pay_token() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_access_token() {
		return ((T (*)(CSLobbyRefreshTokenNtf*))(Il2CppBase() + 0x513B8F4))(this);
	}
	template <typename T = void> T set_access_token(Il2CppString* value) {
		return ((T (*)(CSLobbyRefreshTokenNtf*, Il2CppString*))(Il2CppBase() + 0x513B8FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_pay_token() {
		return ((T (*)(CSLobbyRefreshTokenNtf*))(Il2CppBase() + 0x513B904))(this);
	}
	template <typename T = void> T set_pay_token(Il2CppString* value) {
		return ((T (*)(CSLobbyRefreshTokenNtf*, Il2CppString*))(Il2CppBase() + 0x513B90C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyRefreshTokenNtf*, bool))(Il2CppBase() + 0x513B914))(this, createIfMissing);
	}

};

}
