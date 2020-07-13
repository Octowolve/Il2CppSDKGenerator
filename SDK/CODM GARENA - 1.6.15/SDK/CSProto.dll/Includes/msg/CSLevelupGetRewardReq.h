#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLevelupGetRewardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLevelupGetRewardReq"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSLevelupGetRewardReq*))(Il2CppBase() + 0x51399DC))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSLevelupGetRewardReq*, uint32_t))(Il2CppBase() + 0x51399E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLevelupGetRewardReq*, bool))(Il2CppBase() + 0x51399EC))(this, createIfMissing);
	}

};

}
