#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimeScaleEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USTimeScaleEvent"));
	}

	template <typename T = uintptr_t> T& scaleCurve() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& currentCurveSampleTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& prevTimeScale() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_EndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USTimeScaleEvent*))(Il2CppBase() + 0x4A4B33C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USTimeScaleEvent*, float))(Il2CppBase() + 0x4A4B3E8))(this, deltaTime);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USTimeScaleEvent*))(Il2CppBase() + 0x4A4B518))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USTimeScaleEvent*))(Il2CppBase() + 0x4A4B694))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USTimeScaleEvent*))(Il2CppBase() + 0x4A4B744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USTimeScaleEvent*))(Il2CppBase() + 0x4A4B7F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USTimeScaleEvent*))(Il2CppBase() + 0x4A4B800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USTimeScaleEvent*))(Il2CppBase() + 0x4A4B808))(this);
	}

};

}
