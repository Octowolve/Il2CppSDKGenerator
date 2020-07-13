#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassResetDailyTaskRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassResetDailyTaskRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _battle_pass_db() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _task_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBattlePassResetDailyTaskRes*))(Il2CppBase() + 0x51E54C0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBattlePassResetDailyTaskRes*, int32_t))(Il2CppBase() + 0x51E54C8))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_pass_db() {
		return ((T (*)(CSBattlePassResetDailyTaskRes*))(Il2CppBase() + 0x51E54D0))(this);
	}
	template <typename T = void> T set_battle_pass_db(uintptr_t value) {
		return ((T (*)(CSBattlePassResetDailyTaskRes*, uintptr_t))(Il2CppBase() + 0x51E54D8))(this, value);
	}
	template <typename T = uintptr_t> T get_task_type() {
		return ((T (*)(CSBattlePassResetDailyTaskRes*))(Il2CppBase() + 0x51E54E0))(this);
	}
	template <typename T = void> T set_task_type(uintptr_t value) {
		return ((T (*)(CSBattlePassResetDailyTaskRes*, uintptr_t))(Il2CppBase() + 0x51E54E8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassResetDailyTaskRes*, bool))(Il2CppBase() + 0x51E54F0))(this, createIfMissing);
	}

};

}
