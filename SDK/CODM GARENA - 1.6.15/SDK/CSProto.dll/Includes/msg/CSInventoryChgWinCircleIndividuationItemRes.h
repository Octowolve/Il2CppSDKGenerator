#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgWinCircleIndividuationItemRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgWinCircleIndividuationItemRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _wincircle_individuation_item() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemRes*))(Il2CppBase() + 0x51377A8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemRes*, int32_t))(Il2CppBase() + 0x51377B0))(this, value);
	}
	template <typename T = uintptr_t> T get_wincircle_individuation_item() {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemRes*))(Il2CppBase() + 0x51377B8))(this);
	}
	template <typename T = void> T set_wincircle_individuation_item(uintptr_t value) {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemRes*, uintptr_t))(Il2CppBase() + 0x51377C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemRes*, bool))(Il2CppBase() + 0x51377C8))(this, createIfMissing);
	}

};

}
