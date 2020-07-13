#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PrizeInfoNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PrizeInfoNtf"));
	}

	template <typename T = int32_t> T& _gained_exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _award_gold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _add_items() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _award_apvp_gold() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_gained_exp() {
		return ((T (*)(PrizeInfoNtf*))(Il2CppBase() + 0x506E0CC))(this);
	}
	template <typename T = void> T set_gained_exp(int32_t value) {
		return ((T (*)(PrizeInfoNtf*, int32_t))(Il2CppBase() + 0x506E0D4))(this, value);
	}
	template <typename T = int32_t> T get_award_gold() {
		return ((T (*)(PrizeInfoNtf*))(Il2CppBase() + 0x506E0DC))(this);
	}
	template <typename T = void> T set_award_gold(int32_t value) {
		return ((T (*)(PrizeInfoNtf*, int32_t))(Il2CppBase() + 0x506E0E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_add_items() {
		return ((T (*)(PrizeInfoNtf*))(Il2CppBase() + 0x506E0EC))(this);
	}
	template <typename T = int32_t> T get_award_apvp_gold() {
		return ((T (*)(PrizeInfoNtf*))(Il2CppBase() + 0x506E0F4))(this);
	}
	template <typename T = void> T set_award_apvp_gold(int32_t value) {
		return ((T (*)(PrizeInfoNtf*, int32_t))(Il2CppBase() + 0x506E0FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PrizeInfoNtf*, bool))(Il2CppBase() + 0x506E104))(this, createIfMissing);
	}

};

}
