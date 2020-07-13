#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class IsFriendRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "IsFriendRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_friend() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(IsFriendRes*))(Il2CppBase() + 0x50D0A84))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(IsFriendRes*, int32_t))(Il2CppBase() + 0x50D0A8C))(this, value);
	}
	template <typename T = bool> T get_is_friend() {
		return ((T (*)(IsFriendRes*))(Il2CppBase() + 0x50D0A94))(this);
	}
	template <typename T = void> T set_is_friend(bool value) {
		return ((T (*)(IsFriendRes*, bool))(Il2CppBase() + 0x50D0A9C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(IsFriendRes*, bool))(Il2CppBase() + 0x50D0AA4))(this, createIfMissing);
	}

};

}
