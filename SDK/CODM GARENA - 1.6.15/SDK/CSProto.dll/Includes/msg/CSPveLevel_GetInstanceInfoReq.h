#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetInstanceInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetInstanceInfoReq"));
	}

	template <typename T = int32_t> T& _instance_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_instance_id() {
		return ((T (*)(CSPveLevelGetInstanceInfoReq*))(Il2CppBase() + 0x51F1EAC))(this);
	}
	template <typename T = void> T set_instance_id(int32_t value) {
		return ((T (*)(CSPveLevelGetInstanceInfoReq*, int32_t))(Il2CppBase() + 0x51F1EB4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetInstanceInfoReq*, bool))(Il2CppBase() + 0x51F1EBC))(this, createIfMissing);
	}

};

}
