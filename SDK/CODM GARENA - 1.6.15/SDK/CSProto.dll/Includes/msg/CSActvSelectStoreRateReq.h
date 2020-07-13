#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvSelectStoreRateReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvSelectStoreRateReq"));
	}

	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(CSActvSelectStoreRateReq*))(Il2CppBase() + 0x51E3D20))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(CSActvSelectStoreRateReq*, uint64_t))(Il2CppBase() + 0x51E3D28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvSelectStoreRateReq*, bool))(Il2CppBase() + 0x51E3D38))(this, createIfMissing);
	}

};

}
