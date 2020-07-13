#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerCommonSettingPage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerCommonSettingPage"));
	}

	template <typename T = Il2CppList<int32_t>*> T& _common_setting_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<int32_t>*> T get_common_setting_info() {
		return ((T (*)(CSPlayerCommonSettingPage*))(Il2CppBase() + 0x51F12F0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerCommonSettingPage*, bool))(Il2CppBase() + 0x51F12F8))(this, createIfMissing);
	}

};

}
