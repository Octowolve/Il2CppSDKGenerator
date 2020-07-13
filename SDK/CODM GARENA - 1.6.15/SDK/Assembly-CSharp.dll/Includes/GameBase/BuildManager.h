#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuildManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuildManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BuildActorMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIntersectBuildActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncBuildActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBuildActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllBuildActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBuildActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_BuildActorMap() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C3B508))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4C05C))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4C1C8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4C538))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4C100))(this);
	}
	template <typename T = bool> T IsIntersectBuildActor(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, uintptr_t impactInfo) {
		return ((T (*)(BuildManager*, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3C4C5DC))(this, startTrace, direction, distance, impactInfo);
	}
	template <typename T = void> T SyncBuildActor(uintptr_t ct) {
		return ((T (*)(BuildManager*, uintptr_t))(Il2CppBase() + 0x3C4C970))(this, ct);
	}
	template <typename T = uintptr_t> T CreateBuildActor(Il2CppVector3 pos, Il2CppQuaternion rotation, uint32_t playerID, uint32_t actorID, uint32_t itemID, uint32_t skinID) {
		return ((T (*)(BuildManager*, Il2CppVector3, Il2CppQuaternion, uint32_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3C4CCA4))(this, pos, rotation, playerID, actorID, itemID, skinID);
	}
	template <typename T = uintptr_t> T Find(uint32_t actorID) {
		return ((T (*)(BuildManager*, uint32_t))(Il2CppBase() + 0x3C497DC))(this, actorID);
	}
	template <typename T = void> T RemoveAllBuildActor() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4C26C))(this);
	}
	template <typename T = void> T RemoveBuildActor(uint32_t actorID, bool timeout) {
		return ((T (*)(BuildManager*, uint32_t, bool))(Il2CppBase() + 0x3C49900))(this, actorID, timeout);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4D1D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4D1D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BuildManager*))(Il2CppBase() + 0x3C4D1E0))(this);
	}

};

}
