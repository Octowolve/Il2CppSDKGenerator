#pragma once
#include <Il2Cpp/Il2Cpp.h>

class belowWaterControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "belowWaterControl"));
	}

	template <typename T = int32_t> T& m_howManyFramesToRaycastOnce() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_belowWaterDistortStrength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_belowWaterColor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_belowWaterFogColor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_belowWaterEffDisappear() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& BelowWaterScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_blowWaterFogDensity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_belowWaterRampTex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_noiseTex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_mainCamera() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_hitP() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_hitN() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_isHit() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_nearP() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& m_nearN() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_waterLayer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_frameCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_isHaveBelowWaterAreaOnScreen() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_isWaterEffectOn() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = uintptr_t> T& m_hitInfo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_belowWaterEffectQuad_onlyForLowQuality() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector2> T& underWaterInfo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& mReady() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_IsOnePassOpen() {
		return *(T*)((uintptr_t)this + 0xC5);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShouldEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOnePassChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_initUniforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_resetUniforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWaterEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_forceDisableBlowWaterEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_enableBelowWaterEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_disableBlowWaterEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_doRaycast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaterHorizontalHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_cameraUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T CheckShouldEnable() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BA3E4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BA544))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BA7A8))(this);
	}
	template <typename T = void> T OnOnePassChanged(bool open) {
		return ((T (*)(belowWaterControl*, bool))(Il2CppBase() + 0x35BAA0C))(this, open);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BACB0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BAD78))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BB244))(this);
	}
	template <typename T = void> T initUniforms() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BAFA4))(this);
	}
	template <typename T = void> T resetUniforms() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BB304))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BB654))(this);
	}
	template <typename T = void> T CheckWaterEffect() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BAABC))(this);
	}
	template <typename T = void> T forceDisableBlowWaterEffect() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BAEF8))(this);
	}
	template <typename T = void> T enableBelowWaterEffect() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BB6EC))(this);
	}
	template <typename T = void> T disableBlowWaterEffect() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BB7AC))(this);
	}
	template <typename T = void> T doRaycast() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BB86C))(this);
	}
	template <typename T = void> T OnPreRender() {
		return ((T (*)(belowWaterControl*))(Il2CppBase() + 0x35BBA94))(this);
	}
	template <typename T = void> T SetWaterHorizontalHeight(float val) {
		return ((T (*)(belowWaterControl*, float))(Il2CppBase() + 0x35BB584))(this, val);
	}
	template <typename T = bool> T cameraUnderWater(Il2CppVector3 hitP, Il2CppVector3 hitN, Il2CppVector3 nearP, Il2CppVector3 nearN) {
		return ((T (*)(belowWaterControl*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x35BBD0C))(this, hitP, hitN, nearP, nearN);
	}

};

}
