#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBaseLotteryMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBaseLotteryMachine"));
	}

	template <typename T = uintptr_t> T& IconObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CdText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& PickUpItemDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& CloseAniDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PickUpAnimator() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PickUpPoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_CloseAniTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_AniEndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_LastShowItem() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_LdInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Info() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_Cd() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickUpPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpawnPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCdState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDownStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCountDownText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDownEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStartPickUpAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCloseAniDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAniSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uint32_t> T get_UID() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1580))(this);
	}
	template <typename T = uintptr_t> T get_Point() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E165C))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1664))(this);
	}
	template <typename T = int32_t> T get_ItemActorID() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1678))(this);
	}
	template <typename T = uintptr_t> T get_LotteryType() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E168C))(this);
	}
	template <typename T = bool> T get_IsCanPickupItem() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1768))(this);
	}
	template <typename T = bool> T get_IsCanUse() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E17A0))(this);
	}
	template <typename T = void> T Init(uintptr_t ldInfo) {
		return ((T (*)(BRBaseLotteryMachine*, uintptr_t))(Il2CppBase() + 0x24E1830))(this, ldInfo);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E18D8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1D3C))(this);
	}
	template <typename T = void> T UpdateStatus(uintptr_t info) {
		return ((T (*)(BRBaseLotteryMachine*, uintptr_t))(Il2CppBase() + 0x24E1DE8))(this, info);
	}
	template <typename T = uintptr_t> T GetPickUpPoint() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E200C))(this);
	}
	template <typename T = void> T OnSpawnPickUp(uintptr_t pickUpTransform, uintptr_t assetTransform) {
		return ((T (*)(BRBaseLotteryMachine*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24E20AC))(this, pickUpTransform, assetTransform);
	}
	template <typename T = void> T UpdateCdState() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E22B4))(this);
	}
	template <typename T = void> T OnCountDownStart(float cd) {
		return ((T (*)(BRBaseLotteryMachine*, float))(Il2CppBase() + 0x24E23E0))(this, cd);
	}
	template <typename T = void> T UpdateCountDownText() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1984))(this);
	}
	template <typename T = void> T OnCountDownEnd() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E24F8))(this);
	}
	template <typename T = void> T TryStartPickUpAni() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1EAC))(this);
	}
	template <typename T = void> T OnOpenAni() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E2600))(this);
	}
	template <typename T = void> T OnCloseAni() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E282C))(this);
	}
	template <typename T = void> T TickCloseAniDelay() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E1C20))(this);
	}
	template <typename T = void> T PlayAniSound() {
		return ((T (*)(BRBaseLotteryMachine*))(Il2CppBase() + 0x24E26E0))(this);
	}

};

}
