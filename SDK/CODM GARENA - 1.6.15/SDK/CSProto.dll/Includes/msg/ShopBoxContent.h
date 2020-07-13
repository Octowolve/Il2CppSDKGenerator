#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopBoxContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopBoxContent"));
	}

	template <typename T = int32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_box_id() {
		return ((T (*)(ShopBoxContent*))(Il2CppBase() + 0x5072714))(this);
	}
	template <typename T = void> T set_box_id(int32_t value) {
		return ((T (*)(ShopBoxContent*, int32_t))(Il2CppBase() + 0x507271C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_items() {
		return ((T (*)(ShopBoxContent*))(Il2CppBase() + 0x5072724))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopBoxContent*, bool))(Il2CppBase() + 0x507272C))(this, createIfMissing);
	}

};

}
