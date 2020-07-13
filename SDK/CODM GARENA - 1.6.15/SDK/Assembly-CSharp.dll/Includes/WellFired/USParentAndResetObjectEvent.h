#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USParentAndResetObjectEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USParentAndResetObjectEvent"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& child() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& previousParent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& previousPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& previousRotation() {
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
		return ((T (*)(USParentAndResetObjectEvent*))(Il2CppBase() + 0x4A3F74C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USParentAndResetObjectEvent*, float))(Il2CppBase() + 0x4A3F8F0))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USParentAndResetObjectEvent*))(Il2CppBase() + 0x4A3F990))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USParentAndResetObjectEvent*))(Il2CppBase() + 0x4A3FA40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USParentAndResetObjectEvent*))(Il2CppBase() + 0x4A3FBB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USParentAndResetObjectEvent*))(Il2CppBase() + 0x4A3FBB8))(this);
	}

};

}
