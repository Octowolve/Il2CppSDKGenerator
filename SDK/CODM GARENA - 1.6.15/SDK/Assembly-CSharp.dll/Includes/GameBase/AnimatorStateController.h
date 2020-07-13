#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AnimatorStateController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AnimatorStateController"));
	}

	template <typename T = int32_t> T& DefaultLeftHandHoldType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AnimatorControllerChangeWeaponState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_AimIKSolverComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsInit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& GameAnimatorLayerStates() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_ResetLayerState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_CurrentChangeClip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_TickCurrentChangeClip() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLayerRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRunningIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuningState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGetWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetIKStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRunningChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickRunningChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCleanChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResetLayerState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T set_IKEnable(bool value) {
		return ((T (*)(AnimatorStateController*, bool))(Il2CppBase() + 0x3B7A318))(this, value);
	}
	template <typename T = bool> T get_IKEnable() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7A3F8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7A4DC))(this);
	}
	template <typename T = void> T AddLayerRecord(Il2CppString* layerName) {
		return ((T (*)(AnimatorStateController*, Il2CppString*))(Il2CppBase() + 0x3B7A588))(this, layerName);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7A6C4))(this);
	}
	template <typename T = void> T CheckRunningIK(bool isStopTransitionIfStop, bool inTranstion, float normalizeTime, float duationTime) {
		return ((T (*)(AnimatorStateController*, bool, bool, float, float))(Il2CppBase() + 0x3B7A95C))(this, isStopTransitionIfStop, inTranstion, normalizeTime, duationTime);
	}
	template <typename T = void> T SetRuningState(int32_t nameHash, bool isEnter, int32_t layerIndex, bool inTransition, float normalizeTime, float duationTime) {
		return ((T (*)(AnimatorStateController*, int32_t, bool, int32_t, bool, float, float))(Il2CppBase() + 0x3B7ACD0))(this, nameHash, isEnter, layerIndex, inTransition, normalizeTime, duationTime);
	}
	template <typename T = void> T CheckGetWeapon(int32_t nameHash, bool isEnter, float duationTime) {
		return ((T (*)(AnimatorStateController*, int32_t, bool, float))(Il2CppBase() + 0x3B7AF6C))(this, nameHash, isEnter, duationTime);
	}
	template <typename T = void> T SetLeftHandRunning(int32_t nameHash, bool isRunning, int32_t layerIndex, int32_t leftHandHoldType) {
		return ((T (*)(AnimatorStateController*, int32_t, bool, int32_t, int32_t))(Il2CppBase() + 0x3B7B668))(this, nameHash, isRunning, layerIndex, leftHandHoldType);
	}
	template <typename T = void> T ResetIKStates() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B6A880))(this);
	}
	template <typename T = void> T CheckEnabled() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7B7E4))(this);
	}
	template <typename T = void> T CheckRunningChangeClip() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7B2D0))(this);
	}
	template <typename T = void> T TickRunningChangeClip() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7B8A8))(this);
	}
	template <typename T = void> T CheckCleanChangeClip() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7B728))(this);
	}
	template <typename T = void> T CheckResetLayerState() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7B9B8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7C02C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7C0D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7C174))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AnimatorStateController*))(Il2CppBase() + 0x3B7C218))(this);
	}

};

}
