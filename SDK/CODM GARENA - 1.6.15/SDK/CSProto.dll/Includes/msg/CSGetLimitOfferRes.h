#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetLimitOfferRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetLimitOfferRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _limitoffer_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetLimitOfferRes*))(Il2CppBase() + 0x5217020))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetLimitOfferRes*, int32_t))(Il2CppBase() + 0x5217028))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_limitoffer_info() {
		return ((T (*)(CSGetLimitOfferRes*))(Il2CppBase() + 0x5217030))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetLimitOfferRes*, bool))(Il2CppBase() + 0x5217038))(this, createIfMissing);
	}

};

}
