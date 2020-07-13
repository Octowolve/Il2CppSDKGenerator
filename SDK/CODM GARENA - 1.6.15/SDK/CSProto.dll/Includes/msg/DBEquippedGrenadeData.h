#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBEquippedGrenadeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBEquippedGrenadeData"));
	}

	template <typename T = uint64_t> T& _GUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _PosIdx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_GUID() {
		return ((T (*)(DBEquippedGrenadeData*))(Il2CppBase() + 0x51B7BA0))(this);
	}
	template <typename T = void> T set_GUID(uint64_t value) {
		return ((T (*)(DBEquippedGrenadeData*, uint64_t))(Il2CppBase() + 0x51B7BA8))(this, value);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(DBEquippedGrenadeData*))(Il2CppBase() + 0x51B7BB8))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(DBEquippedGrenadeData*, uint32_t))(Il2CppBase() + 0x51B7BC0))(this, value);
	}
	template <typename T = int32_t> T get_PosIdx() {
		return ((T (*)(DBEquippedGrenadeData*))(Il2CppBase() + 0x51B7BC8))(this);
	}
	template <typename T = void> T set_PosIdx(int32_t value) {
		return ((T (*)(DBEquippedGrenadeData*, int32_t))(Il2CppBase() + 0x51B7BD0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBEquippedGrenadeData*, bool))(Il2CppBase() + 0x51B7BD8))(this, createIfMissing);
	}

};

}
