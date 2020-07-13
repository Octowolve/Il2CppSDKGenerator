#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _invitation_start_timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _invitation_end_timestamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _call_back_start_timestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _call_back_end_timestamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInviteNewbieGetConfRes*))(Il2CppBase() + 0x51391E8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInviteNewbieGetConfRes*, int32_t))(Il2CppBase() + 0x51391F0))(this, value);
	}
	template <typename T = uint64_t> T get_invitation_start_timestamp() {
		return ((T (*)(CSInviteNewbieGetConfRes*))(Il2CppBase() + 0x51391F8))(this);
	}
	template <typename T = void> T set_invitation_start_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetConfRes*, uint64_t))(Il2CppBase() + 0x5139200))(this, value);
	}
	template <typename T = uint64_t> T get_invitation_end_timestamp() {
		return ((T (*)(CSInviteNewbieGetConfRes*))(Il2CppBase() + 0x5139210))(this);
	}
	template <typename T = void> T set_invitation_end_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetConfRes*, uint64_t))(Il2CppBase() + 0x5139218))(this, value);
	}
	template <typename T = uint64_t> T get_call_back_start_timestamp() {
		return ((T (*)(CSInviteNewbieGetConfRes*))(Il2CppBase() + 0x5139228))(this);
	}
	template <typename T = void> T set_call_back_start_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetConfRes*, uint64_t))(Il2CppBase() + 0x5139230))(this, value);
	}
	template <typename T = uint64_t> T get_call_back_end_timestamp() {
		return ((T (*)(CSInviteNewbieGetConfRes*))(Il2CppBase() + 0x5139240))(this);
	}
	template <typename T = void> T set_call_back_end_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetConfRes*, uint64_t))(Il2CppBase() + 0x5139248))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetConfRes*, bool))(Il2CppBase() + 0x5139258))(this, createIfMissing);
	}

};

}
