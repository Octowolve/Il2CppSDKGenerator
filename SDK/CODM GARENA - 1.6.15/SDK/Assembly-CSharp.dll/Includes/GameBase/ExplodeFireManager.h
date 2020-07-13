#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ExplodeFireManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ExplodeFireManager"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ExplodeFireMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_DeadReplayExplodeFireMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsDeadReplay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_WaitRemoveList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_RemoveSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindExplodeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateExplodeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDeadReplayExplodeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveExplodeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsDeadReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowExplodeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDeadReplayExplodeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Shutdown() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D0B3C))(this);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D1064))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D1108))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D0BE0))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ExplodeFireManager*, float))(Il2CppBase() + 0x31D11AC))(this, deltaTime);
	}
	template <typename T = uintptr_t> T FindExplodeFire(int32_t actorId) {
		return ((T (*)(ExplodeFireManager*, int32_t))(Il2CppBase() + 0x31D17DC))(this, actorId);
	}
	template <typename T = void> T CreateExplodeFire(int32_t actorId, int32_t resourceId, Il2CppVector3 areaLocation, float timeInSecond) {
		return ((T (*)(ExplodeFireManager*, int32_t, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x31D1A14))(this, actorId, resourceId, areaLocation, timeInSecond);
	}
	template <typename T = void> T CreateDeadReplayExplodeFire(int32_t actorId, int32_t resourceId, Il2CppVector3 areaLocation, float timeInSecond) {
		return ((T (*)(ExplodeFireManager*, int32_t, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x31D1C18))(this, actorId, resourceId, areaLocation, timeInSecond);
	}
	template <typename T = void> T RemoveExplodeFire(int32_t actorId) {
		return ((T (*)(ExplodeFireManager*, int32_t))(Il2CppBase() + 0x31D14F4))(this, actorId);
	}
	template <typename T = void> T SetIsDeadReplay(bool value) {
		return ((T (*)(ExplodeFireManager*, bool))(Il2CppBase() + 0x31D1E1C))(this, value);
	}
	template <typename T = void> T ShowExplodeFire(bool value) {
		return ((T (*)(ExplodeFireManager*, bool))(Il2CppBase() + 0x31D1EF0))(this, value);
	}
	template <typename T = void> T ClearDeadReplayExplodeFire() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D20E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D2374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D237C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(ExplodeFireManager*))(Il2CppBase() + 0x31D2384))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ExplodeFireManager*, float))(Il2CppBase() + 0x31D238C))(this, P0);
	}

};

}
