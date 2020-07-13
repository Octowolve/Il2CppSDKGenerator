#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextGetVoiceStateRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextGetVoiceStateRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _voice_state() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountextGetVoiceStateRes*))(Il2CppBase() + 0x516FF40))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountextGetVoiceStateRes*, int32_t))(Il2CppBase() + 0x516FF48))(this, value);
	}
	template <typename T = uintptr_t> T get_voice_state() {
		return ((T (*)(CSAccountextGetVoiceStateRes*))(Il2CppBase() + 0x516FF50))(this);
	}
	template <typename T = void> T set_voice_state(uintptr_t value) {
		return ((T (*)(CSAccountextGetVoiceStateRes*, uintptr_t))(Il2CppBase() + 0x516FF58))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextGetVoiceStateRes*, bool))(Il2CppBase() + 0x516FF60))(this, createIfMissing);
	}

};

}
