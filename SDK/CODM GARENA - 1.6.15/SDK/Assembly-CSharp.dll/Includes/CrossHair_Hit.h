#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CrossHairHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CrossHair_Hit"));
	}

	template <typename T = uintptr_t> T& HitTweenAlpha() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CrossHit() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& HitMachineAlpah() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& VestGo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& InvincibleGo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& GravitySpikesGo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyCrossHairHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_NotifyCrossHairHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CrossHairHit*))(Il2CppBase() + 0x4156938))(this);
	}
	template <typename T = void> static T NotifyCrossHairHit(uintptr_t hitType, Il2CppVector3 hitPos) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4156A4C))(0, hitType, hitPos);
	}
	template <typename T = void> static T NotifyCrossHairHit_1(uintptr_t hitType, bool isHeadHit, bool isHasVest, Il2CppVector3 hitPos, bool isGravitySpikes, uintptr_t weaponName) {
		return ((T (*)(void *, uintptr_t, bool, bool, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x4156B34))(0, hitType, isHeadHit, isHasVest, hitPos, isGravitySpikes, weaponName);
	}
	template <typename T = void> T OnNotifyHit(uintptr_t msg) {
		return ((T (*)(CrossHairHit*, uintptr_t))(Il2CppBase() + 0x4156DF4))(this, msg);
	}
	template <typename T = void> T ShowHit(uintptr_t hitTweenAlpha) {
		return ((T (*)(CrossHairHit*, uintptr_t))(Il2CppBase() + 0x4157810))(this, hitTweenAlpha);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrossHairHit*))(Il2CppBase() + 0x41578E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(CrossHairHit*))(Il2CppBase() + 0x41578E8))(this);
	}

};

}
