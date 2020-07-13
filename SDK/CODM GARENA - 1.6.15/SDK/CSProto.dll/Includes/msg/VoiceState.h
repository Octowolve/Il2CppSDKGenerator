#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class VoiceState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "VoiceState"));
	}

	template <typename T = int32_t> T& _mic_state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _horn_state() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_mic_state() {
		return ((T (*)(VoiceState*))(Il2CppBase() + 0x51AAD1C))(this);
	}
	template <typename T = void> T set_mic_state(int32_t value) {
		return ((T (*)(VoiceState*, int32_t))(Il2CppBase() + 0x51AAD24))(this, value);
	}
	template <typename T = int32_t> T get_horn_state() {
		return ((T (*)(VoiceState*))(Il2CppBase() + 0x51AAD2C))(this);
	}
	template <typename T = void> T set_horn_state(int32_t value) {
		return ((T (*)(VoiceState*, int32_t))(Il2CppBase() + 0x51AAD34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(VoiceState*, bool))(Il2CppBase() + 0x51AAD3C))(this, createIfMissing);
	}

};

}
