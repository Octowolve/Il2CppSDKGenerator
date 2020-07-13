#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextSetNameCardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextSetNameCardReq"));
	}

	template <typename T = int64_t> T& _name_card_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _name_card_gid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int64_t> T get_name_card_id() {
		return ((T (*)(CSAccountextSetNameCardReq*))(Il2CppBase() + 0x516FF7C))(this);
	}
	template <typename T = void> T set_name_card_id(int64_t value) {
		return ((T (*)(CSAccountextSetNameCardReq*, int64_t))(Il2CppBase() + 0x516FF84))(this, value);
	}
	template <typename T = int64_t> T get_name_card_gid() {
		return ((T (*)(CSAccountextSetNameCardReq*))(Il2CppBase() + 0x516FF94))(this);
	}
	template <typename T = void> T set_name_card_gid(int64_t value) {
		return ((T (*)(CSAccountextSetNameCardReq*, int64_t))(Il2CppBase() + 0x516FF9C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextSetNameCardReq*, bool))(Il2CppBase() + 0x516FFAC))(this, createIfMissing);
	}

};

}
