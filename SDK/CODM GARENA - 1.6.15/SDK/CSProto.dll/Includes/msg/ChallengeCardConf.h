#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChallengeCardConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChallengeCardConf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _card_probability_confs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _card_prop_confs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _card_cd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_card_probability_confs() {
		return ((T (*)(ChallengeCardConf*))(Il2CppBase() + 0x516E058))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_card_prop_confs() {
		return ((T (*)(ChallengeCardConf*))(Il2CppBase() + 0x516E060))(this);
	}
	template <typename T = int32_t> T get_card_cd() {
		return ((T (*)(ChallengeCardConf*))(Il2CppBase() + 0x516E068))(this);
	}
	template <typename T = void> T set_card_cd(int32_t value) {
		return ((T (*)(ChallengeCardConf*, int32_t))(Il2CppBase() + 0x516E070))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChallengeCardConf*, bool))(Il2CppBase() + 0x516E078))(this, createIfMissing);
	}

};

}
