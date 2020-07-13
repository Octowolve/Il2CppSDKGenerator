#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Mirror
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Mirror"));
	}

	template <typename T = bool> T& m_DisablePixelLights() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_TextureSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsFlatMirror() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& plane() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_ReflectLayers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_ReflectionCameras() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_ReflectionTexture() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_OldReflectionTextureSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> static T& s_InsideRendering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mRenderer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mNeedUpdate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderMirrorView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RenderMirrorView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillRenderObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraModes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMirrorObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_sgn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraSpacePlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateObliqueMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateReflectionMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Start() {
		return ((T (*)(Mirror*))(Il2CppBase() + 0x41EE4D4))(this);
	}
	template <typename T = uintptr_t> T RenderMirrorView() {
		return ((T (*)(Mirror*))(Il2CppBase() + 0x41EE5C8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Mirror*))(Il2CppBase() + 0x41EE6E0))(this);
	}
	template <typename T = void> T RenderMirrorView_1(uintptr_t cam) {
		return ((T (*)(Mirror*, uintptr_t))(Il2CppBase() + 0x41EE7D0))(this, cam);
	}
	template <typename T = void> T OnWillRenderObject() {
		return ((T (*)(Mirror*))(Il2CppBase() + 0x41F0958))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Mirror*))(Il2CppBase() + 0x41F0A3C))(this);
	}
	template <typename T = void> T UpdateCameraModes(uintptr_t src, uintptr_t dest) {
		return ((T (*)(Mirror*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EFAC8))(this, src, dest);
	}
	template <typename T = void> T CreateMirrorObjects(uintptr_t currentCamera, uintptr_t* reflectionCamera) {
		return ((T (*)(Mirror*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x41EF450))(this, currentCamera, reflectionCamera);
	}
	template <typename T = float> static T sgn(float a) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41F10AC))(0, a);
	}
	template <typename T = uintptr_t> T CameraSpacePlane(uintptr_t cam, Il2CppVector3 pos, Il2CppVector3 normal, float sideSign) {
		return ((T (*)(Mirror*, uintptr_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x41F0308))(this, cam, pos, normal, sideSign);
	}
	template <typename T = void> static T CalculateObliqueMatrix(uintptr_t projection, uintptr_t clipPlane) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F05B4))(0, projection, clipPlane);
	}
	template <typename T = void> static T CalculateReflectionMatrix(uintptr_t reflectionMat, uintptr_t plane) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EFF48))(0, reflectionMat, plane);
	}

};

}
