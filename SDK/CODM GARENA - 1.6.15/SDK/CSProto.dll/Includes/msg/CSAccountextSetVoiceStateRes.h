#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextSetVoiceStateRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextSetVoiceStateRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountextSetVoiceStateRes*))(Il2CppBase() + 0x51700A8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountextSetVoiceStateRes*, int32_t))(Il2CppBase() + 0x51700B0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextSetVoiceStateRes*, bool))(Il2CppBase() + 0x51700B8))(this, createIfMissing);
	}

};

}
