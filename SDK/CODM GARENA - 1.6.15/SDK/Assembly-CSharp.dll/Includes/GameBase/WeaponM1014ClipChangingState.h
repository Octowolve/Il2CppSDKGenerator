#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponM1014ClipChangingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponM1014ClipChangingState"));
	}

	template <typename T = uintptr_t> T& mState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mBeginFire() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& mStopChangeClip() {
		return *(T*)((uintptr_t)this + 0x3D);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetChangeClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRequestChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T ChangeClipPhase(uintptr_t state) {
		return ((T (*)(WeaponM1014ClipChangingState*, uintptr_t))(Il2CppBase() + 0x3A56480))(this, state);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A56B64))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponM1014ClipChangingState*, float))(Il2CppBase() + 0x3A56894))(this, DeltaTime);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A56F9C))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A57048))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A570FC))(this);
	}
	template <typename T = float> T GetChangeClipTime() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A5675C))(this);
	}
	template <typename T = void> T DoRequestChangeClip() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A57218))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A57364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponM1014ClipChangingState*, float))(Il2CppBase() + 0x3A5736C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A57374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A5737C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A57384))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetChangeClipTime() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A5738C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoRequestChangeClip() {
		return ((T (*)(WeaponM1014ClipChangingState*))(Il2CppBase() + 0x3A57394))(this);
	}

};

}
