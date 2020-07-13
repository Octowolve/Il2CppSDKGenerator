#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USLookAtObjectEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USLookAtObjectEvent"));
	}

	template <typename T = uintptr_t> T& objectToLookAt() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& inCurve() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& outCurve() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& lookAtTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& sourceOrientation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppQuaternion> T& previousRotation() {
		return *(T*)((uintptr_t)this + 0x3C);
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
		return ((T (*)(USLookAtObjectEvent*))(Il2CppBase() + 0x4A3DBD8))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USLookAtObjectEvent*, float))(Il2CppBase() + 0x4A3DDD8))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USLookAtObjectEvent*))(Il2CppBase() + 0x4A3E1D4))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USLookAtObjectEvent*))(Il2CppBase() + 0x4A3E284))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USLookAtObjectEvent*))(Il2CppBase() + 0x4A3E3D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USLookAtObjectEvent*))(Il2CppBase() + 0x4A3E3DC))(this);
	}

};

}
