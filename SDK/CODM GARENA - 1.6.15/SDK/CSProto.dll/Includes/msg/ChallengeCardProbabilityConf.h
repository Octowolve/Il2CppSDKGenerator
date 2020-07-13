#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChallengeCardProbabilityConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChallengeCardProbabilityConf"));
	}

	template <typename T = int32_t> T& _card_num() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _card_probability() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_card_num() {
		return ((T (*)(ChallengeCardProbabilityConf*))(Il2CppBase() + 0x516E094))(this);
	}
	template <typename T = void> T set_card_num(int32_t value) {
		return ((T (*)(ChallengeCardProbabilityConf*, int32_t))(Il2CppBase() + 0x516E09C))(this, value);
	}
	template <typename T = int32_t> T get_card_probability() {
		return ((T (*)(ChallengeCardProbabilityConf*))(Il2CppBase() + 0x516E0A4))(this);
	}
	template <typename T = void> T set_card_probability(int32_t value) {
		return ((T (*)(ChallengeCardProbabilityConf*, int32_t))(Il2CppBase() + 0x516E0AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChallengeCardProbabilityConf*, bool))(Il2CppBase() + 0x516E0B4))(this, createIfMissing);
	}

};

}
