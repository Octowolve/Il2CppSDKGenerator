#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampSpot"));
	}

	template <typename T = uintptr_t> T& SpotType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& StanceType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& WeaponPriority() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraAimRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& campDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& claimedPawn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& allCampSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearestCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnClaimedCampSpotInRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsClaimed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnClaim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T get_AllCampSpot() {
		return ((T (*)(void *))(Il2CppBase() + 0x531AAC0))(0);
	}
	template <typename T = uintptr_t> static T GetNearestCamp(Il2CppVector3 campPos, uintptr_t spotType) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x531AB70))(0, campPos, spotType);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetUnClaimedCampSpotInRadius(Il2CppVector3 inCenter, uintptr_t spotType, float inRadius) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x531AEB4))(0, inCenter, spotType, inRadius);
	}
	template <typename T = bool> T IsClaimed() {
		return ((T (*)(CampSpot*))(Il2CppBase() + 0x531B1FC))(this);
	}
	template <typename T = bool> T ClaimBy(uintptr_t inPawn) {
		return ((T (*)(CampSpot*, uintptr_t))(Il2CppBase() + 0x531B354))(this, inPawn);
	}
	template <typename T = void> T UnClaim() {
		return ((T (*)(CampSpot*))(Il2CppBase() + 0x531B490))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CampSpot*))(Il2CppBase() + 0x531B564))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CampSpot*))(Il2CppBase() + 0x531B6B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CampSpot*))(Il2CppBase() + 0x531B8AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(CampSpot*))(Il2CppBase() + 0x531B8B4))(this);
	}

};

}
