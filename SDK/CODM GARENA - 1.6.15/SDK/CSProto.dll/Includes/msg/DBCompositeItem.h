#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBCompositeItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBCompositeItem"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _item_duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(DBCompositeItem*))(Il2CppBase() + 0x51B7934))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(DBCompositeItem*, uint32_t))(Il2CppBase() + 0x51B793C))(this, value);
	}
	template <typename T = int32_t> T get_item_num() {
		return ((T (*)(DBCompositeItem*))(Il2CppBase() + 0x51B7944))(this);
	}
	template <typename T = void> T set_item_num(int32_t value) {
		return ((T (*)(DBCompositeItem*, int32_t))(Il2CppBase() + 0x51B794C))(this, value);
	}
	template <typename T = int32_t> T get_item_duration() {
		return ((T (*)(DBCompositeItem*))(Il2CppBase() + 0x51B7954))(this);
	}
	template <typename T = void> T set_item_duration(int32_t value) {
		return ((T (*)(DBCompositeItem*, int32_t))(Il2CppBase() + 0x51B795C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBCompositeItem*, bool))(Il2CppBase() + 0x51B7964))(this, createIfMissing);
	}

};

}
