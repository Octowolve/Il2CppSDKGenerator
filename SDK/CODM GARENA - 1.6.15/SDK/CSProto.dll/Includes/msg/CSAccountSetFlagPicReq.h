#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetFlagPicReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetFlagPicReq"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSAccountSetFlagPicReq*))(Il2CppBase() + 0x51706B8))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSAccountSetFlagPicReq*, uint32_t))(Il2CppBase() + 0x51706C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetFlagPicReq*, bool))(Il2CppBase() + 0x51706C8))(this, createIfMissing);
	}

};

}
