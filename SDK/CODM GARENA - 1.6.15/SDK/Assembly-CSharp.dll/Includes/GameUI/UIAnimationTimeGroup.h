#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIAnimationTimeGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIAnimationTimeGroup"));
	}

	template <typename T = uintptr_t> T& invokeAnis() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& catergoryId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& defaultAlphaFade() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& defaultPosFlyIn() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& flyFrom() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& defaultZoom() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& scaleFrom() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& IntialZoom() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bReadyToPlay() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& flyIn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bflyInInit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& bInitialZoomInit() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsReadyToPlay() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C60C8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C60D0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6180))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6484))(this);
	}
	template <typename T = void> T DisableTimeGroup() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6B40))(this);
	}
	template <typename T = void> T ResetTimeGroup() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6BFC))(this);
	}
	template <typename T = void> T OnPlayTimeGroup() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6CE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6DA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6DAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetTimeGroup() {
		return ((T (*)(UIAnimationTimeGroup*))(Il2CppBase() + 0x29C6DB4))(this);
	}

};

}
