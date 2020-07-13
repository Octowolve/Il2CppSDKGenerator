#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickupCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickupCollection"));
	}

	template <typename T = bool> T& bNeedUpdatePosition() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = Il2CppVector3> T& InitialPosition() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_RealTargetPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_TriggerDistance() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& LotteryPickupCoolDown() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& totalTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& SpeedX() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& SpeedZ() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& SpeedY() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& G() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_disableTriggerTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& SpeedVec() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& TriggerScale() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> static T& TriggerYSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& TriggerSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> static T& TriggerSizeLottery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> T& dTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& m_LastPickupTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> static T& PickupCollectionCoolDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBoxObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_EBRPickUpInfoType() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BB98C))(this);
	}
	template <typename T = Il2CppVector3> T get_InitialPosition() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BB994))(this);
	}
	template <typename T = void> T set_InitialPosition(Il2CppVector3 value) {
		return ((T (*)(BRDroppedPickupCollection*, Il2CppVector3))(Il2CppBase() + 0x18BB9A8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_TargetPosition() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BB9B4))(this);
	}
	template <typename T = void> T set_TargetPosition(Il2CppVector3 value) {
		return ((T (*)(BRDroppedPickupCollection*, Il2CppVector3))(Il2CppBase() + 0x18BBA2C))(this, value);
	}
	template <typename T = float> T get_ConfigYOffset() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BBA0C))(this);
	}
	template <typename T = void> T StartMove() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BBA38))(this);
	}
	template <typename T = void> T SetPosition(Il2CppVector3 pos) {
		return ((T (*)(BRDroppedPickupCollection*, Il2CppVector3))(Il2CppBase() + 0x18BBCE8))(this, pos);
	}
	template <typename T = void> T AddTrigger() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BBE14))(this);
	}
	template <typename T = void> T LoadComplete() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BC354))(this);
	}
	template <typename T = void> T OnDespawn() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BC494))(this);
	}
	template <typename T = void> T TickBoxObserver() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BC60C))(this);
	}
	template <typename T = void> T TickMovement() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BC6D4))(this);
	}
	template <typename T = void> T CheckEnableBoxCollider() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BC9B4))(this);
	}
	template <typename T = void> T Pickup() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BCB80))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRDroppedPickupCollection*, uintptr_t))(Il2CppBase() + 0x18BCC7C))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_LoadComplete() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BCFA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDespawn() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BCFAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickBoxObserver() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BCFB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickMovement() {
		return ((T (*)(BRDroppedPickupCollection*))(Il2CppBase() + 0x18BCFB4))(this);
	}

};

}
