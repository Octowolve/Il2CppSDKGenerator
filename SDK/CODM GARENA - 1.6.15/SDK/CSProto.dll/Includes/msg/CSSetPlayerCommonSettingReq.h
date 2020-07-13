#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetPlayerCommonSettingReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetPlayerCommonSettingReq"));
	}

	template <typename T = uint32_t> T& _setting_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _common_setting_page() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_setting_index() {
		return ((T (*)(CSSetPlayerCommonSettingReq*))(Il2CppBase() + 0x51E1B4C))(this);
	}
	template <typename T = void> T set_setting_index(uint32_t value) {
		return ((T (*)(CSSetPlayerCommonSettingReq*, uint32_t))(Il2CppBase() + 0x51E1B54))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_common_setting_page() {
		return ((T (*)(CSSetPlayerCommonSettingReq*))(Il2CppBase() + 0x51E1B5C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetPlayerCommonSettingReq*, bool))(Il2CppBase() + 0x51E1B64))(this, createIfMissing);
	}

};

}
