#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopGetBoxContentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopGetBoxContentRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _boxes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSShopGetBoxContentRes*))(Il2CppBase() + 0x51E2318))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSShopGetBoxContentRes*, int32_t))(Il2CppBase() + 0x51E2320))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_boxes() {
		return ((T (*)(CSShopGetBoxContentRes*))(Il2CppBase() + 0x51E2328))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopGetBoxContentRes*, bool))(Il2CppBase() + 0x51E2330))(this, createIfMissing);
	}

};

}
