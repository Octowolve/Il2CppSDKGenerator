#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassConsumeBpCardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassConsumeBpCardReq"));
	}

	template <typename T = uint64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _item_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_item_id() {
		return ((T (*)(CSBattlePassConsumeBpCardReq*))(Il2CppBase() + 0x51E4E88))(this);
	}
	template <typename T = void> T set_item_id(uint64_t value) {
		return ((T (*)(CSBattlePassConsumeBpCardReq*, uint64_t))(Il2CppBase() + 0x51E4E90))(this, value);
	}
	template <typename T = uint64_t> T get_item_guid() {
		return ((T (*)(CSBattlePassConsumeBpCardReq*))(Il2CppBase() + 0x51E4EA0))(this);
	}
	template <typename T = void> T set_item_guid(uint64_t value) {
		return ((T (*)(CSBattlePassConsumeBpCardReq*, uint64_t))(Il2CppBase() + 0x51E4EA8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassConsumeBpCardReq*, bool))(Il2CppBase() + 0x51E4EB8))(this, createIfMissing);
	}

};

}
