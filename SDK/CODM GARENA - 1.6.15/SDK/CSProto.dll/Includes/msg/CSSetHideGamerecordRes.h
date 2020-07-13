#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetHideGamerecordRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetHideGamerecordRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSSetHideGamerecordRes*))(Il2CppBase() + 0x51E195C))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSSetHideGamerecordRes*, uint32_t))(Il2CppBase() + 0x51E1964))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetHideGamerecordRes*, bool))(Il2CppBase() + 0x51E196C))(this, createIfMissing);
	}

};

}
