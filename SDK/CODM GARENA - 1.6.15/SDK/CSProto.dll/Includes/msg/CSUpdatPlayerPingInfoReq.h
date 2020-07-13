#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSUpdatPlayerPingInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSUpdatPlayerPingInfoReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(CSUpdatPlayerPingInfoReq*))(Il2CppBase() + 0x51B668C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSUpdatPlayerPingInfoReq*, bool))(Il2CppBase() + 0x51B6694))(this, createIfMissing);
	}

};

}
