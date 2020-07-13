#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponClipChangingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponClipChangingState"));
	}

	template <typename T = float> T& mClipChangeElapseTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mClipChangingTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_DoChangeClipTimeRate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_DoChangeClipTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mClipChangingOver() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentChangeClipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChangeClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReloadDoneStateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T EndState() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB8488))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB8978))(this);
	}
	template <typename T = void> T StopCurrentChangeClipAnim() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB8A38))(this);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB8CA4))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB8D88))(this);
	}
	template <typename T = float> T GetChangeClipTime() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9064))(this);
	}
	template <typename T = void> T PlayChangeClip() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9120))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponClipChangingState*, float))(Il2CppBase() + 0x2EB91E8))(this, DeltaTime);
	}
	template <typename T = uintptr_t> T GetReloadDoneStateType() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9408))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB94A8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB95F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB95F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponClipChangingState*, float))(Il2CppBase() + 0x2EB9610))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9618))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponClipChangingState*))(Il2CppBase() + 0x2EB9620))(this);
	}

};

}
