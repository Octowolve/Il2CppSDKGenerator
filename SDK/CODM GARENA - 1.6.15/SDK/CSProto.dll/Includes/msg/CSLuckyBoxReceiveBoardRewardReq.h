#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxReceiveBoardRewardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxReceiveBoardRewardReq"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _receive_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardReq*))(Il2CppBase() + 0x51EFCF4))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardReq*, uint32_t))(Il2CppBase() + 0x51EFCFC))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_receive_list() {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardReq*))(Il2CppBase() + 0x51EFD04))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardReq*, bool))(Il2CppBase() + 0x51EFD0C))(this, createIfMissing);
	}

};

}
