#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetCustomSettingFlagReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetCustomSettingFlagReq"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSSetCustomSettingFlagReq*))(Il2CppBase() + 0x51E17B4))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSSetCustomSettingFlagReq*, int32_t))(Il2CppBase() + 0x51E17BC))(this, value);
	}
	template <typename T = int32_t> T get_flag() {
		return ((T (*)(CSSetCustomSettingFlagReq*))(Il2CppBase() + 0x51E17C4))(this);
	}
	template <typename T = void> T set_flag(int32_t value) {
		return ((T (*)(CSSetCustomSettingFlagReq*, int32_t))(Il2CppBase() + 0x51E17CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetCustomSettingFlagReq*, bool))(Il2CppBase() + 0x51E17D4))(this, createIfMissing);
	}

};

}
