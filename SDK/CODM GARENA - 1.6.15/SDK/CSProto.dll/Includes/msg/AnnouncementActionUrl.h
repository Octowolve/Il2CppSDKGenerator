#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AnnouncementActionUrl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AnnouncementActionUrl"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(AnnouncementActionUrl*))(Il2CppBase() + 0x510B994))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(AnnouncementActionUrl*, int32_t))(Il2CppBase() + 0x510B99C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_url() {
		return ((T (*)(AnnouncementActionUrl*))(Il2CppBase() + 0x510B9A4))(this);
	}
	template <typename T = void> T set_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AnnouncementActionUrl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B9AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AnnouncementActionUrl*, bool))(Il2CppBase() + 0x510B9B4))(this, createIfMissing);
	}

};

}
