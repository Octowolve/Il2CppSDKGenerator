#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxQueryGroupProbReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxQueryGroupProbReq"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(CSLuckyBoxQueryGroupProbReq*))(Il2CppBase() + 0x51EFA34))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbReq*, uint32_t))(Il2CppBase() + 0x51EFA3C))(this, value);
	}
	template <typename T = int32_t> T get_flag() {
		return ((T (*)(CSLuckyBoxQueryGroupProbReq*))(Il2CppBase() + 0x51EFA44))(this);
	}
	template <typename T = void> T set_flag(int32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbReq*, int32_t))(Il2CppBase() + 0x51EFA4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxQueryGroupProbReq*, bool))(Il2CppBase() + 0x51EFA54))(this, createIfMissing);
	}

};

}
