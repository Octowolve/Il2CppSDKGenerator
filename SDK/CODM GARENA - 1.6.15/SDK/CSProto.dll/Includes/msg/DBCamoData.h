#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBCamoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBCamoData"));
	}

	template <typename T = uint64_t> T& _GUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _OwnerID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_GUID() {
		return ((T (*)(DBCamoData*))(Il2CppBase() + 0x51B7790))(this);
	}
	template <typename T = void> T set_GUID(uint64_t value) {
		return ((T (*)(DBCamoData*, uint64_t))(Il2CppBase() + 0x51B7798))(this, value);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(DBCamoData*))(Il2CppBase() + 0x51B77A8))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(DBCamoData*, uint32_t))(Il2CppBase() + 0x51B77B0))(this, value);
	}
	template <typename T = uint32_t> T get_OwnerID() {
		return ((T (*)(DBCamoData*))(Il2CppBase() + 0x51B77B8))(this);
	}
	template <typename T = void> T set_OwnerID(uint32_t value) {
		return ((T (*)(DBCamoData*, uint32_t))(Il2CppBase() + 0x51B77C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBCamoData*, bool))(Il2CppBase() + 0x51B77C8))(this, createIfMissing);
	}

};

}
