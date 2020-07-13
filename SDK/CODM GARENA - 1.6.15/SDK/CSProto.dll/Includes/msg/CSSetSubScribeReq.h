#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetSubScribeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetSubScribeReq"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSSetSubScribeReq*))(Il2CppBase() + 0x51E1EAC))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSSetSubScribeReq*, int32_t))(Il2CppBase() + 0x51E1EB4))(this, value);
	}
	template <typename T = bool> T get_status() {
		return ((T (*)(CSSetSubScribeReq*))(Il2CppBase() + 0x51E1EBC))(this);
	}
	template <typename T = void> T set_status(bool value) {
		return ((T (*)(CSSetSubScribeReq*, bool))(Il2CppBase() + 0x51E1EC4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetSubScribeReq*, bool))(Il2CppBase() + 0x51E1ECC))(this, createIfMissing);
	}

};

}
