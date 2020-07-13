#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvViewUIReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvViewUIReq"));
	}

	template <typename T = int32_t> T& _ui_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_ui_id() {
		return ((T (*)(CSActvViewUIReq*))(Il2CppBase() + 0x51E4014))(this);
	}
	template <typename T = void> T set_ui_id(int32_t value) {
		return ((T (*)(CSActvViewUIReq*, int32_t))(Il2CppBase() + 0x51E401C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvViewUIReq*, bool))(Il2CppBase() + 0x51E4024))(this, createIfMissing);
	}

};

}
