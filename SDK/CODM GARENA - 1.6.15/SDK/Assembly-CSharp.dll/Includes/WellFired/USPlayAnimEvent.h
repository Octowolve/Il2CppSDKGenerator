#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USPlayAnimEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USPlayAnimEvent"));
	}

	template <typename T = uintptr_t> T& animationClip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& wrapMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& playbackSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Update() {
		return ((T (*)(USPlayAnimEvent*))(Il2CppBase() + 0x4A41D94))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USPlayAnimEvent*))(Il2CppBase() + 0x4A41ED0))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USPlayAnimEvent*, float))(Il2CppBase() + 0x4A42184))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USPlayAnimEvent*))(Il2CppBase() + 0x4A42834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USPlayAnimEvent*))(Il2CppBase() + 0x4A429C8))(this);
	}

};

}
