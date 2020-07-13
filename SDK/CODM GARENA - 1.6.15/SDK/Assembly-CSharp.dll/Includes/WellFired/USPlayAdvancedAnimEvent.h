#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USPlayAdvancedAnimEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USPlayAdvancedAnimEvent"));
	}

	template <typename T = uintptr_t> T& animationClip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& wrapMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& blendMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& playbackSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& animationWeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& animationLayer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& crossFadeAnimation() {
		return *(T*)((uintptr_t)this + 0x34);
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
	template <typename T = uintptr_t> static T& __Hotfix0_EndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Update() {
		return ((T (*)(USPlayAdvancedAnimEvent*))(Il2CppBase() + 0x4A40FB8))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USPlayAdvancedAnimEvent*))(Il2CppBase() + 0x4A410F4))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USPlayAdvancedAnimEvent*, float))(Il2CppBase() + 0x4A413FC))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USPlayAdvancedAnimEvent*))(Il2CppBase() + 0x4A41A94))(this);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USPlayAdvancedAnimEvent*))(Il2CppBase() + 0x4A41C28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USPlayAdvancedAnimEvent*))(Il2CppBase() + 0x4A41CD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USPlayAdvancedAnimEvent*))(Il2CppBase() + 0x4A41CE0))(this);
	}

};

}
