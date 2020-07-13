#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEZombieSEH
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEZombieSEH"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Banks() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AppearEvets() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AttackEvents() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HitEvents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WalkEvents() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RunEvents() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CrawlMoveEvents() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CrawlAttackEvents() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CrawlHitEvents() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& VaultToWalk() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& VaultToRun() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& AmbientEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& BehindAmbientEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& CrawlAmbientEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& AmbientPlayRange() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& BehindDetectRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& AmbientInterval() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& DeadEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& HeadShotDeadEvent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& CrawlDeadEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& mIsBankLoaded() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mWWiseObj() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mAnimator() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mCoAmbient() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& mSqrtCheckBehindRange() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& mSqrtPlayRange() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& mIsInited() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoLoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoPlayAmbient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerAppear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerHeadShotDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerWalk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerCrawlAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerCrawlDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerCrawlHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerCrawlMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Init(uintptr_t pOwner) {
		return ((T (*)(PVEZombieSEH*, uintptr_t))(Il2CppBase() + 0x4052190))(this, pOwner);
	}
	template <typename T = void> T PlayDead(bool isHeadShot, bool isCrawling) {
		return ((T (*)(PVEZombieSEH*, bool, bool))(Il2CppBase() + 0x4052340))(this, isHeadShot, isCrawling);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(PVEZombieSEH*))(Il2CppBase() + 0x40524E0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PVEZombieSEH*))(Il2CppBase() + 0x4052710))(this);
	}
	template <typename T = uintptr_t> T CoLoadBanks() {
		return ((T (*)(PVEZombieSEH*))(Il2CppBase() + 0x4052260))(this);
	}
	template <typename T = uintptr_t> T CoPlayAmbient() {
		return ((T (*)(PVEZombieSEH*))(Il2CppBase() + 0x4052A18))(this);
	}
	template <typename T = void> T PlayAnimationSound(Il2CppArray<uintptr_t>* strEvents, int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4052B08))(this, strEvents, iIndex);
	}
	template <typename T = void> T TriggerAppear(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4052CDC))(this, iIndex);
	}
	template <typename T = void> T TriggerAttack(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4052D9C))(this, iIndex);
	}
	template <typename T = void> T TriggerDead(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4052E5C))(this, iIndex);
	}
	template <typename T = void> T TriggerHeadShotDead(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4052EFC))(this, iIndex);
	}
	template <typename T = void> T TriggerHit(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4052F9C))(this, iIndex);
	}
	template <typename T = void> T TriggerWalk(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x405305C))(this, iIndex);
	}
	template <typename T = void> T TriggerRun(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x40531D8))(this, iIndex);
	}
	template <typename T = void> T TriggerCrawlAttack(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4053344))(this, iIndex);
	}
	template <typename T = void> T TriggerCrawlDead(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4053404))(this, iIndex);
	}
	template <typename T = void> T TriggerCrawlHit(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x40534A4))(this, iIndex);
	}
	template <typename T = void> T TriggerCrawlMove(int32_t iIndex) {
		return ((T (*)(PVEZombieSEH*, int32_t))(Il2CppBase() + 0x4053564))(this, iIndex);
	}

};

}
