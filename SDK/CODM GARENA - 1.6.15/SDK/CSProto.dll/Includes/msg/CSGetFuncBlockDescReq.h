#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFuncBlockDescReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFuncBlockDescReq"));
	}

	template <typename T = uint32_t> T& _channel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_channel() {
		return ((T (*)(CSGetFuncBlockDescReq*))(Il2CppBase() + 0x5216968))(this);
	}
	template <typename T = void> T set_channel(uint32_t value) {
		return ((T (*)(CSGetFuncBlockDescReq*, uint32_t))(Il2CppBase() + 0x5216970))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFuncBlockDescReq*, bool))(Il2CppBase() + 0x5216978))(this, createIfMissing);
	}

};

}
