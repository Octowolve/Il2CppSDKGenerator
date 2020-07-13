#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerSendGoldRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerSendGoldRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _punish_item() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPlayerSendGoldRes*))(Il2CppBase() + 0x51F1614))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPlayerSendGoldRes*, int32_t))(Il2CppBase() + 0x51F161C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSPlayerSendGoldRes*))(Il2CppBase() + 0x51F1624))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSPlayerSendGoldRes*))(Il2CppBase() + 0x51F162C))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSPlayerSendGoldRes*, bool))(Il2CppBase() + 0x51F1634))(this, value);
	}
	template <typename T = uintptr_t> T get_punish_item() {
		return ((T (*)(CSPlayerSendGoldRes*))(Il2CppBase() + 0x51F163C))(this);
	}
	template <typename T = void> T set_punish_item(uintptr_t value) {
		return ((T (*)(CSPlayerSendGoldRes*, uintptr_t))(Il2CppBase() + 0x51F1644))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerSendGoldRes*, bool))(Il2CppBase() + 0x51F164C))(this, createIfMissing);
	}

};

}
