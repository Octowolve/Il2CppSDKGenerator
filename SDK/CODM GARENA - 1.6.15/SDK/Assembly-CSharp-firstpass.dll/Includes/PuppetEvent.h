#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "PuppetEvent"));
	}

	template <typename T = Il2CppString*> T& switchToBehaviour() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& animations() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& unityEvent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> static T& empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_switchBehaviour() {
		return ((T (*)(PuppetEvent*))(Il2CppBase() + 0x38A8AD0))(this);
	}
	template <typename T = void> T Trigger(uintptr_t puppetMaster, bool switchBehaviourEnabled) {
		return ((T (*)(PuppetEvent*, uintptr_t, bool))(Il2CppBase() + 0x38A8D80))(this, puppetMaster, switchBehaviourEnabled);
	}

};

}
