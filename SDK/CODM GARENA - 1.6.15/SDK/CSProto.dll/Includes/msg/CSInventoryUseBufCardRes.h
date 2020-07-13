#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryUseBufCardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryUseBufCardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cur_buff() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _use_card() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryUseBufCardRes*))(Il2CppBase() + 0x51389D0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryUseBufCardRes*, int32_t))(Il2CppBase() + 0x51389D8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_cur_buff() {
		return ((T (*)(CSInventoryUseBufCardRes*))(Il2CppBase() + 0x51389E0))(this);
	}
	template <typename T = uintptr_t> T get_use_card() {
		return ((T (*)(CSInventoryUseBufCardRes*))(Il2CppBase() + 0x51389E8))(this);
	}
	template <typename T = void> T set_use_card(uintptr_t value) {
		return ((T (*)(CSInventoryUseBufCardRes*, uintptr_t))(Il2CppBase() + 0x51389F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryUseBufCardRes*, bool))(Il2CppBase() + 0x51389F8))(this, createIfMissing);
	}

};

}
