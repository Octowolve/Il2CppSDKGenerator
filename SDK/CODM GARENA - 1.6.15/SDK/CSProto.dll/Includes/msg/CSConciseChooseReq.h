#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSConciseChooseReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSConciseChooseReq"));
	}

	template <typename T = int32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _concise_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_weapon_id() {
		return ((T (*)(CSConciseChooseReq*))(Il2CppBase() + 0x51D01B0))(this);
	}
	template <typename T = void> T set_weapon_id(int32_t value) {
		return ((T (*)(CSConciseChooseReq*, int32_t))(Il2CppBase() + 0x51D01B8))(this, value);
	}
	template <typename T = uint64_t> T get_weapon_guid() {
		return ((T (*)(CSConciseChooseReq*))(Il2CppBase() + 0x51D01C0))(this);
	}
	template <typename T = void> T set_weapon_guid(uint64_t value) {
		return ((T (*)(CSConciseChooseReq*, uint64_t))(Il2CppBase() + 0x51D01C8))(this, value);
	}
	template <typename T = int32_t> T get_concise_id() {
		return ((T (*)(CSConciseChooseReq*))(Il2CppBase() + 0x51D01D8))(this);
	}
	template <typename T = void> T set_concise_id(int32_t value) {
		return ((T (*)(CSConciseChooseReq*, int32_t))(Il2CppBase() + 0x51D01E0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSConciseChooseReq*, bool))(Il2CppBase() + 0x51D01E8))(this, createIfMissing);
	}

};

}
