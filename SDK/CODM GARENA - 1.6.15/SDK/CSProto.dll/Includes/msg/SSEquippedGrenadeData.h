#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSEquippedGrenadeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSEquippedGrenadeData"));
	}

	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(SSEquippedGrenadeData*))(Il2CppBase() + 0x51A9244))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(SSEquippedGrenadeData*, uint64_t))(Il2CppBase() + 0x51A924C))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(SSEquippedGrenadeData*))(Il2CppBase() + 0x51A925C))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(SSEquippedGrenadeData*, uint32_t))(Il2CppBase() + 0x51A9264))(this, value);
	}
	template <typename T = uint32_t> T get_count() {
		return ((T (*)(SSEquippedGrenadeData*))(Il2CppBase() + 0x51A926C))(this);
	}
	template <typename T = void> T set_count(uint32_t value) {
		return ((T (*)(SSEquippedGrenadeData*, uint32_t))(Il2CppBase() + 0x51A9274))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSEquippedGrenadeData*, bool))(Il2CppBase() + 0x51A927C))(this, createIfMissing);
	}

};

}
