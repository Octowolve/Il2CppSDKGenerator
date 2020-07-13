#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetInvitationAwardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetInvitationAwardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _level_props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _total_props() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInviteNewbieGetInvitationAwardRes*))(Il2CppBase() + 0x5139364))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvitationAwardRes*, int32_t))(Il2CppBase() + 0x513936C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_level_props() {
		return ((T (*)(CSInviteNewbieGetInvitationAwardRes*))(Il2CppBase() + 0x5139374))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_total_props() {
		return ((T (*)(CSInviteNewbieGetInvitationAwardRes*))(Il2CppBase() + 0x513937C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetInvitationAwardRes*, bool))(Il2CppBase() + 0x5139384))(this, createIfMissing);
	}

};

}
