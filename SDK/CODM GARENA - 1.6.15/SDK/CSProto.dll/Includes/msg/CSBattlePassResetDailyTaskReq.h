#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassResetDailyTaskReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassResetDailyTaskReq"));
	}

	template <typename T = uintptr_t> T& _task_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_task_type() {
		return ((T (*)(CSBattlePassResetDailyTaskReq*))(Il2CppBase() + 0x51E5494))(this);
	}
	template <typename T = void> T set_task_type(uintptr_t value) {
		return ((T (*)(CSBattlePassResetDailyTaskReq*, uintptr_t))(Il2CppBase() + 0x51E549C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassResetDailyTaskReq*, bool))(Il2CppBase() + 0x51E54A4))(this, createIfMissing);
	}

};

}
