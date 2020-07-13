#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAnnouncementReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAnnouncementReq"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _languageCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSGetAnnouncementReq*))(Il2CppBase() + 0x5215D2C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSGetAnnouncementReq*, int32_t))(Il2CppBase() + 0x5215D34))(this, value);
	}
	template <typename T = uint32_t> T get_languageCode() {
		return ((T (*)(CSGetAnnouncementReq*))(Il2CppBase() + 0x5215D3C))(this);
	}
	template <typename T = void> T set_languageCode(uint32_t value) {
		return ((T (*)(CSGetAnnouncementReq*, uint32_t))(Il2CppBase() + 0x5215D44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAnnouncementReq*, bool))(Il2CppBase() + 0x5215D4C))(this, createIfMissing);
	}

};

}
