#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchParamInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchParamInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _country_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _show_msg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMatchParamInfoRes*))(Il2CppBase() + 0x51F0A18))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMatchParamInfoRes*, int32_t))(Il2CppBase() + 0x51F0A20))(this, value);
	}
	template <typename T = int32_t> T get_country_id() {
		return ((T (*)(CSMatchParamInfoRes*))(Il2CppBase() + 0x51F0A28))(this);
	}
	template <typename T = void> T set_country_id(int32_t value) {
		return ((T (*)(CSMatchParamInfoRes*, int32_t))(Il2CppBase() + 0x51F0A30))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(CSMatchParamInfoRes*))(Il2CppBase() + 0x51F0A38))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(CSMatchParamInfoRes*, uint32_t))(Il2CppBase() + 0x51F0A40))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_show_msg() {
		return ((T (*)(CSMatchParamInfoRes*))(Il2CppBase() + 0x51F0A48))(this);
	}
	template <typename T = void> T set_show_msg(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSMatchParamInfoRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F0A50))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchParamInfoRes*, bool))(Il2CppBase() + 0x51F0A58))(this, createIfMissing);
	}

};

}
