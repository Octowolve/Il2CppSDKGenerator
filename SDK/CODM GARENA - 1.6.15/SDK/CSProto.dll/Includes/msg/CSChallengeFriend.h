#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeFriend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallengeFriend"));
	}

	template <typename T = uintptr_t> T& _friend_profile() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _challenge_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_friend_profile() {
		return ((T (*)(CSChallengeFriend*))(Il2CppBase() + 0x51CF29C))(this);
	}
	template <typename T = void> T set_friend_profile(uintptr_t value) {
		return ((T (*)(CSChallengeFriend*, uintptr_t))(Il2CppBase() + 0x51CF2A4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_challenge_list() {
		return ((T (*)(CSChallengeFriend*))(Il2CppBase() + 0x51CF2AC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeFriend*, bool))(Il2CppBase() + 0x51CF2B4))(this, createIfMissing);
	}

};

}
