#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetBonusDescReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetBonusDescReq"));
	}

	template <typename T = int32_t> T& _time_zone() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_time_zone() {
		return ((T (*)(CSGspGetBonusDescReq*))(Il2CppBase() + 0x51DF688))(this);
	}
	template <typename T = void> T set_time_zone(int32_t value) {
		return ((T (*)(CSGspGetBonusDescReq*, int32_t))(Il2CppBase() + 0x51DF690))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetBonusDescReq*, bool))(Il2CppBase() + 0x51DF698))(this, createIfMissing);
	}

};

}
