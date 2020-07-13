#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyQuitMatchReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyQuitMatchReq"));
	}

	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _room_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_reason() {
		return ((T (*)(CSLobbyQuitMatchReq*))(Il2CppBase() + 0x513B7F8))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(CSLobbyQuitMatchReq*, int32_t))(Il2CppBase() + 0x513B800))(this, value);
	}
	template <typename T = int64_t> T get_room_guid() {
		return ((T (*)(CSLobbyQuitMatchReq*))(Il2CppBase() + 0x513B808))(this);
	}
	template <typename T = void> T set_room_guid(int64_t value) {
		return ((T (*)(CSLobbyQuitMatchReq*, int64_t))(Il2CppBase() + 0x513B810))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyQuitMatchReq*, bool))(Il2CppBase() + 0x513B820))(this, createIfMissing);
	}

};

}
