#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGameScoreView"));
	}

	template <typename T = uintptr_t> T& RoundLabel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& LastShowRound() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurLeadingStateText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentRoundText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(PropHuntGameScoreView*, uintptr_t))(Il2CppBase() + 0x34A3C94))(this, resetType);
	}
	template <typename T = Il2CppString*> T GetCurLeadingStateText() {
		return ((T (*)(PropHuntGameScoreView*))(Il2CppBase() + 0x34A4034))(this);
	}
	template <typename T = void> T UpdateCurrentRoundText() {
		return ((T (*)(PropHuntGameScoreView*))(Il2CppBase() + 0x34A3D60))(this);
	}
	template <typename T = bool> T IsSpecialTarget() {
		return ((T (*)(PropHuntGameScoreView*))(Il2CppBase() + 0x34A41BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(PropHuntGameScoreView*, uintptr_t))(Il2CppBase() + 0x34A425C))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetCurLeadingStateText() {
		return ((T (*)(PropHuntGameScoreView*))(Il2CppBase() + 0x34A4264))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSpecialTarget() {
		return ((T (*)(PropHuntGameScoreView*))(Il2CppBase() + 0x34A426C))(this);
	}

};

}
