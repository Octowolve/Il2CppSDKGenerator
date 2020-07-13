#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSEquippedPerk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSEquippedPerk"));
	}

	template <typename T = int32_t> T& _pos_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_pos_idx() {
		return ((T (*)(SSEquippedPerk*))(Il2CppBase() + 0x51A9298))(this);
	}
	template <typename T = void> T set_pos_idx(int32_t value) {
		return ((T (*)(SSEquippedPerk*, int32_t))(Il2CppBase() + 0x51A92A0))(this, value);
	}
	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(SSEquippedPerk*))(Il2CppBase() + 0x51A92A8))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(SSEquippedPerk*, uint64_t))(Il2CppBase() + 0x51A92B0))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(SSEquippedPerk*))(Il2CppBase() + 0x51A92C0))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(SSEquippedPerk*, uint32_t))(Il2CppBase() + 0x51A92C8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSEquippedPerk*, bool))(Il2CppBase() + 0x51A92D0))(this, createIfMissing);
	}

};

}
