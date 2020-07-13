#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerCommonSettingReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerCommonSettingReq"));
	}

	template <typename T = uint32_t> T& _setting_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_setting_index() {
		return ((T (*)(CSGetPlayerCommonSettingReq*))(Il2CppBase() + 0x52177B8))(this);
	}
	template <typename T = void> T set_setting_index(uint32_t value) {
		return ((T (*)(CSGetPlayerCommonSettingReq*, uint32_t))(Il2CppBase() + 0x52177C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerCommonSettingReq*, bool))(Il2CppBase() + 0x52177C8))(this, createIfMissing);
	}

};

}
