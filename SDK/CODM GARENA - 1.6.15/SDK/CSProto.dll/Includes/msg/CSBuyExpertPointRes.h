#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBuyExpertPointRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBuyExpertPointRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _buy_times_today() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _crit_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& _expert_point_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBuyExpertPointRes*))(Il2CppBase() + 0x51E5854))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBuyExpertPointRes*, int32_t))(Il2CppBase() + 0x51E585C))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSBuyExpertPointRes*))(Il2CppBase() + 0x51E5864))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSBuyExpertPointRes*, uintptr_t))(Il2CppBase() + 0x51E586C))(this, value);
	}
	template <typename T = int32_t> T get_buy_times_today() {
		return ((T (*)(CSBuyExpertPointRes*))(Il2CppBase() + 0x51E5874))(this);
	}
	template <typename T = void> T set_buy_times_today(int32_t value) {
		return ((T (*)(CSBuyExpertPointRes*, int32_t))(Il2CppBase() + 0x51E587C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_crit_value() {
		return ((T (*)(CSBuyExpertPointRes*))(Il2CppBase() + 0x51E5884))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_expert_point_value() {
		return ((T (*)(CSBuyExpertPointRes*))(Il2CppBase() + 0x51E588C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBuyExpertPointRes*, bool))(Il2CppBase() + 0x51E5894))(this, createIfMissing);
	}

};

}
