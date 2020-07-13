#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class TacticalActorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "TacticalActorManager"));
	}

	template <typename T = uintptr_t> T& tacticalBaseView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ActorInfoList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpriteList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& EmptyObjectPool() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint32_t>*> T& InactiveActors() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& ActorSpriteList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& AliveActors() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateActors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpritePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInactiveActors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoDataInjection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalActorManager*))(Il2CppBase() + 0x35AC5B4))(this);
	}
	template <typename T = void> T UpdateActors() {
		return ((T (*)(TacticalActorManager*))(Il2CppBase() + 0x35AC658))(this);
	}
	template <typename T = void> T SpawnSprite(uintptr_t firstChild, uintptr_t* outSprite) {
		return ((T (*)(TacticalActorManager*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x35ACA6C))(this, firstChild, outSprite);
	}
	template <typename T = void> T UpdateSpritePos(uintptr_t inSprite, Il2CppVector3 worldPos, Il2CppQuaternion worldRot) {
		return ((T (*)(TacticalActorManager*, uintptr_t, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x35ACCF0))(this, inSprite, worldPos, worldRot);
	}
	template <typename T = void> T RemoveInactiveActors() {
		return ((T (*)(TacticalActorManager*))(Il2CppBase() + 0x35ACEF8))(this);
	}
	template <typename T = void> T ActorInfoDataInjection(Il2CppList<uintptr_t>* inTacticalActorInfoList, Il2CppList<uintptr_t>* inSpriteList) {
		return ((T (*)(TacticalActorManager*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x35AD480))(this, inTacticalActorInfoList, inSpriteList);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalActorManager*))(Il2CppBase() + 0x35AD544))(this);
	}

};

}
