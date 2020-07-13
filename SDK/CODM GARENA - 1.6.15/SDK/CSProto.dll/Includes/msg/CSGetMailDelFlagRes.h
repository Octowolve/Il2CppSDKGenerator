#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetMailDelFlagRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetMailDelFlagRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _IsDelMail() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetMailDelFlagRes*))(Il2CppBase() + 0x52171A0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetMailDelFlagRes*, int32_t))(Il2CppBase() + 0x52171A8))(this, value);
	}
	template <typename T = bool> T get_IsDelMail() {
		return ((T (*)(CSGetMailDelFlagRes*))(Il2CppBase() + 0x52171B0))(this);
	}
	template <typename T = void> T set_IsDelMail(bool value) {
		return ((T (*)(CSGetMailDelFlagRes*, bool))(Il2CppBase() + 0x52171B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetMailDelFlagRes*, bool))(Il2CppBase() + 0x52171C0))(this, createIfMissing);
	}

};

}
