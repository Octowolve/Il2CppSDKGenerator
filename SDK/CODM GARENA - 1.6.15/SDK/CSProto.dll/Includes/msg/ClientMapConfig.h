#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ClientMapConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ClientMapConfig"));
	}

	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _play_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _thumb_spritename() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _max_player() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _max_obeserver() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _enable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _gamemode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516E9AC))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(ClientMapConfig*, uint32_t))(Il2CppBase() + 0x516E9B4))(this, value);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516E9BC))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(ClientMapConfig*, int32_t))(Il2CppBase() + 0x516E9C4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516E9CC))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientMapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E9D4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_play_type() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516E9DC))(this);
	}
	template <typename T = void> T set_play_type(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientMapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E9E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_thumb_spritename() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516E9EC))(this);
	}
	template <typename T = void> T set_thumb_spritename(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientMapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E9F4))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516E9FC))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(ClientMapConfig*, int32_t))(Il2CppBase() + 0x516EA04))(this, value);
	}
	template <typename T = int32_t> T get_max_player() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516EA0C))(this);
	}
	template <typename T = void> T set_max_player(int32_t value) {
		return ((T (*)(ClientMapConfig*, int32_t))(Il2CppBase() + 0x516EA14))(this, value);
	}
	template <typename T = int32_t> T get_max_obeserver() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516EA1C))(this);
	}
	template <typename T = void> T set_max_obeserver(int32_t value) {
		return ((T (*)(ClientMapConfig*, int32_t))(Il2CppBase() + 0x516EA24))(this, value);
	}
	template <typename T = bool> T get_enable() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516EA2C))(this);
	}
	template <typename T = void> T set_enable(bool value) {
		return ((T (*)(ClientMapConfig*, bool))(Il2CppBase() + 0x516EA34))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_gamemode() {
		return ((T (*)(ClientMapConfig*))(Il2CppBase() + 0x516EA3C))(this);
	}
	template <typename T = void> T set_gamemode(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientMapConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EA44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ClientMapConfig*, bool))(Il2CppBase() + 0x516EA4C))(this, createIfMissing);
	}

};

}
