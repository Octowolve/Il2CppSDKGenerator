#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SingleShieldConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SingleShieldConf"));
	}

	template <typename T = bool> T& _IsClose_FriendInvite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _IsClose_TeamInvite() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& _IsClose_Share() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_IsClose_FriendInvite() {
		return ((T (*)(SingleShieldConf*))(Il2CppBase() + 0x50734C8))(this);
	}
	template <typename T = void> T set_IsClose_FriendInvite(bool value) {
		return ((T (*)(SingleShieldConf*, bool))(Il2CppBase() + 0x50734D0))(this, value);
	}
	template <typename T = bool> T get_IsClose_TeamInvite() {
		return ((T (*)(SingleShieldConf*))(Il2CppBase() + 0x50734D8))(this);
	}
	template <typename T = void> T set_IsClose_TeamInvite(bool value) {
		return ((T (*)(SingleShieldConf*, bool))(Il2CppBase() + 0x50734E0))(this, value);
	}
	template <typename T = bool> T get_IsClose_Share() {
		return ((T (*)(SingleShieldConf*))(Il2CppBase() + 0x50734E8))(this);
	}
	template <typename T = void> T set_IsClose_Share(bool value) {
		return ((T (*)(SingleShieldConf*, bool))(Il2CppBase() + 0x50734F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SingleShieldConf*, bool))(Il2CppBase() + 0x50734F8))(this, createIfMissing);
	}

};

}
