#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryDefaultLoadoutRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryDefaultLoadoutRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryDefaultLoadoutRes*))(Il2CppBase() + 0x51379D4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryDefaultLoadoutRes*, int32_t))(Il2CppBase() + 0x51379DC))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryDefaultLoadoutRes*))(Il2CppBase() + 0x51379E4))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryDefaultLoadoutRes*, uint32_t))(Il2CppBase() + 0x51379EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryDefaultLoadoutRes*, bool))(Il2CppBase() + 0x51379F4))(this, createIfMissing);
	}

};

}
