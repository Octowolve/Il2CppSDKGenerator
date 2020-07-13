#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventorySetPicReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventorySetPicReq"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSInventorySetPicReq*))(Il2CppBase() + 0x51384B4))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSInventorySetPicReq*, int32_t))(Il2CppBase() + 0x51384BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventorySetPicReq*, bool))(Il2CppBase() + 0x51384C4))(this, createIfMissing);
	}

};

}
