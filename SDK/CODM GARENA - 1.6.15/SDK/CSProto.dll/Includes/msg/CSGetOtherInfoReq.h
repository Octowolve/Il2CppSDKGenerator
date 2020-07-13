#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetOtherInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetOtherInfoReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _source() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sign() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGetOtherInfoReq*))(Il2CppBase() + 0x52174B0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGetOtherInfoReq*, uint64_t))(Il2CppBase() + 0x52174B8))(this, value);
	}
	template <typename T = int32_t> T get_source() {
		return ((T (*)(CSGetOtherInfoReq*))(Il2CppBase() + 0x52174C8))(this);
	}
	template <typename T = void> T set_source(int32_t value) {
		return ((T (*)(CSGetOtherInfoReq*, int32_t))(Il2CppBase() + 0x52174D0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sign() {
		return ((T (*)(CSGetOtherInfoReq*))(Il2CppBase() + 0x52174D8))(this);
	}
	template <typename T = void> T set_sign(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGetOtherInfoReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x52174E0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetOtherInfoReq*, bool))(Il2CppBase() + 0x52174E8))(this, createIfMissing);
	}

};

}
