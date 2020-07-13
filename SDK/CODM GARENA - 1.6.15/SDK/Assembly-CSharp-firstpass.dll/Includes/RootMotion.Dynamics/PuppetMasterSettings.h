#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PuppetMasterSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PuppetMasterSettings"));
	}

	template <typename T = uintptr_t> T& kinematicCollidersUpdateLimit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& freeUpdateLimit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fixedUpdateLimit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& collisionStayMessages() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& collisionExitMessages() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& activePuppetCollisionThresholdMlp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& currentlyActivePuppets() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& currentlyKinematicPuppets() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& currentlyDisabledPuppets() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _puppets() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_currentlyActivePuppets() {
		return ((T (*)(PuppetMasterSettings*))(Il2CppBase() + 0x38AEDA8))(this);
	}
	template <typename T = void> T set_currentlyActivePuppets(int32_t value) {
		return ((T (*)(PuppetMasterSettings*, int32_t))(Il2CppBase() + 0x38D0610))(this, value);
	}
	template <typename T = int32_t> T get_currentlyKinematicPuppets() {
		return ((T (*)(PuppetMasterSettings*))(Il2CppBase() + 0x38D0618))(this);
	}
	template <typename T = void> T set_currentlyKinematicPuppets(int32_t value) {
		return ((T (*)(PuppetMasterSettings*, int32_t))(Il2CppBase() + 0x38D0620))(this, value);
	}
	template <typename T = int32_t> T get_currentlyDisabledPuppets() {
		return ((T (*)(PuppetMasterSettings*))(Il2CppBase() + 0x38D0628))(this);
	}
	template <typename T = void> T set_currentlyDisabledPuppets(int32_t value) {
		return ((T (*)(PuppetMasterSettings*, int32_t))(Il2CppBase() + 0x38D0630))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_puppets() {
		return ((T (*)(PuppetMasterSettings*))(Il2CppBase() + 0x38D0638))(this);
	}
	template <typename T = void> T Register(uintptr_t puppetMaster) {
		return ((T (*)(PuppetMasterSettings*, uintptr_t))(Il2CppBase() + 0x38C1AF0))(this, puppetMaster);
	}
	template <typename T = void> T Unregister(uintptr_t puppetMaster) {
		return ((T (*)(PuppetMasterSettings*, uintptr_t))(Il2CppBase() + 0x38C29E8))(this, puppetMaster);
	}
	template <typename T = bool> T UpdateMoveToTarget(uintptr_t puppetMaster) {
		return ((T (*)(PuppetMasterSettings*, uintptr_t))(Il2CppBase() + 0x38C5A9C))(this, puppetMaster);
	}
	template <typename T = bool> T UpdateFree(uintptr_t puppetMaster) {
		return ((T (*)(PuppetMasterSettings*, uintptr_t))(Il2CppBase() + 0x38D0824))(this, puppetMaster);
	}
	template <typename T = bool> T UpdateFixed(uintptr_t puppetMaster) {
		return ((T (*)(PuppetMasterSettings*, uintptr_t))(Il2CppBase() + 0x38D0858))(this, puppetMaster);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PuppetMasterSettings*))(Il2CppBase() + 0x38D088C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PuppetMasterSettings*))(Il2CppBase() + 0x38D0B64))(this);
	}

};

}
