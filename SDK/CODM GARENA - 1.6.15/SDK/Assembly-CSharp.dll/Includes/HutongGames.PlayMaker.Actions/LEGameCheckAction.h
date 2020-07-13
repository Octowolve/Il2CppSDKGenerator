#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LEGameCheckAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LEGameCheckAction"));
	}

	template <typename T = bool> T& CheckNoAmmo() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& CheckClipAmmoFull() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& CheckKillStreakUsed() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = uintptr_t> T& CurrentWeaponName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& CheckMissileExplored() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& FsmType() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnUpdate() {
		return ((T (*)(LEGameCheckAction*))(Il2CppBase() + 0x4D74718))(this);
	}
	template <typename T = void> T SendFsmEvent(Il2CppString* eventName) {
		return ((T (*)(LEGameCheckAction*, Il2CppString*))(Il2CppBase() + 0x4D74E8C))(this, eventName);
	}

};

}
