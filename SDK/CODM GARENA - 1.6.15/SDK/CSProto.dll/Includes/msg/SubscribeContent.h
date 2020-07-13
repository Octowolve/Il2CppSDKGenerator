#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SubscribeContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SubscribeContent"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _title() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(SubscribeContent*))(Il2CppBase() + 0x51A9AFC))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(SubscribeContent*, int32_t))(Il2CppBase() + 0x51A9B04))(this, value);
	}
	template <typename T = bool> T get_status() {
		return ((T (*)(SubscribeContent*))(Il2CppBase() + 0x51A9B0C))(this);
	}
	template <typename T = void> T set_status(bool value) {
		return ((T (*)(SubscribeContent*, bool))(Il2CppBase() + 0x51A9B14))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(SubscribeContent*))(Il2CppBase() + 0x51A9B1C))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SubscribeContent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9B24))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_title() {
		return ((T (*)(SubscribeContent*))(Il2CppBase() + 0x51A9B2C))(this);
	}
	template <typename T = void> T set_title(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SubscribeContent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9B34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SubscribeContent*, bool))(Il2CppBase() + 0x51A9B3C))(this, createIfMissing);
	}

};

}
