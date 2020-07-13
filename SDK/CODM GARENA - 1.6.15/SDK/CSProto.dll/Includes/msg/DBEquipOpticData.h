#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBEquipOpticData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBEquipOpticData"));
	}

	template <typename T = uint64_t> T& _OpticGUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _OpticID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _ReticleGUID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _ReticleID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_OpticGUID() {
		return ((T (*)(DBEquipOpticData*))(Il2CppBase() + 0x51B7AF8))(this);
	}
	template <typename T = void> T set_OpticGUID(uint64_t value) {
		return ((T (*)(DBEquipOpticData*, uint64_t))(Il2CppBase() + 0x51B7B00))(this, value);
	}
	template <typename T = uint32_t> T get_OpticID() {
		return ((T (*)(DBEquipOpticData*))(Il2CppBase() + 0x51B7B10))(this);
	}
	template <typename T = void> T set_OpticID(uint32_t value) {
		return ((T (*)(DBEquipOpticData*, uint32_t))(Il2CppBase() + 0x51B7B18))(this, value);
	}
	template <typename T = uint64_t> T get_ReticleGUID() {
		return ((T (*)(DBEquipOpticData*))(Il2CppBase() + 0x51B7B20))(this);
	}
	template <typename T = void> T set_ReticleGUID(uint64_t value) {
		return ((T (*)(DBEquipOpticData*, uint64_t))(Il2CppBase() + 0x51B7B28))(this, value);
	}
	template <typename T = uint32_t> T get_ReticleID() {
		return ((T (*)(DBEquipOpticData*))(Il2CppBase() + 0x51B7B38))(this);
	}
	template <typename T = void> T set_ReticleID(uint32_t value) {
		return ((T (*)(DBEquipOpticData*, uint32_t))(Il2CppBase() + 0x51B7B40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBEquipOpticData*, bool))(Il2CppBase() + 0x51B7B48))(this, createIfMissing);
	}

};

}
