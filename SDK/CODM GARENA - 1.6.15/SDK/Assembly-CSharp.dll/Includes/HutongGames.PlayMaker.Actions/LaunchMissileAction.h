#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LaunchMissileAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LaunchMissileAction"));
	}

	template <typename T = uintptr_t> T& startPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& endPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& fSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& missilePrefab() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& explosionPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& missileObj() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& explosionObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& fAccelerate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& fSpeedCur() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& fTimeStart() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& fTimeCur() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& fMaxTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& posCur() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& posEnd() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(LaunchMissileAction*))(Il2CppBase() + 0x4D74614))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(LaunchMissileAction*))(Il2CppBase() + 0x4D74618))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(LaunchMissileAction*))(Il2CppBase() + 0x4D7470C))(this);
	}

};

}
