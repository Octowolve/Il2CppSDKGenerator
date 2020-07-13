#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IndicatorTriggerVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IndicatorTriggerVolume"));
	}

	template <typename T = uintptr_t> T& LocalPlayerEnterExitDelegate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(IndicatorTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3703C48))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(IndicatorTriggerVolume*, uintptr_t))(Il2CppBase() + 0x3703E50))(this, other);
	}

};

}
