#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBScoreView"));
	}

	template <typename T = uintptr_t> T& flowTable() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> static T& KillPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SurviveTimePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BeginPosShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Kill() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SurviveTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t t, uintptr_t BG) {
		return ((T (*)(BRSettlementRoomOBScoreView*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C346B0))(this, percent, t, BG);
	}
	template <typename T = void> T AdaptItem(float PanelWidth) {
		return ((T (*)(BRSettlementRoomOBScoreView*, float))(Il2CppBase() + 0x3C33638))(this, PanelWidth);
	}

};

}
