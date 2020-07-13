#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgScoreStreakReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgScoreStreakReq"));
	}

	template <typename T = uint32_t> T& _old_item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _new_item_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_old_item_id() {
		return ((T (*)(CSInventoryChgScoreStreakReq*))(Il2CppBase() + 0x51375A0))(this);
	}
	template <typename T = void> T set_old_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgScoreStreakReq*, uint32_t))(Il2CppBase() + 0x51375A8))(this, value);
	}
	template <typename T = uint32_t> T get_new_item_id() {
		return ((T (*)(CSInventoryChgScoreStreakReq*))(Il2CppBase() + 0x51375B0))(this);
	}
	template <typename T = void> T set_new_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgScoreStreakReq*, uint32_t))(Il2CppBase() + 0x51375B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgScoreStreakReq*, bool))(Il2CppBase() + 0x51375C0))(this, createIfMissing);
	}

};

}
