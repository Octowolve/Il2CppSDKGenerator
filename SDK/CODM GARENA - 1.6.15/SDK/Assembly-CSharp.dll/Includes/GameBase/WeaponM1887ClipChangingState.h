#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponM1887ClipChangingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponM1887ClipChangingState"));
	}

	template <typename T = uintptr_t> T& mState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mStopChangeClip() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mWaitSyncEndTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mIsWaitingSyncEnd() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& delayEndOneFrame() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRequestChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ChangeClipPhase(uintptr_t state) {
		return ((T (*)(WeaponM1887ClipChangingState*, uintptr_t))(Il2CppBase() + 0x3A57BF4))(this, state);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A57F50))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponM1887ClipChangingState*, float))(Il2CppBase() + 0x3A58310))(this, DeltaTime);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A586D4))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A58778))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A5881C))(this);
	}
	template <typename T = void> T DoRequestChangeClip() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A588B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A58A00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponM1887ClipChangingState*, float))(Il2CppBase() + 0x3A58A08))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A58A10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A58A18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A58A20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoRequestChangeClip() {
		return ((T (*)(WeaponM1887ClipChangingState*))(Il2CppBase() + 0x3A58A28))(this);
	}

};

}
