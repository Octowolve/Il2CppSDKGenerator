#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPushAnnouncementNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPushAnnouncementNtf"));
	}

	template <typename T = uintptr_t> T& _announcement() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_announcement() {
		return ((T (*)(CSPushAnnouncementNtf*))(Il2CppBase() + 0x51F1C58))(this);
	}
	template <typename T = void> T set_announcement(uintptr_t value) {
		return ((T (*)(CSPushAnnouncementNtf*, uintptr_t))(Il2CppBase() + 0x51F1C60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPushAnnouncementNtf*, bool))(Il2CppBase() + 0x51F1C68))(this, createIfMissing);
	}

};

}
