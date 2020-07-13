#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ItemSkinPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ItemSkinPair"));
	}

	template <typename T = int32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _skin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_item_id() {
		return ((T (*)(ItemSkinPair*))(Il2CppBase() + 0x50D0CC4))(this);
	}
	template <typename T = void> T set_item_id(int32_t value) {
		return ((T (*)(ItemSkinPair*, int32_t))(Il2CppBase() + 0x50D0CCC))(this, value);
	}
	template <typename T = uintptr_t> T get_skin() {
		return ((T (*)(ItemSkinPair*))(Il2CppBase() + 0x50D0CD4))(this);
	}
	template <typename T = void> T set_skin(uintptr_t value) {
		return ((T (*)(ItemSkinPair*, uintptr_t))(Il2CppBase() + 0x50D0CDC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ItemSkinPair*, bool))(Il2CppBase() + 0x50D0CE4))(this, createIfMissing);
	}

};

}
