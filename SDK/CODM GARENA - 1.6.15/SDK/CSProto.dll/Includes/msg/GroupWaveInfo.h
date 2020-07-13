#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupWaveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupWaveInfo"));
	}

	template <typename T = int32_t> T& _wave_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cards() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_wave_id() {
		return ((T (*)(GroupWaveInfo*))(Il2CppBase() + 0x50CEBA8))(this);
	}
	template <typename T = void> T set_wave_id(int32_t value) {
		return ((T (*)(GroupWaveInfo*, int32_t))(Il2CppBase() + 0x50CEBB0))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(GroupWaveInfo*))(Il2CppBase() + 0x50CEBB8))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(GroupWaveInfo*, uint32_t))(Il2CppBase() + 0x50CEBC0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_cards() {
		return ((T (*)(GroupWaveInfo*))(Il2CppBase() + 0x50CEBC8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupWaveInfo*, bool))(Il2CppBase() + 0x50CEBD0))(this, createIfMissing);
	}

};

}
