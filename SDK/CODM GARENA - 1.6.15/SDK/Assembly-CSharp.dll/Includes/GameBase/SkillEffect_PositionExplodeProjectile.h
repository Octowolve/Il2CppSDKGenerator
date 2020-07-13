#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillEffectPositionExplodeProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillEffect_PositionExplodeProjectile"));
	}

	template <typename T = float> static T& FIX_UPDATE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& EntityRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& GravityScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxSimulateTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_FireOffset() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplodePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireDirectOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCorrectHitNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppVector3> T GetExplodePosition() {
		return ((T (*)(SkillEffectPositionExplodeProjectile*))(Il2CppBase() + 0x3089390))(this);
	}
	template <typename T = void> T CalcInitData(float InitSpeed, uintptr_t InitPosition, uintptr_t InitVelocity) {
		return ((T (*)(SkillEffectPositionExplodeProjectile*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3089A88))(this, InitSpeed, InitPosition, InitVelocity);
	}
	template <typename T = Il2CppVector3> T GetFireDirectOffset() {
		return ((T (*)(SkillEffectPositionExplodeProjectile*))(Il2CppBase() + 0x3089F48))(this);
	}
	template <typename T = Il2CppVector3> T GetFireOffset() {
		return ((T (*)(SkillEffectPositionExplodeProjectile*))(Il2CppBase() + 0x3089E94))(this);
	}
	template <typename T = Il2CppVector3> T GetCorrectHitNormal(Il2CppVector3 hitNormal, Il2CppVector3 velocity) {
		return ((T (*)(SkillEffectPositionExplodeProjectile*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3089D24))(this, hitNormal, velocity);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetExplodePosition() {
		return ((T (*)(SkillEffectPositionExplodeProjectile*))(Il2CppBase() + 0x308A1AC))(this);
	}

};

}
