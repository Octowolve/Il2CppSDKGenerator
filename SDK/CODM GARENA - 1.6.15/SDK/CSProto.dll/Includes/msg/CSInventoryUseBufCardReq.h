#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryUseBufCardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryUseBufCardReq"));
	}

	template <typename T = uintptr_t> T& _use_card() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_use_card() {
		return ((T (*)(CSInventoryUseBufCardReq*))(Il2CppBase() + 0x5138900))(this);
	}
	template <typename T = void> T set_use_card(uintptr_t value) {
		return ((T (*)(CSInventoryUseBufCardReq*, uintptr_t))(Il2CppBase() + 0x5138908))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryUseBufCardReq*, bool))(Il2CppBase() + 0x5138910))(this, createIfMissing);
	}

};

}
