#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxReceiveBoardRewardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxReceiveBoardRewardRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardRes*))(Il2CppBase() + 0x51EFDCC))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardRes*, uint32_t))(Il2CppBase() + 0x51EFDD4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardRes*))(Il2CppBase() + 0x51EFDDC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxReceiveBoardRewardRes*, bool))(Il2CppBase() + 0x51EFDE4))(this, createIfMissing);
	}

};

}
