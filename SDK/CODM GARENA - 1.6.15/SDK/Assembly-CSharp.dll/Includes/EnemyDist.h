#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyDist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyDist"));
	}

	template <typename T = uintptr_t> T& DistLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NameBgBR() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& Nearest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& Furthest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FurthestScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& OcclusionAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_RaycastIntv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& FixedHeadNameOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bStayInScreen() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_transform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ownerTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_LastRaycastResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_fadeOutStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_isFadeOut() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamMateColorBySeatId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoingFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFadeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(EnemyDist*, uintptr_t))(Il2CppBase() + 0x4BCD684))(this, owner);
	}
	template <typename T = uintptr_t> T GetTeamMateColorBySeatId(int32_t seatId) {
		return ((T (*)(EnemyDist*, int32_t))(Il2CppBase() + 0x4BCD940))(this, seatId);
	}
	template <typename T = void> T UpdateUI(float dt, uintptr_t worldCam, uintptr_t uiCam) {
		return ((T (*)(EnemyDist*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BCDB14))(this, dt, worldCam, uiCam);
	}
	template <typename T = void> T OnFadeout() {
		return ((T (*)(EnemyDist*))(Il2CppBase() + 0x4BCE52C))(this);
	}
	template <typename T = void> T DoingFadeout() {
		return ((T (*)(EnemyDist*))(Il2CppBase() + 0x4BCE624))(this);
	}
	template <typename T = void> T EndFadeout() {
		return ((T (*)(EnemyDist*))(Il2CppBase() + 0x4BCE77C))(this);
	}

};

}
