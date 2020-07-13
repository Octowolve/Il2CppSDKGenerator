#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerSendGoldReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerSendGoldReq"));
	}

	template <typename T = uint64_t> T& _target_friend_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_target_friend_id() {
		return ((T (*)(CSPlayerSendGoldReq*))(Il2CppBase() + 0x51F152C))(this);
	}
	template <typename T = void> T set_target_friend_id(uint64_t value) {
		return ((T (*)(CSPlayerSendGoldReq*, uint64_t))(Il2CppBase() + 0x51F1534))(this, value);
	}
	template <typename T = uint32_t> T get_friend_type() {
		return ((T (*)(CSPlayerSendGoldReq*))(Il2CppBase() + 0x51F1544))(this);
	}
	template <typename T = void> T set_friend_type(uint32_t value) {
		return ((T (*)(CSPlayerSendGoldReq*, uint32_t))(Il2CppBase() + 0x51F154C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerSendGoldReq*, bool))(Il2CppBase() + 0x51F1554))(this, createIfMissing);
	}

};

}
