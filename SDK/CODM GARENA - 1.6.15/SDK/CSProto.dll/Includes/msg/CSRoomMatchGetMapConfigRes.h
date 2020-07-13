#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchGetMapConfigRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchGetMapConfigRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mode_configs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _map_configs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSRoomMatchGetMapConfigRes*))(Il2CppBase() + 0x51E06A4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSRoomMatchGetMapConfigRes*, int32_t))(Il2CppBase() + 0x51E06AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mode_configs() {
		return ((T (*)(CSRoomMatchGetMapConfigRes*))(Il2CppBase() + 0x51E06B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_map_configs() {
		return ((T (*)(CSRoomMatchGetMapConfigRes*))(Il2CppBase() + 0x51E06BC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchGetMapConfigRes*, bool))(Il2CppBase() + 0x51E06C4))(this, createIfMissing);
	}

};

}
