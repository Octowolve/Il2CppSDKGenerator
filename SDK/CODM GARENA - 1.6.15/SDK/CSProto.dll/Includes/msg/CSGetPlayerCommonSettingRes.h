#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerCommonSettingRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerCommonSettingRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_common_setting_page() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayerCommonSettingRes*))(Il2CppBase() + 0x5217888))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayerCommonSettingRes*, int32_t))(Il2CppBase() + 0x5217890))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_common_setting_page() {
		return ((T (*)(CSGetPlayerCommonSettingRes*))(Il2CppBase() + 0x5217898))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerCommonSettingRes*, bool))(Il2CppBase() + 0x52178A0))(this, createIfMissing);
	}

};

}
