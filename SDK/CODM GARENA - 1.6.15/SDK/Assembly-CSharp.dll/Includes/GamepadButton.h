#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamepadButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamepadButton"));
	}

	template <typename T = bool> T& m_ShowInteractiveEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsCompositeButton() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& m_ClickCollider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ClickFx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_NoramlCfg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_CompositeCfg() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ContainerObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_ClickMaskCollider() {
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
	template <typename T = int32_t> T& m_BaseDepth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& PressStartTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LastFrameGamepadType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButtonSprite() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PressDownEventDispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PressUpEventDispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AbsorbEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickEventDispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterGamepadButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Refresh() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x2548CE0))(this);
	}
	template <typename T = void> static T UpdateButtonSprite(uintptr_t sprite, uintptr_t buttonType, uintptr_t opType, uintptr_t dirHoldBg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2549268))(0, sprite, buttonType, opType, dirHoldBg);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x2548F2C))(this);
	}
	template <typename T = void> T UpdateGamepadButton(uintptr_t btn) {
		return ((T (*)(GamepadButton*, uintptr_t))(Il2CppBase() + 0x25499EC))(this, btn);
	}
	template <typename T = void> T RegisterGamepadButton() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x2549E8C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254A3A8))(this);
	}
	template <typename T = bool> T PressDownEventDispose() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254A630))(this);
	}
	template <typename T = bool> T PressUpEventDispose() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254AB74))(this);
	}
	template <typename T = bool> T AbsorbEvent() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254B028))(this);
	}
	template <typename T = bool> T ClickEventDispose() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254B1C0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254B6D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254B7EC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254C0B4))(this);
	}
	template <typename T = void> T UnregisterGamepadButton() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x2549AD4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GamepadButton*))(Il2CppBase() + 0x254C158))(this);
	}

};

}
