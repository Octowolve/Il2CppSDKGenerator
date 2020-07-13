#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USAttachToParentEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USAttachToParentEvent"));
	}

	template <typename T = uintptr_t> T& parentObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& originalParent() {
		return *(T*)((uintptr_t)this + 0x20);
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
		return ((T (*)(USAttachToParentEvent*))(Il2CppBase() + 0x4A36998))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USAttachToParentEvent*, float))(Il2CppBase() + 0x4A36B58))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USAttachToParentEvent*))(Il2CppBase() + 0x4A36BF8))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USAttachToParentEvent*))(Il2CppBase() + 0x4A36CA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USAttachToParentEvent*))(Il2CppBase() + 0x4A36DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USAttachToParentEvent*))(Il2CppBase() + 0x4A36DE8))(this);
	}

};

}
