#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class WNPawnSoundEmitterSpatialAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "WNPawnSoundEmitterSpatialAudioComponent"));
	}

	template <typename T = bool> static T& DrawDebugGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& mLastLocalPlayerPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& mLastPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& mWayPointID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mOwner() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mThisWayPoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPathToLP() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& mRTPCPath2Length() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSeperatly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(Il2CppString* strUniqueName, uintptr_t pOwner) {
		return ((T (*)(WNPawnSoundEmitterSpatialAudioComponent*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x35DD424))(this, strUniqueName, pOwner);
	}
	template <typename T = void> T Term() {
		return ((T (*)(WNPawnSoundEmitterSpatialAudioComponent*))(Il2CppBase() + 0x35DD630))(this);
	}
	template <typename T = void> T TickSeperatly() {
		return ((T (*)(WNPawnSoundEmitterSpatialAudioComponent*))(Il2CppBase() + 0x35DD80C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(WNPawnSoundEmitterSpatialAudioComponent*))(Il2CppBase() + 0x35DE6E4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mListAllColliders() {
		return ((T (*)(WNPawnSoundEmitterSpatialAudioComponent*))(Il2CppBase() + 0x35DE63C))(this);
	}
	template <typename T = uintptr_t> T get_WayPoint() {
		return ((T (*)(WNPawnSoundEmitterSpatialAudioComponent*))(Il2CppBase() + 0x35DE6DC))(this);
	}

};

}
