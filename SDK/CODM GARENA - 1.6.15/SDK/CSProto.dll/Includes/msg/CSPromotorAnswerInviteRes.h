#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorAnswerInviteRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorAnswerInviteRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPromotorAnswerInviteRes*))(Il2CppBase() + 0x51F18B4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPromotorAnswerInviteRes*, int32_t))(Il2CppBase() + 0x51F18BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorAnswerInviteRes*, bool))(Il2CppBase() + 0x51F18C4))(this, createIfMissing);
	}

};

}
