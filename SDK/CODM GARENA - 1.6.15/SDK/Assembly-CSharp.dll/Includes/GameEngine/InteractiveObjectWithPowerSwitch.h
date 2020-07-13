#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InteractiveObjectWithPowerSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InteractiveObjectWithPowerSwitch"));
	}

	template <typename T = uintptr_t> T& m_ControllerBy() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetControllByPowerSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetControllByPowerSwitch() {
		return ((T (*)(InteractiveObjectWithPowerSwitch*))(Il2CppBase() + 0x246144C))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(InteractiveObjectWithPowerSwitch*, uintptr_t, bool))(Il2CppBase() + 0x24614EC))(this, p, enter);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(InteractiveObjectWithPowerSwitch*, uintptr_t, bool))(Il2CppBase() + 0x24617D4))(this, P0, P1);
	}

};

}
