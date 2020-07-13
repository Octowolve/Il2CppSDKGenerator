#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendRecentBRCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendRecentBRCell"));
	}

	template <typename T = uintptr_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Kill() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RankOneSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& SpriteBrRank() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Model() {
		return *(T*)((uintptr_t)this + 0xAC);
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
		return ((T (*)(FriendRecentBRCell*, uintptr_t))(Il2CppBase() + 0x32B01F8))(this, battleInfo);
	}
	template <typename T = void> T SetRecentRank(uintptr_t profile) {
		return ((T (*)(FriendRecentBRCell*, uintptr_t))(Il2CppBase() + 0x32B0950))(this, profile);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureBattleInfo(uintptr_t P0) {
		return ((T (*)(FriendRecentBRCell*, uintptr_t))(Il2CppBase() + 0x32B0B3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetRecentRank(uintptr_t P0) {
		return ((T (*)(FriendRecentBRCell*, uintptr_t))(Il2CppBase() + 0x32B0BE0))(this, P0);
	}

};

}
