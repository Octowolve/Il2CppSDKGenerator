#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSEquipOpticData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSEquipOpticData"));
	}

	template <typename T = uint64_t> T& _optic_guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _optic_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _reticle_guid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _reticle_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_optic_guid() {
		return ((T (*)(SSEquipOpticData*))(Il2CppBase() + 0x51A919C))(this);
	}
	template <typename T = void> T set_optic_guid(uint64_t value) {
		return ((T (*)(SSEquipOpticData*, uint64_t))(Il2CppBase() + 0x51A91A4))(this, value);
	}
	template <typename T = uint32_t> T get_optic_id() {
		return ((T (*)(SSEquipOpticData*))(Il2CppBase() + 0x51A91B4))(this);
	}
	template <typename T = void> T set_optic_id(uint32_t value) {
		return ((T (*)(SSEquipOpticData*, uint32_t))(Il2CppBase() + 0x51A91BC))(this, value);
	}
	template <typename T = uint64_t> T get_reticle_guid() {
		return ((T (*)(SSEquipOpticData*))(Il2CppBase() + 0x51A91C4))(this);
	}
	template <typename T = void> T set_reticle_guid(uint64_t value) {
		return ((T (*)(SSEquipOpticData*, uint64_t))(Il2CppBase() + 0x51A91CC))(this, value);
	}
	template <typename T = uint32_t> T get_reticle_id() {
		return ((T (*)(SSEquipOpticData*))(Il2CppBase() + 0x51A91DC))(this);
	}
	template <typename T = void> T set_reticle_id(uint32_t value) {
		return ((T (*)(SSEquipOpticData*, uint32_t))(Il2CppBase() + 0x51A91E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSEquipOpticData*, bool))(Il2CppBase() + 0x51A91EC))(this, createIfMissing);
	}

};

}
