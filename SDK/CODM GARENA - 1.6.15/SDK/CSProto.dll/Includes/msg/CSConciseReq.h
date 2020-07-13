#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSConciseReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSConciseReq"));
	}

	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _material() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _concise_num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _lock_flag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(CSConciseReq*))(Il2CppBase() + 0x51D02D4))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(CSConciseReq*, int32_t))(Il2CppBase() + 0x51D02DC))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_guid() {
		return ((T (*)(CSConciseReq*))(Il2CppBase() + 0x51D02E4))(this);
	}
	template <typename T = void> T set_weapon_guid(uint64_t value) {
		return ((T (*)(CSConciseReq*, uint64_t))(Il2CppBase() + 0x51D02EC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_material() {
		return ((T (*)(CSConciseReq*))(Il2CppBase() + 0x51D02FC))(this);
	}
	template <typename T = int32_t> T get_concise_num() {
		return ((T (*)(CSConciseReq*))(Il2CppBase() + 0x51D0304))(this);
	}
	template <typename T = void> T set_concise_num(int32_t value) {
		return ((T (*)(CSConciseReq*, int32_t))(Il2CppBase() + 0x51D030C))(this, value);
	}
	template <typename T = uint32_t> T get_lock_flag() {
		return ((T (*)(CSConciseReq*))(Il2CppBase() + 0x51D0314))(this);
	}
	template <typename T = void> T set_lock_flag(uint32_t value) {
		return ((T (*)(CSConciseReq*, uint32_t))(Il2CppBase() + 0x51D031C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSConciseReq*, bool))(Il2CppBase() + 0x51D0324))(this, createIfMissing);
	}

};

}
