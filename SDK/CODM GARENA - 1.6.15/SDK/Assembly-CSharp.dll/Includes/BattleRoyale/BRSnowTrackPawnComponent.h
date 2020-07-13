#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSnowTrackPawnComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSnowTrackPawnComponent"));
	}

	template <typename T = float> T& m_SqrShowRange() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_ShowDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_TimeGap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_NextTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsLeft() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySpawnSnowTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSpawnSnowTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T CheckTarget() {
		return ((T (*)(BRSnowTrackPawnComponent*))(Il2CppBase() + 0x260B4F0))(this);
	}
	template <typename T = void> T TrySpawnSnowTrack(uintptr_t pImpactInfo) {
		return ((T (*)(BRSnowTrackPawnComponent*, uintptr_t))(Il2CppBase() + 0x260B848))(this, pImpactInfo);
	}
	template <typename T = void> T DoSpawnSnowTrack(uintptr_t pImpactInfo) {
		return ((T (*)(BRSnowTrackPawnComponent*, uintptr_t))(Il2CppBase() + 0x260B920))(this, pImpactInfo);
	}

};

}
