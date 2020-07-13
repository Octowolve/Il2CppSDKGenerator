#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchAddBotRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchAddBotRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _bot_add() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSRoomMatchAddBotRes*))(Il2CppBase() + 0x51E0528))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSRoomMatchAddBotRes*, int32_t))(Il2CppBase() + 0x51E0530))(this, value);
	}
	template <typename T = int32_t> T get_bot_add() {
		return ((T (*)(CSRoomMatchAddBotRes*))(Il2CppBase() + 0x51E0538))(this);
	}
	template <typename T = void> T set_bot_add(int32_t value) {
		return ((T (*)(CSRoomMatchAddBotRes*, int32_t))(Il2CppBase() + 0x51E0540))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchAddBotRes*, bool))(Il2CppBase() + 0x51E0548))(this, createIfMissing);
	}

};

}
