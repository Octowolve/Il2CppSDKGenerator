#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildNewsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildNewsData"));
	}

	template <typename T = uint32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _operate_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _data1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_create_time() {
		return ((T (*)(GuildNewsData*))(Il2CppBase() + 0x50D0018))(this);
	}
	template <typename T = void> T set_create_time(uint32_t value) {
		return ((T (*)(GuildNewsData*, uint32_t))(Il2CppBase() + 0x50D0020))(this, value);
	}
	template <typename T = uint64_t> T get_operate_player_id() {
		return ((T (*)(GuildNewsData*))(Il2CppBase() + 0x50D0028))(this);
	}
	template <typename T = void> T set_operate_player_id(uint64_t value) {
		return ((T (*)(GuildNewsData*, uint64_t))(Il2CppBase() + 0x50D0030))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(GuildNewsData*))(Il2CppBase() + 0x50D0040))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildNewsData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D0048))(this, value);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(GuildNewsData*))(Il2CppBase() + 0x50D0050))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(GuildNewsData*, uintptr_t))(Il2CppBase() + 0x50D0058))(this, value);
	}
	template <typename T = uint32_t> T get_data1() {
		return ((T (*)(GuildNewsData*))(Il2CppBase() + 0x50D0060))(this);
	}
	template <typename T = void> T set_data1(uint32_t value) {
		return ((T (*)(GuildNewsData*, uint32_t))(Il2CppBase() + 0x50D0068))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildNewsData*, bool))(Il2CppBase() + 0x50D0070))(this, createIfMissing);
	}

};

}
