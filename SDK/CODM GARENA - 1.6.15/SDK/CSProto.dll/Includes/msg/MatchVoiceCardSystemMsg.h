#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MatchVoiceCardSystemMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MatchVoiceCardSystemMsg"));
	}

	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _payed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(MatchVoiceCardSystemMsg*))(Il2CppBase() + 0x4EA5130))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(MatchVoiceCardSystemMsg*, uintptr_t))(Il2CppBase() + 0x4EA5138))(this, value);
	}
	template <typename T = bool> T get_payed() {
		return ((T (*)(MatchVoiceCardSystemMsg*))(Il2CppBase() + 0x4EA5140))(this);
	}
	template <typename T = void> T set_payed(bool value) {
		return ((T (*)(MatchVoiceCardSystemMsg*, bool))(Il2CppBase() + 0x4EA5148))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MatchVoiceCardSystemMsg*, bool))(Il2CppBase() + 0x4EA5150))(this, createIfMissing);
	}

};

}
