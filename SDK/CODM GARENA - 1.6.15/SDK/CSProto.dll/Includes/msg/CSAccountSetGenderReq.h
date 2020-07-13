#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetGenderReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetGenderReq"));
	}

	template <typename T = uint32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_gender() {
		return ((T (*)(CSAccountSetGenderReq*))(Il2CppBase() + 0x51707A8))(this);
	}
	template <typename T = void> T set_gender(uint32_t value) {
		return ((T (*)(CSAccountSetGenderReq*, uint32_t))(Il2CppBase() + 0x51707B0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetGenderReq*, bool))(Il2CppBase() + 0x51707B8))(this, createIfMissing);
	}

};

}
