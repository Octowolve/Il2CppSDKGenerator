#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USBlendAnimNoScrubEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USBlendAnimNoScrubEvent"));
	}

	template <typename T = uintptr_t> T& blendedAnimation() {
		return *(T*)((uintptr_t)this + 0x1C);
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
		return ((T (*)(USBlendAnimNoScrubEvent*))(Il2CppBase() + 0x4A37A48))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USBlendAnimNoScrubEvent*))(Il2CppBase() + 0x4A37B30))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USBlendAnimNoScrubEvent*, float))(Il2CppBase() + 0x4A37D30))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USBlendAnimNoScrubEvent*))(Il2CppBase() + 0x4A37E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USBlendAnimNoScrubEvent*))(Il2CppBase() + 0x4A37FC8))(this);
	}

};

}
