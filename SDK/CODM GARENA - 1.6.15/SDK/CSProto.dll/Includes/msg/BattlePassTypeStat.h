#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BattlePassTypeStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BattlePassTypeStat"));
	}

	template <typename T = uint32_t> T& _pay_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _task_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_pay_type() {
		return ((T (*)(BattlePassTypeStat*))(Il2CppBase() + 0x510D26C))(this);
	}
	template <typename T = void> T set_pay_type(uint32_t value) {
		return ((T (*)(BattlePassTypeStat*, uint32_t))(Il2CppBase() + 0x510D274))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_task_id() {
		return ((T (*)(BattlePassTypeStat*))(Il2CppBase() + 0x510D27C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BattlePassTypeStat*, bool))(Il2CppBase() + 0x510D284))(this, createIfMissing);
	}

};

}
