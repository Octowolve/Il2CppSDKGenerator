#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SentryGunManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SentryGunManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_SentryGunPawnMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CreateCallBack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DestoryCallBack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSentryGunPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateSentryGunPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllSentryGunPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSentryGunPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RemoveSentryGunPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SentryGunPawnFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyAllSentryGunPawnStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_SentryGunPawnMap() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2DFF0FC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2DFF104))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2DFF1CC))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2DFF8D8))(this);
	}
	template <typename T = bool> T CreateSentryGunPawn(uintptr_t ct) {
		return ((T (*)(SentryGunManager*, uintptr_t))(Il2CppBase() + 0x2DFF97C))(this, ct);
	}
	template <typename T = bool> T CreateSentryGunPawn_1(Il2CppVector3 pos, Il2CppQuaternion rotation, uintptr_t camp, uint32_t playerID, uint32_t actorID, uint32_t sentryGunID, unsigned char lifeTime) {
		return ((T (*)(SentryGunManager*, Il2CppVector3, Il2CppQuaternion, uintptr_t, uint32_t, uint32_t, uint32_t, unsigned char))(Il2CppBase() + 0x2DFFB9C))(this, pos, rotation, camp, playerID, actorID, sentryGunID, lifeTime);
	}
	template <typename T = uintptr_t> T Find(uint32_t actorID) {
		return ((T (*)(SentryGunManager*, uint32_t))(Il2CppBase() + 0x2E003F8))(this, actorID);
	}
	template <typename T = void> T RemoveAllSentryGunPawn() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2DFF538))(this);
	}
	template <typename T = void> T RemoveSentryGunPawn(uintptr_t msg) {
		return ((T (*)(SentryGunManager*, uintptr_t))(Il2CppBase() + 0x2E0051C))(this, msg);
	}
	template <typename T = void> T RemoveSentryGunPawn_1(uint32_t actorID, float lifeTime) {
		return ((T (*)(SentryGunManager*, uint32_t, float))(Il2CppBase() + 0x2E0063C))(this, actorID, lifeTime);
	}
	template <typename T = void> T SentryGunPawnFire(uintptr_t msg) {
		return ((T (*)(SentryGunManager*, uintptr_t))(Il2CppBase() + 0x2E008A4))(this, msg);
	}
	template <typename T = void> static T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2E00C2C))(0, actorID);
	}
	template <typename T = void> T NotifyAllSentryGunPawnStopFire() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2DFF278))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2E00D88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2E00D90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(SentryGunManager*))(Il2CppBase() + 0x2E00D98))(this);
	}

};

}
