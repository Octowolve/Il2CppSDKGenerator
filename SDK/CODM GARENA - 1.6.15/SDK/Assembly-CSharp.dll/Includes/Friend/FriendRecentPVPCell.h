#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendRecentPVPCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendRecentPVPCell"));
	}

	template <typename T = uintptr_t> T& Result() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& KDA() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ModeName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Map() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& MapName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SpritePVPRank() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& colorWin() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& colorFail() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureBattleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecentRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ConfigureBattleInfo(uintptr_t battleInfo) {
		return ((T (*)(FriendRecentPVPCell*, uintptr_t))(Il2CppBase() + 0x32B39D4))(this, battleInfo);
	}
	template <typename T = void> T SetRecentRank(uintptr_t profile) {
		return ((T (*)(FriendRecentPVPCell*, uintptr_t))(Il2CppBase() + 0x32B3F2C))(this, profile);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureBattleInfo(uintptr_t P0) {
		return ((T (*)(FriendRecentPVPCell*, uintptr_t))(Il2CppBase() + 0x32B4108))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetRecentRank(uintptr_t P0) {
		return ((T (*)(FriendRecentPVPCell*, uintptr_t))(Il2CppBase() + 0x32B410C))(this, P0);
	}

};

}
