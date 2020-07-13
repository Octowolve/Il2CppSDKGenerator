#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgWinCircleSprayItemRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgWinCircleSprayItemRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _wincircle_spray_item() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgWinCircleSprayItemRes*))(Il2CppBase() + 0x5137828))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgWinCircleSprayItemRes*, int32_t))(Il2CppBase() + 0x5137830))(this, value);
	}
	template <typename T = uintptr_t> T get_wincircle_spray_item() {
		return ((T (*)(CSInventoryChgWinCircleSprayItemRes*))(Il2CppBase() + 0x5137838))(this);
	}
	template <typename T = void> T set_wincircle_spray_item(uintptr_t value) {
		return ((T (*)(CSInventoryChgWinCircleSprayItemRes*, uintptr_t))(Il2CppBase() + 0x5137840))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgWinCircleSprayItemRes*, bool))(Il2CppBase() + 0x5137848))(this, createIfMissing);
	}

};

}
