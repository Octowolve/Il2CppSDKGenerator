#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassGetDataReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassGetDataReq"));
	}

	template <typename T = uintptr_t> T& _task_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _start_page() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _end_page() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_task_type() {
		return ((T (*)(CSBattlePassGetDataReq*))(Il2CppBase() + 0x51E5380))(this);
	}
	template <typename T = void> T set_task_type(uintptr_t value) {
		return ((T (*)(CSBattlePassGetDataReq*, uintptr_t))(Il2CppBase() + 0x51E5388))(this, value);
	}
	template <typename T = int32_t> T get_start_page() {
		return ((T (*)(CSBattlePassGetDataReq*))(Il2CppBase() + 0x51E5390))(this);
	}
	template <typename T = void> T set_start_page(int32_t value) {
		return ((T (*)(CSBattlePassGetDataReq*, int32_t))(Il2CppBase() + 0x51E5398))(this, value);
	}
	template <typename T = int32_t> T get_end_page() {
		return ((T (*)(CSBattlePassGetDataReq*))(Il2CppBase() + 0x51E53A0))(this);
	}
	template <typename T = void> T set_end_page(int32_t value) {
		return ((T (*)(CSBattlePassGetDataReq*, int32_t))(Il2CppBase() + 0x51E53A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassGetDataReq*, bool))(Il2CppBase() + 0x51E53B0))(this, createIfMissing);
	}

};

}
