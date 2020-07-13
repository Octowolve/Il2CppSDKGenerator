#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyGetServerInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyGetServerInfoRes"));
	}

	template <typename T = uint32_t> T& _revision() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _innerip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_revision() {
		return ((T (*)(CSLobbyGetServerInfoRes*))(Il2CppBase() + 0x513AC30))(this);
	}
	template <typename T = void> T set_revision(uint32_t value) {
		return ((T (*)(CSLobbyGetServerInfoRes*, uint32_t))(Il2CppBase() + 0x513AC38))(this, value);
	}
	template <typename T = Il2CppString*> T get_innerip() {
		return ((T (*)(CSLobbyGetServerInfoRes*))(Il2CppBase() + 0x513AC40))(this);
	}
	template <typename T = void> T set_innerip(Il2CppString* value) {
		return ((T (*)(CSLobbyGetServerInfoRes*, Il2CppString*))(Il2CppBase() + 0x513AC48))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyGetServerInfoRes*, bool))(Il2CppBase() + 0x513AC50))(this, createIfMissing);
	}

};

}
