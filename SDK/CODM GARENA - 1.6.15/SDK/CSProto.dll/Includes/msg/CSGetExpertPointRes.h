#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetExpertPointRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetExpertPointRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _expert_point() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _expert_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _today_diamond_buy_times() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetExpertPointRes*))(Il2CppBase() + 0x52163AC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetExpertPointRes*, int32_t))(Il2CppBase() + 0x52163B4))(this, value);
	}
	template <typename T = int32_t> T get_expert_point() {
		return ((T (*)(CSGetExpertPointRes*))(Il2CppBase() + 0x52163BC))(this);
	}
	template <typename T = void> T set_expert_point(int32_t value) {
		return ((T (*)(CSGetExpertPointRes*, int32_t))(Il2CppBase() + 0x52163C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_expert_info() {
		return ((T (*)(CSGetExpertPointRes*))(Il2CppBase() + 0x52163CC))(this);
	}
	template <typename T = uint32_t> T get_today_diamond_buy_times() {
		return ((T (*)(CSGetExpertPointRes*))(Il2CppBase() + 0x52163D4))(this);
	}
	template <typename T = void> T set_today_diamond_buy_times(uint32_t value) {
		return ((T (*)(CSGetExpertPointRes*, uint32_t))(Il2CppBase() + 0x52163DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetExpertPointRes*, bool))(Il2CppBase() + 0x52163E4))(this, createIfMissing);
	}

};

}
