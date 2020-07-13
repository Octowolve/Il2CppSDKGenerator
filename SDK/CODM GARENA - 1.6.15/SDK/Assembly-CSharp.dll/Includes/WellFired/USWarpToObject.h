#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USWarpToObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USWarpToObject"));
	}

	template <typename T = uintptr_t> T& objectToWarpTo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& useObjectRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& previousTransform() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USWarpToObject*))(Il2CppBase() + 0x4A4C2AC))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USWarpToObject*, float))(Il2CppBase() + 0x4A4C570))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USWarpToObject*))(Il2CppBase() + 0x4A4C610))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USWarpToObject*))(Il2CppBase() + 0x4A4C6C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USWarpToObject*))(Il2CppBase() + 0x4A4C87C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USWarpToObject*))(Il2CppBase() + 0x4A4C884))(this);
	}

};

}
