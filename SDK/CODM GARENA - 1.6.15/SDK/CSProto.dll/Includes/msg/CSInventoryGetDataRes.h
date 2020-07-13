#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetDataRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetDataRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _InventoryData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryGetDataRes*))(Il2CppBase() + 0x5137BF4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryGetDataRes*, int32_t))(Il2CppBase() + 0x5137BFC))(this, value);
	}
	template <typename T = uintptr_t> T get_InventoryData() {
		return ((T (*)(CSInventoryGetDataRes*))(Il2CppBase() + 0x5137C04))(this);
	}
	template <typename T = void> T set_InventoryData(uintptr_t value) {
		return ((T (*)(CSInventoryGetDataRes*, uintptr_t))(Il2CppBase() + 0x5137C0C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetDataRes*, bool))(Il2CppBase() + 0x5137C14))(this, createIfMissing);
	}

};

}
