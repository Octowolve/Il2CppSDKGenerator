#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdGoCamp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_GoCamp"));
	}

	template <typename T = bool> T& shouldCrouch() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& campDest() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& campLookDir() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& campDuration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& finishCrouchTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& alertAngle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& lookSide() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& elapsedRotateTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& totalRotateTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppQuaternion> T& destRotation() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& rotateFinish() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextLookDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldContinueCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldFightEnemy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T Execute(uintptr_t owner, Il2CppVector3 destPos, Il2CppQuaternion destLookDir, float inAlertAngle, bool inCrouch, float inCampDuration) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion, float, bool, float))(Il2CppBase() + 0x4CE9FBC))(0, owner, destPos, destLookDir, inAlertAngle, inCrouch, inCampDuration);
	}
	template <typename T = Il2CppQuaternion> T GetNextLookDir() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEA150))(this);
	}
	template <typename T = bool> T ShouldContinueCamp() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEA2BC))(this);
	}
	template <typename T = void> T StartRotate(float totalDuration, Il2CppQuaternion destLookDir) {
		return ((T (*)(AICmdGoCamp*, float, Il2CppQuaternion))(Il2CppBase() + 0x4CEA3B4))(this, totalDuration, destLookDir);
	}
	template <typename T = bool> T UpdateRotation(float deltaTime) {
		return ((T (*)(AICmdGoCamp*, float))(Il2CppBase() + 0x4CEA4AC))(this, deltaTime);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEA7C4))(this);
	}
	template <typename T = bool> T ShouldFightEnemy() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEA8AC))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEA94C))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEA9F4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AICmdGoCamp*, float))(Il2CppBase() + 0x4CEAB44))(this, deltaTime);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEAC04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEAC0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdGoCamp*))(Il2CppBase() + 0x4CEAC14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AICmdGoCamp*, float))(Il2CppBase() + 0x4CEAC1C))(this, P0);
	}

};

}
