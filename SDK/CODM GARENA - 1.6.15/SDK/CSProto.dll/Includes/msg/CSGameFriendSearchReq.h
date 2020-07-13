#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameFriendSearchReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameFriendSearchReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(CSGameFriendSearchReq*))(Il2CppBase() + 0x51D1FF0))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGameFriendSearchReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1FF8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameFriendSearchReq*, bool))(Il2CppBase() + 0x51D2000))(this, createIfMissing);
	}

};

}
