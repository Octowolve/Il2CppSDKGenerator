#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBWeaponData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBWeaponData"));
	}

	template <typename T = uint64_t> T& _WeaponGUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _OpticData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _AttachmentData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _CamoData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_WeaponGUID() {
		return ((T (*)(DBWeaponData*))(Il2CppBase() + 0x5226308))(this);
	}
	template <typename T = void> T set_WeaponGUID(uint64_t value) {
		return ((T (*)(DBWeaponData*, uint64_t))(Il2CppBase() + 0x5226310))(this, value);
	}
	template <typename T = uint32_t> T get_ItemID() {
		return ((T (*)(DBWeaponData*))(Il2CppBase() + 0x5226320))(this);
	}
	template <typename T = void> T set_ItemID(uint32_t value) {
		return ((T (*)(DBWeaponData*, uint32_t))(Il2CppBase() + 0x5226328))(this, value);
	}
	template <typename T = uintptr_t> T get_OpticData() {
		return ((T (*)(DBWeaponData*))(Il2CppBase() + 0x5226330))(this);
	}
	template <typename T = void> T set_OpticData(uintptr_t value) {
		return ((T (*)(DBWeaponData*, uintptr_t))(Il2CppBase() + 0x5226338))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AttachmentData() {
		return ((T (*)(DBWeaponData*))(Il2CppBase() + 0x5226340))(this);
	}
	template <typename T = uintptr_t> T get_CamoData() {
		return ((T (*)(DBWeaponData*))(Il2CppBase() + 0x5226348))(this);
	}
	template <typename T = void> T set_CamoData(uintptr_t value) {
		return ((T (*)(DBWeaponData*, uintptr_t))(Il2CppBase() + 0x5226350))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBWeaponData*, bool))(Il2CppBase() + 0x5226358))(this, createIfMissing);
	}

};

}
