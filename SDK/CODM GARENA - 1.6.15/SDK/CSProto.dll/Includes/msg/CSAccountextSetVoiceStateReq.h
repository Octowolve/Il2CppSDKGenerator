#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextSetVoiceStateReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextSetVoiceStateReq"));
	}

	template <typename T = uintptr_t> T& _voice_state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_voice_state() {
		return ((T (*)(CSAccountextSetVoiceStateReq*))(Il2CppBase() + 0x517007C))(this);
	}
	template <typename T = void> T set_voice_state(uintptr_t value) {
		return ((T (*)(CSAccountextSetVoiceStateReq*, uintptr_t))(Il2CppBase() + 0x5170084))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextSetVoiceStateReq*, bool))(Il2CppBase() + 0x517008C))(this, createIfMissing);
	}

};

}
