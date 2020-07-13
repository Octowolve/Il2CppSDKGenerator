#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USMatchObjectEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USMatchObjectEvent"));
	}

	template <typename T = uintptr_t> T& objectToMatch() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& inCurve() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& sourceRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& sourcePosition() {
		return *(T*)((uintptr_t)this + 0x34);
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
		return ((T (*)(USMatchObjectEvent*))(Il2CppBase() + 0x4A3E5C8))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USMatchObjectEvent*, float))(Il2CppBase() + 0x4A3E7C8))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USMatchObjectEvent*))(Il2CppBase() + 0x4A3EB3C))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USMatchObjectEvent*))(Il2CppBase() + 0x4A3EBEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USMatchObjectEvent*))(Il2CppBase() + 0x4A3ED74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USMatchObjectEvent*))(Il2CppBase() + 0x4A3ED7C))(this);
	}

};

}
