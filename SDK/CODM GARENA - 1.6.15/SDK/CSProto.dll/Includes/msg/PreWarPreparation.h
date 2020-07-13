#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PreWarPreparation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PreWarPreparation"));
	}

	template <typename T = uint32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _equip_positions() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_mode_id() {
		return ((T (*)(PreWarPreparation*))(Il2CppBase() + 0x506DF78))(this);
	}
	template <typename T = void> T set_mode_id(uint32_t value) {
		return ((T (*)(PreWarPreparation*, uint32_t))(Il2CppBase() + 0x506DF80))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_equip_positions() {
		return ((T (*)(PreWarPreparation*))(Il2CppBase() + 0x506DF88))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PreWarPreparation*, bool))(Il2CppBase() + 0x506DF90))(this, createIfMissing);
	}

};

}
