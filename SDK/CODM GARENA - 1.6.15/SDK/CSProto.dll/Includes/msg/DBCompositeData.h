#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBCompositeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBCompositeData"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _composite_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(DBCompositeData*))(Il2CppBase() + 0x51B78E0))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(DBCompositeData*, uint32_t))(Il2CppBase() + 0x51B78E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_items() {
		return ((T (*)(DBCompositeData*))(Il2CppBase() + 0x51B78F0))(this);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(DBCompositeData*))(Il2CppBase() + 0x51B78F8))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(DBCompositeData*, uint32_t))(Il2CppBase() + 0x51B7900))(this, value);
	}
	template <typename T = uint32_t> T get_composite_id() {
		return ((T (*)(DBCompositeData*))(Il2CppBase() + 0x51B7908))(this);
	}
	template <typename T = void> T set_composite_id(uint32_t value) {
		return ((T (*)(DBCompositeData*, uint32_t))(Il2CppBase() + 0x51B7910))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBCompositeData*, bool))(Il2CppBase() + 0x51B7918))(this, createIfMissing);
	}

};

}
