#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvBindAccountReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvBindAccountReq"));
	}

	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _account_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(CSActvBindAccountReq*))(Il2CppBase() + 0x51E316C))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(CSActvBindAccountReq*, uint64_t))(Il2CppBase() + 0x51E3174))(this, value);
	}
	template <typename T = int32_t> T get_account_type() {
		return ((T (*)(CSActvBindAccountReq*))(Il2CppBase() + 0x51E3184))(this);
	}
	template <typename T = void> T set_account_type(int32_t value) {
		return ((T (*)(CSActvBindAccountReq*, int32_t))(Il2CppBase() + 0x51E318C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvBindAccountReq*, bool))(Il2CppBase() + 0x51E3194))(this, createIfMissing);
	}

};

}
