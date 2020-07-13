#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class SequenceTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "SequenceTrigger"));
	}

	template <typename T = bool> T& isPlayerTrigger() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isMainCameraTrigger() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& triggerObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sequenceToPlay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(SequenceTrigger*, uintptr_t))(Il2CppBase() + 0x4A345B4))(this, other);
	}

};

}
