#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkGameObjEnvironmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkGameObjEnvironmentData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& activeEnvironments() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& activeEnvironmentsFromPortals() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& activePortals() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& auxSendValues() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& lastPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasEnvironmentListChanged() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& hasActivePortalListChanged() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& hasSentZero() {
		return *(T*)((uintptr_t)this + 0x26);
	}

	template <typename T = void> T AddHighestPriorityEnvironmentsFromPortals(Il2CppVector3 position) {
		return ((T (*)(AkGameObjEnvironmentData*, Il2CppVector3))(Il2CppBase() + 0x4900D48))(this, position);
	}
	template <typename T = void> T AddHighestPriorityEnvironments(Il2CppVector3 position) {
		return ((T (*)(AkGameObjEnvironmentData*, Il2CppVector3))(Il2CppBase() + 0x4901000))(this, position);
	}
	template <typename T = void> T UpdateAuxSend(uintptr_t gameObject, Il2CppVector3 position) {
		return ((T (*)(AkGameObjEnvironmentData*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4900004))(this, gameObject, position);
	}
	template <typename T = void> T TryAddEnvironment(uintptr_t env) {
		return ((T (*)(AkGameObjEnvironmentData*, uintptr_t))(Il2CppBase() + 0x49011CC))(this, env);
	}
	template <typename T = void> T RemoveEnvironment(uintptr_t env) {
		return ((T (*)(AkGameObjEnvironmentData*, uintptr_t))(Il2CppBase() + 0x49013EC))(this, env);
	}
	template <typename T = void> T AddAkEnvironment(uintptr_t environmentCollider, uintptr_t gameObjectCollider) {
		return ((T (*)(AkGameObjEnvironmentData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48FFE68))(this, environmentCollider, gameObjectCollider);
	}
	template <typename T = bool> T AkEnvironmentBelongsToActivePortals(uintptr_t env) {
		return ((T (*)(AkGameObjEnvironmentData*, uintptr_t))(Il2CppBase() + 0x49014BC))(this, env);
	}
	template <typename T = void> T RemoveAkEnvironment(uintptr_t environmentCollider, uintptr_t gameObjectCollider) {
		return ((T (*)(AkGameObjEnvironmentData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4900A4C))(this, environmentCollider, gameObjectCollider);
	}

};

}
