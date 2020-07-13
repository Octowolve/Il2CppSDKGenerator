#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetHideInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetHideInfoRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSSetHideInfoRes*))(Il2CppBase() + 0x51E19B4))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSSetHideInfoRes*, uint32_t))(Il2CppBase() + 0x51E19BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetHideInfoRes*, bool))(Il2CppBase() + 0x51E19C4))(this, createIfMissing);
	}

};

}
