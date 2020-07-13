#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BpExpItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BpExpItem"));
	}

	template <typename T = int64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int64_t> T get_item_id() {
		return ((T (*)(BpExpItem*))(Il2CppBase() + 0x510DD30))(this);
	}
	template <typename T = void> T set_item_id(int64_t value) {
		return ((T (*)(BpExpItem*, int64_t))(Il2CppBase() + 0x510DD38))(this, value);
	}
	template <typename T = int64_t> T get_expire_time() {
		return ((T (*)(BpExpItem*))(Il2CppBase() + 0x510DD48))(this);
	}
	template <typename T = void> T set_expire_time(int64_t value) {
		return ((T (*)(BpExpItem*, int64_t))(Il2CppBase() + 0x510DD50))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BpExpItem*, bool))(Il2CppBase() + 0x510DD60))(this, createIfMissing);
	}

};

}
