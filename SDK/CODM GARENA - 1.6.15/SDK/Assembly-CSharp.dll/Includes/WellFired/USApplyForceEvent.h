#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USApplyForceEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USApplyForceEvent"));
	}

	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& strength() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& previousTransform() {
		return *(T*)((uintptr_t)this + 0x30);
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
		return ((T (*)(USApplyForceEvent*))(Il2CppBase() + 0x4A362CC))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USApplyForceEvent*, float))(Il2CppBase() + 0x4A364F8))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USApplyForceEvent*))(Il2CppBase() + 0x4A36598))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USApplyForceEvent*))(Il2CppBase() + 0x4A36648))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USApplyForceEvent*))(Il2CppBase() + 0x4A368E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USApplyForceEvent*))(Il2CppBase() + 0x4A368EC))(this);
	}

};

}
