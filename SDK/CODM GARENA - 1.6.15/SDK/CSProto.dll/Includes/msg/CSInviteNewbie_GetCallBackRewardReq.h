#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetCallBackRewardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetCallBackRewardReq"));
	}

	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetCallBackRewardReq*, bool))(Il2CppBase() + 0x513908C))(this, createIfMissing);
	}

};

}
