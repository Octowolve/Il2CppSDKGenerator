#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorFaceGrab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorFaceGrab"));
	}

	template <typename T = uintptr_t> T& grabArm() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDettach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppVector3> T get_attachBoneOffset() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC8BE4))(this);
	}
	template <typename T = Il2CppQuaternion> T get_attachBoneRotation() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC8C30))(this);
	}
	template <typename T = Il2CppString*> T get_attachBoneName() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC8C7C))(this);
	}
	template <typename T = void> T OnAttached() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC8D24))(this);
	}
	template <typename T = void> T ToggleKnife(bool show) {
		return ((T (*)(NetworkAIBehaviorFaceGrab*, bool))(Il2CppBase() + 0x4CC90FC))(this, show);
	}
	template <typename T = void> T OnDettach() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC9480))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkAIBehaviorFaceGrab*, float))(Il2CppBase() + 0x4CC96E4))(this, deltaTime);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC9784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAttached() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC9928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDettach() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC992C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkAIBehaviorFaceGrab*, float))(Il2CppBase() + 0x4CC9930))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorFaceGrab*))(Il2CppBase() + 0x4CC9934))(this);
	}

};

}
