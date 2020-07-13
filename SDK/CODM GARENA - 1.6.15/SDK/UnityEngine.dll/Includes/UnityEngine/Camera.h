#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Camera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Camera"));
	}

	template <typename T = uintptr_t> static T& onPreCull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& onPreRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& onPostRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T get_fieldOfView() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A0688))(this);
	}
	template <typename T = void> T set_fieldOfView(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A0720))(this, value);
	}
	template <typename T = float> T get_nearClipPlane() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A07C0))(this);
	}
	template <typename T = void> T set_nearClipPlane(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A0858))(this, value);
	}
	template <typename T = float> T get_farClipPlane() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A08F8))(this);
	}
	template <typename T = void> T set_farClipPlane(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A0990))(this, value);
	}
	template <typename T = void> T set_probeBias(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A0A30))(this, value);
	}
	template <typename T = uintptr_t> T get_renderingPath() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A0AD0))(this);
	}
	template <typename T = void> T set_renderingPath(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A0B68))(this, value);
	}
	template <typename T = uintptr_t> T get_actualRenderingPath() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A0C08))(this);
	}
	template <typename T = bool> T get_allowHDR() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A0CA0))(this);
	}
	template <typename T = void> T set_allowHDR(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A0D38))(this, value);
	}
	template <typename T = void> T set_allowShadow(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A0DD8))(this, value);
	}
	template <typename T = void> T set_shareShadow(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A0E78))(this, value);
	}
	template <typename T = void> T set_allowShadowCache(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A0F18))(this, value);
	}
	template <typename T = void> T set_forceShadowUpdate(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A0FB8))(this, value);
	}
	template <typename T = bool> T get_allowMSAA() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1058))(this);
	}
	template <typename T = void> T set_allowMSAA(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A10F0))(this, value);
	}
	template <typename T = void> T set_useOCCache(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A1190))(this, value);
	}
	template <typename T = float> T get_orthographicSize() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1230))(this);
	}
	template <typename T = void> T set_orthographicSize(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A12C8))(this, value);
	}
	template <typename T = bool> T get_orthographic() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1368))(this);
	}
	template <typename T = void> T set_orthographic(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A1400))(this, value);
	}
	template <typename T = void> T set_opaqueSortMode(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A14A0))(this, value);
	}
	template <typename T = uintptr_t> T get_transparencySortMode() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1540))(this);
	}
	template <typename T = void> T set_transparencySortMode(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A15D8))(this, value);
	}
	template <typename T = float> T get_depth() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1678))(this);
	}
	template <typename T = void> T set_depth(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A1710))(this, value);
	}
	template <typename T = float> T get_aspect() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A17B0))(this);
	}
	template <typename T = void> T set_aspect(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A1848))(this, value);
	}
	template <typename T = int32_t> T get_cullingMask() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A18E8))(this);
	}
	template <typename T = void> T set_cullingMask(int32_t value) {
		return ((T (*)(Camera*, int32_t))(Il2CppBase() + 0x46A1980))(this, value);
	}
	template <typename T = void> T set_instancingFriendly(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A1A20))(this, value);
	}
	template <typename T = int32_t> T get_eventMask() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1AC0))(this);
	}
	template <typename T = void> T set_eventMask(int32_t value) {
		return ((T (*)(Camera*, int32_t))(Il2CppBase() + 0x46A1B58))(this, value);
	}
	template <typename T = uintptr_t> T get_backgroundColor() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1BF8))(this);
	}
	template <typename T = void> T set_backgroundColor(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A1CD0))(this, value);
	}
	template <typename T = void> T INTERNAL_get_backgroundColor(uintptr_t* value) {
		return ((T (*)(Camera*, uintptr_t*))(Il2CppBase() + 0x46A1C30))(this, value);
	}
	template <typename T = void> T INTERNAL_set_backgroundColor(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A1CF4))(this, value);
	}
	template <typename T = Il2CppRect> T get_rect() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1D94))(this);
	}
	template <typename T = void> T set_rect(Il2CppRect value) {
		return ((T (*)(Camera*, Il2CppRect))(Il2CppBase() + 0x46A1E6C))(this, value);
	}
	template <typename T = void> T INTERNAL_get_rect(uintptr_t* value) {
		return ((T (*)(Camera*, uintptr_t*))(Il2CppBase() + 0x46A1DCC))(this, value);
	}
	template <typename T = void> T INTERNAL_set_rect(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A1E90))(this, value);
	}
	template <typename T = Il2CppRect> T get_pixelRect() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A1F30))(this);
	}
	template <typename T = void> T set_pixelRect(Il2CppRect value) {
		return ((T (*)(Camera*, Il2CppRect))(Il2CppBase() + 0x46A2008))(this, value);
	}
	template <typename T = void> T INTERNAL_get_pixelRect(uintptr_t* value) {
		return ((T (*)(Camera*, uintptr_t*))(Il2CppBase() + 0x46A1F68))(this, value);
	}
	template <typename T = void> T INTERNAL_set_pixelRect(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A202C))(this, value);
	}
	template <typename T = uintptr_t> T get_targetTexture() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A20CC))(this);
	}
	template <typename T = void> T set_targetTexture(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A2164))(this, value);
	}
	template <typename T = void> T SetTargetBuffersImpl(uintptr_t* color, uintptr_t* depth) {
		return ((T (*)(Camera*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x46A2204))(this, color, depth);
	}
	template <typename T = void> T SetTargetBuffers(uintptr_t colorBuffer, uintptr_t depthBuffer) {
		return ((T (*)(Camera*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A22AC))(this, colorBuffer, depthBuffer);
	}
	template <typename T = int32_t> T get_pixelWidth() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A22DC))(this);
	}
	template <typename T = int32_t> T get_pixelHeight() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A2374))(this);
	}
	template <typename T = uintptr_t> T get_cameraToWorldMatrix() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A240C))(this);
	}
	template <typename T = void> T INTERNAL_get_cameraToWorldMatrix(uintptr_t* value) {
		return ((T (*)(Camera*, uintptr_t*))(Il2CppBase() + 0x46A24BC))(this, value);
	}
	template <typename T = uintptr_t> T get_worldToCameraMatrix() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A255C))(this);
	}
	template <typename T = void> T set_worldToCameraMatrix(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A26AC))(this, value);
	}
	template <typename T = void> T INTERNAL_get_worldToCameraMatrix(uintptr_t* value) {
		return ((T (*)(Camera*, uintptr_t*))(Il2CppBase() + 0x46A260C))(this, value);
	}
	template <typename T = void> T INTERNAL_set_worldToCameraMatrix(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A2720))(this, value);
	}
	template <typename T = uintptr_t> T get_projectionMatrix() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A27C0))(this);
	}
	template <typename T = void> T set_projectionMatrix(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A2910))(this, value);
	}
	template <typename T = void> T INTERNAL_get_projectionMatrix(uintptr_t* value) {
		return ((T (*)(Camera*, uintptr_t*))(Il2CppBase() + 0x46A2870))(this, value);
	}
	template <typename T = void> T INTERNAL_set_projectionMatrix(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A2984))(this, value);
	}
	template <typename T = void> T ResetProjectionMatrix() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A2A24))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_ResetProjectionMatrix(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A2A2C))(0, self);
	}
	template <typename T = void> T ResetAspect() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A2AC4))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_ResetAspect(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A2ACC))(0, self);
	}
	template <typename T = uintptr_t> T get_clearFlags() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A2B64))(this);
	}
	template <typename T = void> T set_clearFlags(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A2BFC))(this, value);
	}
	template <typename T = uintptr_t> T GetWorldToClipMatrix() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A2C9C))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_GetWorldToClipMatrix(uintptr_t self, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A2D44))(0, self, value);
	}
	template <typename T = Il2CppVector3> T WorldToScreenPoint(Il2CppVector3 position) {
		return ((T (*)(Camera*, Il2CppVector3))(Il2CppBase() + 0x46A2DE4))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_WorldToScreenPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A2E38))(0, self, position, value);
	}
	template <typename T = Il2CppVector3> T WorldToViewportPoint(Il2CppVector3 position) {
		return ((T (*)(Camera*, Il2CppVector3))(Il2CppBase() + 0x46A2EE0))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_WorldToViewportPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A2F34))(0, self, position, value);
	}
	template <typename T = Il2CppVector3> T ViewportToWorldPoint(Il2CppVector3 position) {
		return ((T (*)(Camera*, Il2CppVector3))(Il2CppBase() + 0x46A2FDC))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_ViewportToWorldPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A3030))(0, self, position, value);
	}
	template <typename T = Il2CppVector3> T ScreenToWorldPoint(Il2CppVector3 position) {
		return ((T (*)(Camera*, Il2CppVector3))(Il2CppBase() + 0x46A30D8))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_ScreenToWorldPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A312C))(0, self, position, value);
	}
	template <typename T = Il2CppVector3> T ScreenToViewportPoint(Il2CppVector3 position) {
		return ((T (*)(Camera*, Il2CppVector3))(Il2CppBase() + 0x46A31D4))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_ScreenToViewportPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A3228))(0, self, position, value);
	}
	template <typename T = Il2CppVector3> T ViewportToScreenPoint(Il2CppVector3 position) {
		return ((T (*)(Camera*, Il2CppVector3))(Il2CppBase() + 0x46A32D0))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_ViewportToScreenPoint(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A3324))(0, self, position, value);
	}
	template <typename T = uintptr_t> T ScreenPointToRay(Il2CppVector3 position) {
		return ((T (*)(Camera*, Il2CppVector3))(Il2CppBase() + 0x46A33CC))(this, position);
	}
	template <typename T = void> static T INTERNAL_CALL_ScreenPointToRay(uintptr_t self, uintptr_t position, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A3428))(0, self, position, value);
	}
	template <typename T = uintptr_t> static T get_main() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A34D0))(0);
	}
	template <typename T = uintptr_t> static T get_current() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A3560))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_allCameras() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A35F0))(0);
	}
	template <typename T = int32_t> static T get_allCamerasCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A3680))(0);
	}
	template <typename T = int32_t> static T GetAllCameras(Il2CppArray<uintptr_t>* cameras) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46A3710))(0, cameras);
	}
	template <typename T = void> static T FireOnPreCull(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A37A8))(0, cam);
	}
	template <typename T = void> static T FireOnPreRender(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A38D8))(0, cam);
	}
	template <typename T = void> static T FireOnPostRender(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A3970))(0, cam);
	}
	template <typename T = void> T Render() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A3A08))(this);
	}
	template <typename T = void> T RenderWithShader(uintptr_t shader, Il2CppString* replacementTag) {
		return ((T (*)(Camera*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46A3AA0))(this, shader, replacementTag);
	}
	template <typename T = void> T SetReplacementShader(uintptr_t shader, Il2CppString* replacementTag) {
		return ((T (*)(Camera*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46A3B48))(this, shader, replacementTag);
	}
	template <typename T = bool> T get_useOcclusionCulling() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A3BF0))(this);
	}
	template <typename T = void> T set_useOcclusionCulling(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A3C88))(this, value);
	}
	template <typename T = void> T set_disableCulling(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A3D28))(this, value);
	}
	template <typename T = void> T set_ignoreClear(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A3DC8))(this, value);
	}
	template <typename T = bool> T get_useCfmOcMethodIfDoOc() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A3E68))(this);
	}
	template <typename T = void> T set_useCfmOcMethodIfDoOc(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A3F00))(this, value);
	}
	template <typename T = void> T set_ocZbias(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A3FA0))(this, value);
	}
	template <typename T = void> T set_ocCullStaticBatchedRenderers(bool value) {
		return ((T (*)(Camera*, bool))(Il2CppBase() + 0x46A4040))(this, value);
	}
	template <typename T = void> T set_timeForKeepingRendererVisible(float value) {
		return ((T (*)(Camera*, float))(Il2CppBase() + 0x46A40E0))(this, value);
	}
	template <typename T = void> T ResetCullingMatrix() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A4180))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_ResetCullingMatrix(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A4188))(0, self);
	}
	template <typename T = bool> T RenderToCubemap(uintptr_t cubemap, int32_t faceMask) {
		return ((T (*)(Camera*, uintptr_t, int32_t))(Il2CppBase() + 0x46A4220))(this, cubemap, faceMask);
	}
	template <typename T = bool> T Internal_RenderToCubemapRT(uintptr_t cubemap, int32_t faceMask) {
		return ((T (*)(Camera*, uintptr_t, int32_t))(Il2CppBase() + 0x46A4224))(this, cubemap, faceMask);
	}
	template <typename T = void> T set_layerCullDistances(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Camera*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46A42CC))(this, value);
	}
	template <typename T = void> T CopyFrom(uintptr_t other) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A436C))(this, other);
	}
	template <typename T = uintptr_t> T get_depthTextureMode() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A440C))(this);
	}
	template <typename T = void> T set_depthTextureMode(uintptr_t value) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A44A4))(this, value);
	}
	template <typename T = void> T AddCommandBuffer(uintptr_t evt, uintptr_t buffer) {
		return ((T (*)(Camera*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A4544))(this, evt, buffer);
	}
	template <typename T = void> T RemoveCommandBuffer(uintptr_t evt, uintptr_t buffer) {
		return ((T (*)(Camera*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A45EC))(this, evt, buffer);
	}
	template <typename T = void> T RemoveCommandBuffers(uintptr_t evt) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A4694))(this, evt);
	}
	template <typename T = void> T RemoveAllCommandBuffers() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A4734))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCommandBuffers(uintptr_t evt) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A47CC))(this, evt);
	}
	template <typename T = int32_t> T get_commandBufferCount() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A486C))(this);
	}
	template <typename T = uintptr_t> T RaycastTry(uintptr_t ray, float distance, int32_t layerMask) {
		return ((T (*)(Camera*, uintptr_t, float, int32_t))(Il2CppBase() + 0x46A4904))(this, ray, distance, layerMask);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_RaycastTry(uintptr_t self, uintptr_t ray, float distance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x46A494C))(0, self, ray, distance, layerMask);
	}
	template <typename T = uintptr_t> T RaycastTry2D(uintptr_t ray, float distance, int32_t layerMask) {
		return ((T (*)(Camera*, uintptr_t, float, int32_t))(Il2CppBase() + 0x46A49FC))(this, ray, distance, layerMask);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_RaycastTry2D(uintptr_t self, uintptr_t ray, float distance, int32_t layerMask) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x46A4A44))(0, self, ray, distance, layerMask);
	}
	template <typename T = uintptr_t> T CalculateObliqueMatrix(uintptr_t clipPlane) {
		return ((T (*)(Camera*, uintptr_t))(Il2CppBase() + 0x46A4AF4))(this, clipPlane);
	}
	template <typename T = void> static T INTERNAL_CALL_CalculateObliqueMatrix(uintptr_t self, uintptr_t clipPlane, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46A4BBC))(0, self, clipPlane, value);
	}
	template <typename T = void> T FlushTemporalLODState() {
		return ((T (*)(Camera*))(Il2CppBase() + 0x46A4C64))(this);
	}

};

}
