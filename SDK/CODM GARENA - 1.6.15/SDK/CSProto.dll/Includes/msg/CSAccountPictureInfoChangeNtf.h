#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountPictureInfoChangeNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountPictureInfoChangeNtf"));
	}

	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(CSAccountPictureInfoChangeNtf*))(Il2CppBase() + 0x51701F4))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(CSAccountPictureInfoChangeNtf*, uintptr_t))(Il2CppBase() + 0x51701FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountPictureInfoChangeNtf*, bool))(Il2CppBase() + 0x5170204))(this, createIfMissing);
	}

};

}
