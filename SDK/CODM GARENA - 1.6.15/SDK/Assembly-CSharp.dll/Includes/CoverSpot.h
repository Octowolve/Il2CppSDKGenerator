#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoverSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoverSpot"));
	}

	template <typename T = float> static T& agentRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& agentCrouchHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& agentStandHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& agentFireHeightRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> T& crouchCover() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& canFireFromLeft() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& canFireFromRight() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = float> T& distToWall() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& leftMargin() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& rightMargin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& leftCover() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& rightCover() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& claimedPawn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& allCoverSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValidPosOnNavMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcHidePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcFirePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExposed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnClaim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsClaimed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T get_AllCoverSpot() {
		return ((T (*)(void *))(Il2CppBase() + 0x4153500))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CoverSpot*))(Il2CppBase() + 0x41535B0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CoverSpot*))(Il2CppBase() + 0x41536FC))(this);
	}
	template <typename T = bool> T GetValidPosOnNavMesh(uintptr_t inPos) {
		return ((T (*)(CoverSpot*, uintptr_t))(Il2CppBase() + 0x4153848))(this, inPos);
	}
	template <typename T = Il2CppVector3> T CalcHidePos(uintptr_t target) {
		return ((T (*)(CoverSpot*, uintptr_t))(Il2CppBase() + 0x41539D4))(this, target);
	}
	template <typename T = Il2CppVector3> T CalcFirePos(uintptr_t target) {
		return ((T (*)(CoverSpot*, uintptr_t))(Il2CppBase() + 0x41540AC))(this, target);
	}
	template <typename T = bool> T IsExposed(uintptr_t target) {
		return ((T (*)(CoverSpot*, uintptr_t))(Il2CppBase() + 0x4154778))(this, target);
	}
	template <typename T = void> T SetLeftCover(uintptr_t inSpot) {
		return ((T (*)(CoverSpot*, uintptr_t))(Il2CppBase() + 0x41549C0))(this, inSpot);
	}
	template <typename T = void> T SetRightCover(uintptr_t inSpot) {
		return ((T (*)(CoverSpot*, uintptr_t))(Il2CppBase() + 0x4154B04))(this, inSpot);
	}
	template <typename T = void> T ClaimedBy(uintptr_t pawn) {
		return ((T (*)(CoverSpot*, uintptr_t))(Il2CppBase() + 0x4154C48))(this, pawn);
	}
	template <typename T = void> T UnClaim() {
		return ((T (*)(CoverSpot*))(Il2CppBase() + 0x4154D20))(this);
	}
	template <typename T = bool> T IsClaimed() {
		return ((T (*)(CoverSpot*))(Il2CppBase() + 0x4154DF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CoverSpot*))(Il2CppBase() + 0x4155010))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(CoverSpot*))(Il2CppBase() + 0x4155018))(this);
	}

};

}
