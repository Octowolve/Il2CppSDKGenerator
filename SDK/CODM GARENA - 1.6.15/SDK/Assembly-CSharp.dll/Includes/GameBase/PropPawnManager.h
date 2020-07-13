#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PropPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PropPawnManager"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_PropPawnMap() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayRemovePropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_PropPawnMap() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC07E4))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC07EC))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC0958))(this);
	}
	template <typename T = bool> T Contains(uint32_t actorID) {
		return ((T (*)(PropPawnManager*, uint32_t))(Il2CppBase() + 0x2DC09FC))(this, actorID);
	}
	template <typename T = uintptr_t> T GetPropPawn(uint32_t actorID) {
		return ((T (*)(PropPawnManager*, uint32_t))(Il2CppBase() + 0x2DC0AD8))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC0890))(this);
	}
	template <typename T = void> T DelayRemovePropPawn(uint32_t actorID) {
		return ((T (*)(PropPawnManager*, uint32_t))(Il2CppBase() + 0x2DC0BD4))(this, actorID);
	}
	template <typename T = void> T RemovePropPawn(uint32_t actorID) {
		return ((T (*)(PropPawnManager*, uint32_t))(Il2CppBase() + 0x2DC0E3C))(this, actorID);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC0FBC))(this);
	}
	template <typename T = bool> T CreatePropPawn(uint32_t uPlayerID, uint32_t uActorID, uint32_t itemID, int32_t assetID, Il2CppVector3 vSpawnPosition, Il2CppVector3 vSpawnAngles, Il2CppVector3 vFinalNormal, float fLifeTime, float fLeftLifeTime, Il2CppArray<uintptr_t>* ExtraInfo, unsigned char ExtraLen, uint32_t skinID, bool isFixed) {
		return ((T (*)(PropPawnManager*, uint32_t, uint32_t, uint32_t, int32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, float, Il2CppArray<uintptr_t>*, unsigned char, uint32_t, bool))(Il2CppBase() + 0x2DC1328))(this, uPlayerID, uActorID, itemID, assetID, vSpawnPosition, vSpawnAngles, vFinalNormal, fLifeTime, fLeftLifeTime, ExtraInfo, ExtraLen, skinID, isFixed);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC19BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC19C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PropPawnManager*))(Il2CppBase() + 0x2DC19CC))(this);
	}

};

}
