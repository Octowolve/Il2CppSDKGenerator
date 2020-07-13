#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChallengeCardProp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChallengeCardProp"));
	}

	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _probability() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _is_rare() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _rare_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(ChallengeCardProp*))(Il2CppBase() + 0x516E0D0))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(ChallengeCardProp*, uintptr_t))(Il2CppBase() + 0x516E0D8))(this, value);
	}
	template <typename T = int32_t> T get_probability() {
		return ((T (*)(ChallengeCardProp*))(Il2CppBase() + 0x516E0E0))(this);
	}
	template <typename T = void> T set_probability(int32_t value) {
		return ((T (*)(ChallengeCardProp*, int32_t))(Il2CppBase() + 0x516E0E8))(this, value);
	}
	template <typename T = int32_t> T get_is_rare() {
		return ((T (*)(ChallengeCardProp*))(Il2CppBase() + 0x516E0F0))(this);
	}
	template <typename T = void> T set_is_rare(int32_t value) {
		return ((T (*)(ChallengeCardProp*, int32_t))(Il2CppBase() + 0x516E0F8))(this, value);
	}
	template <typename T = int32_t> T get_rare_value() {
		return ((T (*)(ChallengeCardProp*))(Il2CppBase() + 0x516E100))(this);
	}
	template <typename T = void> T set_rare_value(int32_t value) {
		return ((T (*)(ChallengeCardProp*, int32_t))(Il2CppBase() + 0x516E108))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChallengeCardProp*, bool))(Il2CppBase() + 0x516E110))(this, createIfMissing);
	}

};

}
