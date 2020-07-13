#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAGameScoreViewOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAGameScoreView_OB"));
	}

	template <typename T = uintptr_t> T& SelfNameLabel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& SelfScoreLabel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& TopChangeEffect() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uint32_t> T& m_TopPlayerID() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& m_LastScore() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScoreEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(FFAGameScoreViewOB*))(Il2CppBase() + 0x401A378))(this);
	}
	template <typename T = void> T UpdateRankInfo() {
		return ((T (*)(FFAGameScoreViewOB*))(Il2CppBase() + 0x401A380))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(FFAGameScoreViewOB*, uintptr_t, bool))(Il2CppBase() + 0x401A418))(this, data, force);
	}
	template <typename T = uintptr_t> T ScoreEffect() {
		return ((T (*)(FFAGameScoreViewOB*))(Il2CppBase() + 0x401A880))(this);
	}
	template <typename T = void> T HideTopEffect() {
		return ((T (*)(FFAGameScoreViewOB*))(Il2CppBase() + 0x401A968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRankInfo() {
		return ((T (*)(FFAGameScoreViewOB*))(Il2CppBase() + 0x401AA54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateScore(uintptr_t P0, bool P1) {
		return ((T (*)(FFAGameScoreViewOB*, uintptr_t, bool))(Il2CppBase() + 0x401AA58))(this, P0, P1);
	}

};

}
