#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassGetDataRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassGetDataRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _battle_pass_db() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _total_page() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _task_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _SeasonCountDownSeconds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBattlePassGetDataRes*))(Il2CppBase() + 0x51E53CC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBattlePassGetDataRes*, int32_t))(Il2CppBase() + 0x51E53D4))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_pass_db() {
		return ((T (*)(CSBattlePassGetDataRes*))(Il2CppBase() + 0x51E53DC))(this);
	}
	template <typename T = void> T set_battle_pass_db(uintptr_t value) {
		return ((T (*)(CSBattlePassGetDataRes*, uintptr_t))(Il2CppBase() + 0x51E53E4))(this, value);
	}
	template <typename T = int32_t> T get_total_page() {
		return ((T (*)(CSBattlePassGetDataRes*))(Il2CppBase() + 0x51E53EC))(this);
	}
	template <typename T = void> T set_total_page(int32_t value) {
		return ((T (*)(CSBattlePassGetDataRes*, int32_t))(Il2CppBase() + 0x51E53F4))(this, value);
	}
	template <typename T = uintptr_t> T get_task_type() {
		return ((T (*)(CSBattlePassGetDataRes*))(Il2CppBase() + 0x51E53FC))(this);
	}
	template <typename T = void> T set_task_type(uintptr_t value) {
		return ((T (*)(CSBattlePassGetDataRes*, uintptr_t))(Il2CppBase() + 0x51E5404))(this, value);
	}
	template <typename T = int32_t> T get_SeasonCountDownSeconds() {
		return ((T (*)(CSBattlePassGetDataRes*))(Il2CppBase() + 0x51E540C))(this);
	}
	template <typename T = void> T set_SeasonCountDownSeconds(int32_t value) {
		return ((T (*)(CSBattlePassGetDataRes*, int32_t))(Il2CppBase() + 0x51E5414))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassGetDataRes*, bool))(Il2CppBase() + 0x51E541C))(this, createIfMissing);
	}

};

}
