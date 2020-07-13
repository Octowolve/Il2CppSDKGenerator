#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USBlendAnimEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USBlendAnimEvent"));
	}

	template <typename T = uintptr_t> T& animationClipSource() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& animationClipDest() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& blendPoint() {
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
		return ((T (*)(USBlendAnimEvent*))(Il2CppBase() + 0x4A36E9C))(this);
	}
	template <typename T = void> T FireEvent() {
		return ((T (*)(USBlendAnimEvent*))(Il2CppBase() + 0x4A36F64))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USBlendAnimEvent*, float))(Il2CppBase() + 0x4A37128))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USBlendAnimEvent*))(Il2CppBase() + 0x4A37808))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USBlendAnimEvent*))(Il2CppBase() + 0x4A3799C))(this);
	}

};

}
