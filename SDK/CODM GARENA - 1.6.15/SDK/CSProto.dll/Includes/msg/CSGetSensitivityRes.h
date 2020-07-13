#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetSensitivityRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetSensitivityRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _settings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _PrivacyAgreeStatus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetSensitivityRes*))(Il2CppBase() + 0x5218318))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetSensitivityRes*, int32_t))(Il2CppBase() + 0x5218320))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_settings() {
		return ((T (*)(CSGetSensitivityRes*))(Il2CppBase() + 0x5218328))(this);
	}
	template <typename T = int32_t> T get_PrivacyAgreeStatus() {
		return ((T (*)(CSGetSensitivityRes*))(Il2CppBase() + 0x5218330))(this);
	}
	template <typename T = void> T set_PrivacyAgreeStatus(int32_t value) {
		return ((T (*)(CSGetSensitivityRes*, int32_t))(Il2CppBase() + 0x5218338))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetSensitivityRes*, bool))(Il2CppBase() + 0x5218340))(this, createIfMissing);
	}

};

}
