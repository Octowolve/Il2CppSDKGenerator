#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSetAnimatorInteger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSetAnimatorInteger"));
	}

	template <typename T = Il2CppString*> T& valueName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& prevValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x28);
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
		return ((T (*)(USSetAnimatorInteger*))(Il2CppBase() + 0x4A47A24))(this);
	}
	template <typename T = void> T ProcessEvent(float runningTime) {
		return ((T (*)(USSetAnimatorInteger*, float))(Il2CppBase() + 0x4A47C5C))(this, runningTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USSetAnimatorInteger*))(Il2CppBase() + 0x4A47E9C))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USSetAnimatorInteger*))(Il2CppBase() + 0x4A47F4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USSetAnimatorInteger*))(Il2CppBase() + 0x4A480AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USSetAnimatorInteger*))(Il2CppBase() + 0x4A480B4))(this);
	}

};

}
