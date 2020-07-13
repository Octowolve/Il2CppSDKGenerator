#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChallengeCardPropConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChallengeCardPropConf"));
	}

	template <typename T = uint64_t> T& _card_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _card_props() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_card_id() {
		return ((T (*)(ChallengeCardPropConf*))(Il2CppBase() + 0x516E1D0))(this);
	}
	template <typename T = void> T set_card_id(uint64_t value) {
		return ((T (*)(ChallengeCardPropConf*, uint64_t))(Il2CppBase() + 0x516E1D8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_card_props() {
		return ((T (*)(ChallengeCardPropConf*))(Il2CppBase() + 0x516E1E8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChallengeCardPropConf*, bool))(Il2CppBase() + 0x516E1F0))(this, createIfMissing);
	}

};

}
