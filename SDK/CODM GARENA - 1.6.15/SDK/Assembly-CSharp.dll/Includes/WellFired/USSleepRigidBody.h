#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSleepRigidBody
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSleepRigidBody"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USSleepRigidBody*))(Il2CppBase() + 0x4A498B4))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USSleepRigidBody*, float))(Il2CppBase() + 0x4A49A50))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USSleepRigidBody*))(Il2CppBase() + 0x4A49AF0))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USSleepRigidBody*))(Il2CppBase() + 0x4A49BA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USSleepRigidBody*))(Il2CppBase() + 0x4A49D34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USSleepRigidBody*))(Il2CppBase() + 0x4A49D3C))(this);
	}

};

}
