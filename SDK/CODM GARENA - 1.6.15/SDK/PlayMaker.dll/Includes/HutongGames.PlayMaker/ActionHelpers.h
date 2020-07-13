#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ActionHelpers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ActionHelpers"));
	}

	template <typename T = uintptr_t> static T& whiteTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mousePickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& mousePickRaycastTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = float> static T& mousePickDistanceUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& mousePickLayerMaskUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> static T get_WhiteTexture() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EE7BFC))(0);
	}
	template <typename T = bool> static T IsVisible(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE7DAC))(0, go);
	}
	template <typename T = void> static T RuntimeError(uintptr_t action, Il2CppString* error) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2EE7F00))(0, action, error);
	}
	template <typename T = uintptr_t> static T GetGameObjectFsm(uintptr_t go, Il2CppString* fsmName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2EE80DC))(0, go, fsmName);
	}
	template <typename T = int32_t> static T GetRandomWeightedIndex(Il2CppArray<uintptr_t>* weights) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2EE8350))(0, weights);
	}
	template <typename T = bool> static T HasAnimationFinished(uintptr_t anim, float prevTime, float currentTime) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x2EE846C))(0, anim, prevTime, currentTime);
	}
	template <typename T = Il2CppVector3> static T GetPosition(uintptr_t fsmGameObject, uintptr_t fsmVector3) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EE8584))(0, fsmGameObject, fsmVector3);
	}
	template <typename T = bool> static T IsMouseOver(uintptr_t gameObject, float distance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, float, int32_t))(Il2CppBase() + 0x2EE8808))(0, gameObject, distance, layerMask);
	}
	template <typename T = uintptr_t> static T MousePick(float distance, int32_t layerMask) {
		return ((T (*)(void *, float, int32_t))(Il2CppBase() + 0x2EE8B1C))(0, distance, layerMask);
	}
	template <typename T = uintptr_t> static T MouseOver(float distance, int32_t layerMask) {
		return ((T (*)(void *, float, int32_t))(Il2CppBase() + 0x2EE8924))(0, distance, layerMask);
	}
	template <typename T = void> static T DoMousePick(float distance, int32_t layerMask) {
		return ((T (*)(void *, float, int32_t))(Il2CppBase() + 0x2EE8C64))(0, distance, layerMask);
	}
	template <typename T = int32_t> static T LayerArrayToLayerMask(Il2CppArray<uintptr_t>* layers, bool invert) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2EE8E54))(0, layers, invert);
	}
	template <typename T = bool> static T IsLoopingWrapMode(uintptr_t wrapMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE8EE0))(0, wrapMode);
	}
	template <typename T = Il2CppString*> static T CheckRayDistance(float rayDistance) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2EE8F00))(0, rayDistance);
	}
	template <typename T = Il2CppString*> static T CheckForValidEvent(uintptr_t state, Il2CppString* eventName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2EE8F98))(0, state, eventName);
	}
	template <typename T = Il2CppString*> static T CheckPhysicsSetup(uintptr_t ownerDefault) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE9390))(0, ownerDefault);
	}
	template <typename T = Il2CppString*> static T CheckOwnerPhysicsSetup(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE969C))(0, gameObject);
	}
	template <typename T = Il2CppString*> static T CheckOwnerPhysics2dSetup(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE98EC))(0, gameObject);
	}
	template <typename T = Il2CppString*> static T CheckPhysicsSetup_1(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE944C))(0, gameObject);
	}
	template <typename T = void> static T DebugLog(uintptr_t fsm, uintptr_t logLevel, Il2CppString* text, bool sendToUnityLog) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x2EE9B3C))(0, fsm, logLevel, text, sendToUnityLog);
	}
	template <typename T = void> static T LogError(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2EEA0A8))(0, text);
	}
	template <typename T = void> static T LogWarning(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2EEA2CC))(0, text);
	}
	template <typename T = Il2CppString*> static T GetValueLabel(uintptr_t variable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEA388))(0, variable);
	}
	template <typename T = Il2CppString*> static T GetValueLabel_1(uintptr_t fsm, uintptr_t ownerDefault) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EEA7AC))(0, fsm, ownerDefault);
	}
	template <typename T = void> static T AddAnimationClip(uintptr_t go, uintptr_t animClip) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EEA860))(0, go, animClip);
	}

};

}
