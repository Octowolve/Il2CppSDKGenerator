#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRCounterUAVEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRCounterUAVEffectTrigger"));
	}

	template <typename T = float> T& m_NextCheckTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Box() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsLocalPlayerIn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ServerCfg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCounterUAVEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckServerCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRCounterUAVEffectTrigger*))(Il2CppBase() + 0x2512FF4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRCounterUAVEffectTrigger*))(Il2CppBase() + 0x2513128))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRCounterUAVEffectTrigger*))(Il2CppBase() + 0x2513838))(this);
	}
	template <typename T = void> T SetCounterUAVEffectActive(bool isActive) {
		return ((T (*)(BRCounterUAVEffectTrigger*, bool))(Il2CppBase() + 0x25136B4))(this, isActive);
	}
	template <typename T = bool> T CheckServerCfg() {
		return ((T (*)(BRCounterUAVEffectTrigger*))(Il2CppBase() + 0x251354C))(this);
	}

};

}
