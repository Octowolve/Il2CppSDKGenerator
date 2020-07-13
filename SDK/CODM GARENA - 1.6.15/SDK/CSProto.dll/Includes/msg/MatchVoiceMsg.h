#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MatchVoiceMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MatchVoiceMsg"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _card_msg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _client_cb_data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _content_type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(MatchVoiceMsg*))(Il2CppBase() + 0x4EA516C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(MatchVoiceMsg*, int32_t))(Il2CppBase() + 0x4EA5174))(this, value);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(MatchVoiceMsg*))(Il2CppBase() + 0x4EA517C))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(MatchVoiceMsg*, int32_t))(Il2CppBase() + 0x4EA5184))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_text() {
		return ((T (*)(MatchVoiceMsg*))(Il2CppBase() + 0x4EA518C))(this);
	}
	template <typename T = void> T set_text(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MatchVoiceMsg*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5194))(this, value);
	}
	template <typename T = uintptr_t> T get_card_msg() {
		return ((T (*)(MatchVoiceMsg*))(Il2CppBase() + 0x4EA519C))(this);
	}
	template <typename T = void> T set_card_msg(uintptr_t value) {
		return ((T (*)(MatchVoiceMsg*, uintptr_t))(Il2CppBase() + 0x4EA51A4))(this, value);
	}
	template <typename T = uint64_t> T get_client_cb_data() {
		return ((T (*)(MatchVoiceMsg*))(Il2CppBase() + 0x4EA51AC))(this);
	}
	template <typename T = void> T set_client_cb_data(uint64_t value) {
		return ((T (*)(MatchVoiceMsg*, uint64_t))(Il2CppBase() + 0x4EA51B4))(this, value);
	}
	template <typename T = int32_t> T get_content_type() {
		return ((T (*)(MatchVoiceMsg*))(Il2CppBase() + 0x4EA51C4))(this);
	}
	template <typename T = void> T set_content_type(int32_t value) {
		return ((T (*)(MatchVoiceMsg*, int32_t))(Il2CppBase() + 0x4EA51CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MatchVoiceMsg*, bool))(Il2CppBase() + 0x4EA51D4))(this, createIfMissing);
	}

};

}
