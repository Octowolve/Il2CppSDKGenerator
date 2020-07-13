#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendRecentZMCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendRecentZMCell"));
	}

	template <typename T = uintptr_t> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& DamageLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ModelLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureBattleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ConfigureBattleInfo(uintptr_t battleInfo) {
		return ((T (*)(FriendRecentZMCell*, uintptr_t))(Il2CppBase() + 0x32B41B4))(this, battleInfo);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureBattleInfo(uintptr_t P0) {
		return ((T (*)(FriendRecentZMCell*, uintptr_t))(Il2CppBase() + 0x32B4658))(this, P0);
	}

};

}
