#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamepadButtonClick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamepadButtonClick"));
	}

	template <typename T = bool> T& m_ShowEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ClickCollider() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_ClickFx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ButtonSpriteObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ButtonType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& IosButtonType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_EventPriority() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_EventResponse() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_NotifyGameObjectEvent() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& m_IsPress() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = int32_t> T& m_BaseDepth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LastFrameGamepadType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStandardButtonType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGamepadButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGamepadButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PressDownEventDispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PressUpEventDispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PressInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AbsorbEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickEventDispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterGamepadButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetButtonType() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254C558))(this);
	}
	template <typename T = uintptr_t> T GetStandardButtonType() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254C654))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254C76C))(this);
	}
	template <typename T = void> T UpdateGamepadButton(uintptr_t btn) {
		return ((T (*)(GamepadButtonClick*, uintptr_t))(Il2CppBase() + 0x254D4C4))(this, btn);
	}
	template <typename T = void> T RegisterGamepadButton() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254CAC0))(this);
	}
	template <typename T = bool> T PressDownEventDispose() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254D938))(this);
	}
	template <typename T = bool> T PressUpEventDispose() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254DF60))(this);
	}
	template <typename T = bool> T PressInteractive() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254DB44))(this);
	}
	template <typename T = bool> T AbsorbEvent() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254E0D0))(this);
	}
	template <typename T = bool> T ClickEventDispose() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254E268))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254E77C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254E85C))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254E9AC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254F338))(this);
	}
	template <typename T = void> T UnregisterGamepadButton() {
		return ((T (*)(GamepadButtonClick*))(Il2CppBase() + 0x254D588))(this);
	}

};

}
