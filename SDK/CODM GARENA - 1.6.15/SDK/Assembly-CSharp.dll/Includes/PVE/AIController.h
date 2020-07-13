#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIController"));
	}

	template <typename T = uintptr_t> T& Focus() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnInSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsObjInSight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleVisibilityTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_ViewType() {
		return ((T (*)(AIController*))(Il2CppBase() + 0x49A828C))(this);
	}
	template <typename T = float> T get_SightRadius() {
		return ((T (*)(AIController*))(Il2CppBase() + 0x49A8294))(this);
	}
	template <typename T = bool> T get_ShouldCheckPeripheralVision() {
		return ((T (*)(AIController*))(Il2CppBase() + 0x49A82C0))(this);
	}
	template <typename T = void> T UpdatePawnRotation() {
		return ((T (*)(AIController*))(Il2CppBase() + 0x49A82C8))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AIController*, float))(Il2CppBase() + 0x49A8360))(this, deltaTime);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AIController*))(Il2CppBase() + 0x49A8474))(this);
	}
	template <typename T = bool> T IsPawnInSight(uintptr_t InPawn, bool UseLineCheck) {
		return ((T (*)(AIController*, uintptr_t, bool))(Il2CppBase() + 0x49A85A4))(this, InPawn, UseLineCheck);
	}
	template <typename T = bool> T IsObjInSight(uintptr_t obj, bool UseLineCheck) {
		return ((T (*)(AIController*, uintptr_t, bool))(Il2CppBase() + 0x49A8A84))(this, obj, UseLineCheck);
	}
	template <typename T = bool> T SimpleVisibilityTest(Il2CppVector3 targetPos) {
		return ((T (*)(AIController*, Il2CppVector3))(Il2CppBase() + 0x49A87F4))(this, targetPos);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AIController*, float))(Il2CppBase() + 0x49A8DB0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AIController*))(Il2CppBase() + 0x49A8DB8))(this);
	}

};

}
