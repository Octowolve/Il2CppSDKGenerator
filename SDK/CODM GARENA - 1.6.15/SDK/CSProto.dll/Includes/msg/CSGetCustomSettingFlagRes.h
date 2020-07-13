#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetCustomSettingFlagRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetCustomSettingFlagRes"));
	}

	template <typename T = int32_t> T& _SimpleCustomSettingFlag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _AdvanceCustomSettingFlag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_SimpleCustomSettingFlag() {
		return ((T (*)(CSGetCustomSettingFlagRes*))(Il2CppBase() + 0x5215F4C))(this);
	}
	template <typename T = void> T set_SimpleCustomSettingFlag(int32_t value) {
		return ((T (*)(CSGetCustomSettingFlagRes*, int32_t))(Il2CppBase() + 0x5215F54))(this, value);
	}
	template <typename T = int32_t> T get_AdvanceCustomSettingFlag() {
		return ((T (*)(CSGetCustomSettingFlagRes*))(Il2CppBase() + 0x5215F5C))(this);
	}
	template <typename T = void> T set_AdvanceCustomSettingFlag(int32_t value) {
		return ((T (*)(CSGetCustomSettingFlagRes*, int32_t))(Il2CppBase() + 0x5215F64))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetCustomSettingFlagRes*, bool))(Il2CppBase() + 0x5215F6C))(this, createIfMissing);
	}

};

}
