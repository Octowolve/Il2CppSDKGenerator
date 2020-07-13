#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BattleFriends
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BattleFriends"));
	}

	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _friend_item() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_type() {
		return ((T (*)(BattleFriends*))(Il2CppBase() + 0x510CBE8))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(BattleFriends*, uint32_t))(Il2CppBase() + 0x510CBF0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_friend_item() {
		return ((T (*)(BattleFriends*))(Il2CppBase() + 0x510CBF8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BattleFriends*, bool))(Il2CppBase() + 0x510CC00))(this, createIfMissing);
	}

};

}
