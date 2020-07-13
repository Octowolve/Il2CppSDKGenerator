#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PerkStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PerkStatis"));
	}

	template <typename T = uint64_t> T& _perk_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _perk_total_kills() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_perk_id() {
		return ((T (*)(PerkStatis*))(Il2CppBase() + 0x4EA60D0))(this);
	}
	template <typename T = void> T set_perk_id(uint64_t value) {
		return ((T (*)(PerkStatis*, uint64_t))(Il2CppBase() + 0x4EA60D8))(this, value);
	}
	template <typename T = uint32_t> T get_perk_total_kills() {
		return ((T (*)(PerkStatis*))(Il2CppBase() + 0x4EA60E8))(this);
	}
	template <typename T = void> T set_perk_total_kills(uint32_t value) {
		return ((T (*)(PerkStatis*, uint32_t))(Il2CppBase() + 0x4EA60F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PerkStatis*, bool))(Il2CppBase() + 0x4EA60F8))(this, createIfMissing);
	}

};

}
