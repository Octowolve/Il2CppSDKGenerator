#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameFriendSetReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameFriendSetReq"));
	}

	template <typename T = uint32_t> T& _refuse_add_friend() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_refuse_add_friend() {
		return ((T (*)(CSGameFriendSetReq*))(Il2CppBase() + 0x51D20F4))(this);
	}
	template <typename T = void> T set_refuse_add_friend(uint32_t value) {
		return ((T (*)(CSGameFriendSetReq*, uint32_t))(Il2CppBase() + 0x51D20FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameFriendSetReq*, bool))(Il2CppBase() + 0x51D2104))(this, createIfMissing);
	}

};

}
