#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MailAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MailAttachment"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _resources() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _clan_mail_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(MailAttachment*))(Il2CppBase() + 0x4EA464C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_resources() {
		return ((T (*)(MailAttachment*))(Il2CppBase() + 0x4EA4654))(this);
	}
	template <typename T = uintptr_t> T get_clan_mail_info() {
		return ((T (*)(MailAttachment*))(Il2CppBase() + 0x4EA465C))(this);
	}
	template <typename T = void> T set_clan_mail_info(uintptr_t value) {
		return ((T (*)(MailAttachment*, uintptr_t))(Il2CppBase() + 0x4EA4664))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MailAttachment*, bool))(Il2CppBase() + 0x4EA466C))(this, createIfMissing);
	}

};

}
