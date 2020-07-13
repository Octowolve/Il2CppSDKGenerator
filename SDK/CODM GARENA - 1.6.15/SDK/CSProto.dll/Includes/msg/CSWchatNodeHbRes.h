#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatNodeHbRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatNodeHbRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSWchatNodeHbRes*))(Il2CppBase() + 0x51B699C))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSWchatNodeHbRes*, uint32_t))(Il2CppBase() + 0x51B69A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatNodeHbRes*, bool))(Il2CppBase() + 0x51B69AC))(this, createIfMissing);
	}

};

}
