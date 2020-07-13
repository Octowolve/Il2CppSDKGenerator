#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Bag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Bag"));
	}

	template <typename T = uint64_t> T& _bag_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapons() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _selected() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_suit() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_bag_id() {
		return ((T (*)(Bag*))(Il2CppBase() + 0x510C8D4))(this);
	}
	template <typename T = void> T set_bag_id(uint64_t value) {
		return ((T (*)(Bag*, uint64_t))(Il2CppBase() + 0x510C8DC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapons() {
		return ((T (*)(Bag*))(Il2CppBase() + 0x510C8EC))(this);
	}
	template <typename T = bool> T get_selected() {
		return ((T (*)(Bag*))(Il2CppBase() + 0x510C8F4))(this);
	}
	template <typename T = void> T set_selected(bool value) {
		return ((T (*)(Bag*, bool))(Il2CppBase() + 0x510C8FC))(this, value);
	}
	template <typename T = bool> T get_is_suit() {
		return ((T (*)(Bag*))(Il2CppBase() + 0x510C904))(this);
	}
	template <typename T = void> T set_is_suit(bool value) {
		return ((T (*)(Bag*, bool))(Il2CppBase() + 0x510C90C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Bag*, bool))(Il2CppBase() + 0x510C914))(this, createIfMissing);
	}

};

}
