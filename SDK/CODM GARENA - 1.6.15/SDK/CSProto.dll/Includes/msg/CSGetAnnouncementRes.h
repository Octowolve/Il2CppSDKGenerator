#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAnnouncementRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAnnouncementRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _announcements() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetAnnouncementRes*))(Il2CppBase() + 0x5215E0C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetAnnouncementRes*, int32_t))(Il2CppBase() + 0x5215E14))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_announcements() {
		return ((T (*)(CSGetAnnouncementRes*))(Il2CppBase() + 0x5215E1C))(this);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSGetAnnouncementRes*))(Il2CppBase() + 0x5215E24))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSGetAnnouncementRes*, int32_t))(Il2CppBase() + 0x5215E2C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAnnouncementRes*, bool))(Il2CppBase() + 0x5215E34))(this, createIfMissing);
	}

};

}
