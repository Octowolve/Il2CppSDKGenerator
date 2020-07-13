#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchAddBotReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchAddBotReq"));
	}

	template <typename T = int32_t> T& _bot_add() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_bot_add() {
		return ((T (*)(CSRoomMatchAddBotReq*))(Il2CppBase() + 0x51E04FC))(this);
	}
	template <typename T = void> T set_bot_add(int32_t value) {
		return ((T (*)(CSRoomMatchAddBotReq*, int32_t))(Il2CppBase() + 0x51E0504))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchAddBotReq*, bool))(Il2CppBase() + 0x51E050C))(this, createIfMissing);
	}

};

}
