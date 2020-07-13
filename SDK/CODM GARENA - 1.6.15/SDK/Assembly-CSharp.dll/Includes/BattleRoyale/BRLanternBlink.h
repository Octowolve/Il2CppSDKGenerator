#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLanternBlink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLanternBlink"));
	}

	template <typename T = bool> T& IsOpen() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& BlinkCd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BlinkArgs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LanternMt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& lightCloseColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lightEmissionColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lightEmissionArgs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& lastIsOpen() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& currBlinkIdx() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& nextBlinkTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllLightState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoBlinkUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLightState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BRLanternBlink*))(Il2CppBase() + 0x1949494))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRLanternBlink*))(Il2CppBase() + 0x19497D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRLanternBlink*))(Il2CppBase() + 0x1949878))(this);
	}
	template <typename T = void> T SetAllLightState(bool isLighting) {
		return ((T (*)(BRLanternBlink*, bool))(Il2CppBase() + 0x194968C))(this, isLighting);
	}
	template <typename T = void> T DoBlinkUpdate() {
		return ((T (*)(BRLanternBlink*))(Il2CppBase() + 0x1949A40))(this);
	}
	template <typename T = void> T SetLightState(int32_t idx, bool isLighting) {
		return ((T (*)(BRLanternBlink*, int32_t, bool))(Il2CppBase() + 0x1949B68))(this, idx, isLighting);
	}

};

}
