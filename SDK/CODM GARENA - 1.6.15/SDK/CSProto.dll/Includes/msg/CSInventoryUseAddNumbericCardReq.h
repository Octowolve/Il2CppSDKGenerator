#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryUseAddNumbericCardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryUseAddNumbericCardReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _use_card() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _bp_task_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _bp_task_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_use_card() {
		return ((T (*)(CSInventoryUseAddNumbericCardReq*))(Il2CppBase() + 0x513876C))(this);
	}
	template <typename T = uint32_t> T get_bp_task_type() {
		return ((T (*)(CSInventoryUseAddNumbericCardReq*))(Il2CppBase() + 0x5138774))(this);
	}
	template <typename T = void> T set_bp_task_type(uint32_t value) {
		return ((T (*)(CSInventoryUseAddNumbericCardReq*, uint32_t))(Il2CppBase() + 0x513877C))(this, value);
	}
	template <typename T = uint32_t> T get_bp_task_id() {
		return ((T (*)(CSInventoryUseAddNumbericCardReq*))(Il2CppBase() + 0x5138784))(this);
	}
	template <typename T = void> T set_bp_task_id(uint32_t value) {
		return ((T (*)(CSInventoryUseAddNumbericCardReq*, uint32_t))(Il2CppBase() + 0x513878C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryUseAddNumbericCardReq*, bool))(Il2CppBase() + 0x5138794))(this, createIfMissing);
	}

};

}
