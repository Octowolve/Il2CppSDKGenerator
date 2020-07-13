#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BlackMarketActorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BlackMarketActorManager"));
	}

	template <typename T = uintptr_t> T& m_WorldModelTransformMatrix() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActorList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ActorInfoList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& ActorDict() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& AliveActors() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& EmptyObjectPool() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uint32_t>*> T& inActiveActor() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActorInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateActors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateActorPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInactiveActors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTransformMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldModelTransformPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldModelTransformRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetActorInfoList(Il2CppList<uintptr_t>* inActorInfoList) {
		return ((T (*)(BlackMarketActorManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x24B4EBC))(this, inActorInfoList);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(BlackMarketActorManager*))(Il2CppBase() + 0x24B4F64))(this);
	}
	template <typename T = void> T UpdateActors() {
		return ((T (*)(BlackMarketActorManager*))(Il2CppBase() + 0x24B5014))(this);
	}
	template <typename T = void> T SpawnActor(uintptr_t firstChild, uintptr_t* outActor) {
		return ((T (*)(BlackMarketActorManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x24B5460))(this, firstChild, outActor);
	}
	template <typename T = void> T UpdateActorPos(uintptr_t inActor, Il2CppVector3 worldPos, Il2CppQuaternion worldRot) {
		return ((T (*)(BlackMarketActorManager*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x24B5670))(this, inActor, worldPos, worldRot);
	}
	template <typename T = void> T RemoveInactiveActors() {
		return ((T (*)(BlackMarketActorManager*))(Il2CppBase() + 0x24B584C))(this);
	}
	template <typename T = void> T SetTransformMatrix(uintptr_t worldModelTransformMatrix) {
		return ((T (*)(BlackMarketActorManager*, uintptr_t))(Il2CppBase() + 0x24B5DDC))(this, worldModelTransformMatrix);
	}
	template <typename T = Il2CppVector3> T WorldModelTransformPos(Il2CppVector3 worldSpaceCoord) {
		return ((T (*)(BlackMarketActorManager*, Il2CppVector3))(Il2CppBase() + 0x24B5F5C))(this, worldSpaceCoord);
	}
	template <typename T = Il2CppQuaternion> T WorldModelTransformRot(Il2CppQuaternion worldSpaceRot) {
		return ((T (*)(BlackMarketActorManager*, Il2CppQuaternion))(Il2CppBase() + 0x24B604C))(this, worldSpaceRot);
	}

};

}
