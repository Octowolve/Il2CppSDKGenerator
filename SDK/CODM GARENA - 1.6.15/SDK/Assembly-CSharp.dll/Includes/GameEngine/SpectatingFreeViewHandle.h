#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SpectatingFreeViewHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SpectatingFreeViewHandle"));
	}

	template <typename T = uintptr_t> T& rotationButton() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_SpectatingJoystickButton() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_SpectatingUpButton() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SpectatingDownButton() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& SpectatingVector() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Enable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isInitial() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& isRotationMirror() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMirrorRotationButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InMovementArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_RotationButton() {
		return ((T (*)(SpectatingFreeViewHandle*))(Il2CppBase() + 0x33F78B8))(this);
	}
	template <typename T = void> T Init(uintptr_t btnCfg) {
		return ((T (*)(SpectatingFreeViewHandle*, uintptr_t))(Il2CppBase() + 0x33F78C0))(this, btnCfg);
	}
	template <typename T = bool> T get_Enable() {
		return ((T (*)(SpectatingFreeViewHandle*))(Il2CppBase() + 0x33F7A34))(this);
	}
	template <typename T = void> T set_Enable(bool value) {
		return ((T (*)(SpectatingFreeViewHandle*, bool))(Il2CppBase() + 0x33F7A3C))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SpectatingFreeViewHandle*))(Il2CppBase() + 0x33F7A44))(this);
	}
	template <typename T = void> T SetEnabled(bool isEnbaled) {
		return ((T (*)(SpectatingFreeViewHandle*, bool))(Il2CppBase() + 0x33F7B0C))(this, isEnbaled);
	}
	template <typename T = void> T ProcessInput(uintptr_t moveInput) {
		return ((T (*)(SpectatingFreeViewHandle*, uintptr_t))(Il2CppBase() + 0x33F7BB8))(this, moveInput);
	}
	template <typename T = void> T SetMirrorRotationButton(bool isMirror) {
		return ((T (*)(SpectatingFreeViewHandle*, bool))(Il2CppBase() + 0x33F7D00))(this, isMirror);
	}
	template <typename T = bool> T InMovementArea(uintptr_t playerInput) {
		return ((T (*)(SpectatingFreeViewHandle*, uintptr_t))(Il2CppBase() + 0x33F7E00))(this, playerInput);
	}

};

}
