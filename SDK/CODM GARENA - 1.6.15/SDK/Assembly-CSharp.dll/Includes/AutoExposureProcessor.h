#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoExposureProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoExposureProcessor"));
	}

	template <typename T = float> T& m_maxAutoEvScale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_minAutoEvScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& neutralGrey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& lit2DarkSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& dark2litSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& autoExposureCheckInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_currentCheckInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& useForwardOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& probeForwardDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& probeHitBackwardOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& forwardVector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& forwardRay() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hitResult() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& testMask() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_currentAutoExposure() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_targetAutoExposure() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& targetCamera() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& exposureObservePoint() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_currentSH_ob0() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pos() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& col() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& a() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& previewWithLightProbe() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_scenePreviewCubemap0() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_scenePreviewCaptureCameraObject() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& m_previewName() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_scenePreviewCaptureCamera() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& scenePreviewDeltaTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& scenePreviewUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppVector3> T& m_LastHitPos() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& m_LastHitted() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& m_LastRaycastTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& m_LastTetIndex() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> static T& ProbeRaycastInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareScenePreviewResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerFrameUpdateAutoEv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T get_maxDynamicEv() {
		return ((T (*)(AutoExposureProcessor*))(Il2CppBase() + 0x3A426C0))(this);
	}
	template <typename T = void> T set_maxDynamicEv(float value) {
		return ((T (*)(AutoExposureProcessor*, float))(Il2CppBase() + 0x3A42778))(this, value);
	}
	template <typename T = float> T get_minDynamicEv() {
		return ((T (*)(AutoExposureProcessor*))(Il2CppBase() + 0x3A42820))(this);
	}
	template <typename T = void> T set_minDynamicEv(float value) {
		return ((T (*)(AutoExposureProcessor*, float))(Il2CppBase() + 0x3A428D8))(this, value);
	}
	template <typename T = float> T get_currentAutoEv() {
		return ((T (*)(AutoExposureProcessor*))(Il2CppBase() + 0x3A42980))(this);
	}
	template <typename T = uintptr_t> T get_exposureCameraTransform() {
		return ((T (*)(AutoExposureProcessor*))(Il2CppBase() + 0x3A42988))(this);
	}
	template <typename T = Il2CppVector3> T get_exposureSamplePoint() {
		return ((T (*)(AutoExposureProcessor*))(Il2CppBase() + 0x3A42990))(this);
	}
	template <typename T = void> T PrepareScenePreviewResource() {
		return ((T (*)(AutoExposureProcessor*))(Il2CppBase() + 0x3A429A4))(this);
	}
	template <typename T = float> T PerFrameUpdateAutoEv(float deltaTime) {
		return ((T (*)(AutoExposureProcessor*, float))(Il2CppBase() + 0x3A42DA0))(this, deltaTime);
	}

};

}
