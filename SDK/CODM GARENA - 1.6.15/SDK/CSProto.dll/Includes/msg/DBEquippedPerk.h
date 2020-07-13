#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBEquippedPerk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBEquippedPerk"));
	}

	template <typename T = int32_t> T& _PosIdx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _GUID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_PosIdx() {
		return ((T (*)(DBEquippedPerk*))(Il2CppBase() + 0x51B7BF4))(this);
	}
	template <typename T = void> T set_PosIdx(int32_t value) {
		return ((T (*)(DBEquippedPerk*, int32_t))(Il2CppBase() + 0x51B7BFC))(this, value);
	}
	template <typename T = uint64_t> T get_GUID() {
		return ((T (*)(DBEquippedPerk*))(Il2CppBase() + 0x51B7C04))(this);
	}
	template <typename T = void> T set_GUID(uint64_t value) {
		return ((T (*)(DBEquippedPerk*, uint64_t))(Il2CppBase() + 0x51B7C0C))(this, value);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(DBEquippedPerk*))(Il2CppBase() + 0x51B7C1C))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(DBEquippedPerk*, uint32_t))(Il2CppBase() + 0x51B7C24))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBEquippedPerk*, bool))(Il2CppBase() + 0x51B7C2C))(this, createIfMissing);
	}

};

}
