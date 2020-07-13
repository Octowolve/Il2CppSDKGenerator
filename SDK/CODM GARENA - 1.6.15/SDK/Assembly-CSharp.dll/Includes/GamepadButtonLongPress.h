#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamepadButtonLongPress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamepadButtonLongPress"));
	}

	template <typename T = uintptr_t> T& m_ContainerObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ObjGroup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ButtonType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& IosButtonType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_ShowEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_BaseDepth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& PressStartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LastFrameGamepadType() {
		return *(T*)((uintptr_t)this + 0x2C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDirectionButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetButtonType() {
		return ((T (*)(GamepadButtonLongPress*))(Il2CppBase() + 0x254F4E0))(this);
	}
	template <typename T = uintptr_t> T GetStandardButtonType() {
		return ((T (*)(GamepadButtonLongPress*))(Il2CppBase() + 0x254F5DC))(this);
	}
	template <typename T = void> T UpdateProgress(float ratio) {
		return ((T (*)(GamepadButtonLongPress*, float))(Il2CppBase() + 0x254F6F4))(this, ratio);
	}
	template <typename T = bool> static T IsDirectionButton(uintptr_t buttonType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x254FC18))(0, buttonType);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(GamepadButtonLongPress*))(Il2CppBase() + 0x254FCC4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GamepadButtonLongPress*))(Il2CppBase() + 0x254FFDC))(this);
	}

};

}
