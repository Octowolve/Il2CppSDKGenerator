#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DebugCenter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DebugCenter"));
	}

	template <typename T = bool> T& LocalPlayerGod() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& LocalPlayerGod_OldValue() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& AttachDebugComponetToAllAIPawn() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& CrowdBehaviorEnableAll() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& CrowdBehaviorDisableAll() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& CrowdBehaviorAssignValues() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = float> T& Slomo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& NavAgentUpdateRotationEnableAll() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& NavAgentUpdateRotationDisableAll() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& SetAnimatorPropertiesOfAllAI() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& Anim_Enabled() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = float> T& Anim_Speed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Anim_LayerWeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& AnimatorUpdateByScriptEnableAll() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& AnimatorUpdateByScriptDisableAll() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cmd_LocalPlayerGod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cmd_AttachDebugComponetToAllAIPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cmd_SetActiveOfAllCrowdBehaviors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cmd_CrowdBehaviorAssignValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cmd_SetNavAgentUpdateRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cmd_SetAIAnimatorProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cmd_SetAnimatorUpdateByScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(DebugCenter*))(Il2CppBase() + 0x40DA4C4))(this);
	}
	template <typename T = void> T Cmd_LocalPlayerGod() {
		return ((T (*)(DebugCenter*))(Il2CppBase() + 0x40DA55C))(this);
	}
	template <typename T = void> T Cmd_AttachDebugComponetToAllAIPawn() {
		return ((T (*)(DebugCenter*))(Il2CppBase() + 0x40DA730))(this);
	}
	template <typename T = void> T Cmd_SetActiveOfAllCrowdBehaviors(bool value) {
		return ((T (*)(DebugCenter*, bool))(Il2CppBase() + 0x40DAAC0))(this, value);
	}
	template <typename T = void> T Cmd_CrowdBehaviorAssignValues() {
		return ((T (*)(DebugCenter*))(Il2CppBase() + 0x40DAD48))(this);
	}
	template <typename T = void> T Cmd_SetNavAgentUpdateRotation(bool value) {
		return ((T (*)(DebugCenter*, bool))(Il2CppBase() + 0x40DB0E0))(this, value);
	}
	template <typename T = void> T Cmd_SetAIAnimatorProperty(bool enabled, float speed, float layerWeight) {
		return ((T (*)(DebugCenter*, bool, float, float))(Il2CppBase() + 0x40DB3EC))(this, enabled, speed, layerWeight);
	}
	template <typename T = void> T Cmd_SetAnimatorUpdateByScript(bool value) {
		return ((T (*)(DebugCenter*, bool))(Il2CppBase() + 0x40DB728))(this, value);
	}

};

}
