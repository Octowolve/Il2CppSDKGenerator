#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAllComradeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAllComradeReq"));
	}

	template <typename T = bool> T& _need_cf_friend() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _nearby_openid_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_need_cf_friend() {
		return ((T (*)(CSGetAllComradeReq*))(Il2CppBase() + 0x5215B2C))(this);
	}
	template <typename T = void> T set_need_cf_friend(bool value) {
		return ((T (*)(CSGetAllComradeReq*, bool))(Il2CppBase() + 0x5215B34))(this, value);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_nearby_openid_list() {
		return ((T (*)(CSGetAllComradeReq*))(Il2CppBase() + 0x5215B3C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAllComradeReq*, bool))(Il2CppBase() + 0x5215B44))(this, createIfMissing);
	}

};

}
