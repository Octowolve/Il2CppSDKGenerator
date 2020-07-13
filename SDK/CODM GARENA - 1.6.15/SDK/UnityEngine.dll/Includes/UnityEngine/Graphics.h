#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Graphics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Graphics"));
	}

	template <typename T = int32_t> static T& kMaxDrawMeshInstanceCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T DrawMesh(uintptr_t mesh, Il2CppVector3 position, Il2CppQuaternion rotation, uintptr_t material, int32_t layer, uintptr_t camera, int32_t submeshIndex, uintptr_t properties) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4772F84))(0, mesh, position, rotation, material, layer, camera, submeshIndex, properties);
	}
	template <typename T = void> static T DrawMesh_1(uintptr_t mesh, Il2CppVector3 position, Il2CppQuaternion rotation, uintptr_t material, int32_t layer, uintptr_t camera, int32_t submeshIndex, uintptr_t properties, bool castShadows, bool receiveShadows, bool useLightProbes) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x4773098))(0, mesh, position, rotation, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, useLightProbes);
	}
	template <typename T = void> static T DrawMesh_2(uintptr_t mesh, Il2CppVector3 position, Il2CppQuaternion rotation, uintptr_t material, int32_t layer, uintptr_t camera, int32_t submeshIndex, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, uintptr_t probeAnchor, bool useLightProbes) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppQuaternion, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x47731CC))(0, mesh, position, rotation, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, probeAnchor, useLightProbes);
	}
	template <typename T = void> static T DrawMesh_3(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t layer, uintptr_t camera, int32_t submeshIndex, uintptr_t properties, bool castShadows, bool receiveShadows) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t, bool, bool))(Il2CppBase() + 0x477361C))(0, mesh, matrix, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows);
	}
	template <typename T = void> static T DrawMesh_4(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t layer, uintptr_t camera, int32_t submeshIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4773938))(0, mesh, matrix, material, layer, camera, submeshIndex);
	}
	template <typename T = void> static T DrawMesh_5(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t layer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4773AB4))(0, mesh, matrix, material, layer);
	}
	template <typename T = void> static T DrawMesh_6(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t layer, uintptr_t camera, int32_t submeshIndex, uintptr_t properties, bool castShadows, bool receiveShadows, bool useLightProbes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x47737A4))(0, mesh, matrix, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, useLightProbes);
	}
	template <typename T = void> static T Internal_DrawMeshMatrix(uintptr_t arguments, uintptr_t properties, uintptr_t material, uintptr_t mesh, uintptr_t camera) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4773C30))(0, arguments, properties, material, mesh, camera);
	}
	template <typename T = void> static T Internal_DrawMeshNow2(uintptr_t mesh, int32_t subsetIndex, uintptr_t matrix) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4773CE8))(0, mesh, subsetIndex, matrix);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_DrawMeshNow2(uintptr_t mesh, int32_t subsetIndex, uintptr_t matrix) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4773E00))(0, mesh, subsetIndex, matrix);
	}
	template <typename T = int32_t> static T Internal_GetMaxDrawMeshInstanceCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4773EA8))(0);
	}
	template <typename T = void> static T DrawMeshInstanced(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4773F38))(0, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering);
	}
	template <typename T = void> static T DrawMeshInstanced_1(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4774150))(0, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows);
	}
	template <typename T = void> static T DrawMeshInstanced_2(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4774248))(0, mesh, submeshIndex, material, matrices, count, properties);
	}
	template <typename T = void> static T DrawMeshInstanced_3(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, Il2CppArray<uintptr_t>* matrices) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4774334))(0, mesh, submeshIndex, material, matrices);
	}
	template <typename T = void> static T DrawMeshInstanced_4(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4774044))(0, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T DrawMeshInstanced_5(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, uintptr_t bounds, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t))(Il2CppBase() + 0x4774C2C))(0, mesh, submeshIndex, material, bounds, matrices, count, properties, castShadows, receiveShadows, layer, camera);
	}
	template <typename T = void> static T DrawMeshInstanced_6(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, uintptr_t bounds, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4774D5C))(0, mesh, submeshIndex, material, bounds, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T DrawMeshInstancedWithShaderPass(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, int32_t passTypeMask, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t))(Il2CppBase() + 0x47751A0))(0, mesh, submeshIndex, material, passTypeMask, matrices, count, properties, castShadows, receiveShadows, layer, camera);
	}
	template <typename T = void> static T DrawMeshInstancedWithShaderPass_1(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, int32_t passTypeMask, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x47752A0))(0, mesh, submeshIndex, material, passTypeMask, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T Internal_DrawMeshInstanced(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x477565C))(0, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T Internal_DrawMeshInstanced_1(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, uintptr_t bounds, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4775774))(0, mesh, submeshIndex, material, bounds, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_DrawMeshInstanced(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, uintptr_t bounds, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4775888))(0, mesh, submeshIndex, material, bounds, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T Internal_DrawMeshInstancedWithShaderPass(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, int32_t passTypeMask, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x47759B4))(0, mesh, submeshIndex, material, passTypeMask, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T DrawTexture(Il2CppRect screenRect, uintptr_t texture, Il2CppRect sourceRect, int32_t leftBorder, int32_t rightBorder, int32_t topBorder, int32_t bottomBorder) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, Il2CppRect, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4775AE0))(0, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder);
	}
	template <typename T = void> static T DrawTexture_1(Il2CppRect screenRect, uintptr_t texture, Il2CppRect sourceRect, int32_t leftBorder, int32_t rightBorder, int32_t topBorder, int32_t bottomBorder, uintptr_t mat, int32_t pass) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, Il2CppRect, int32_t, int32_t, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4775BF4))(0, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, mat, pass);
	}
	template <typename T = void> static T DrawTexture_2(Il2CppRect screenRect, uintptr_t texture, Il2CppRect sourceRect, int32_t leftBorder, int32_t rightBorder, int32_t topBorder, int32_t bottomBorder, uintptr_t color, uintptr_t mat) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, Il2CppRect, int32_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4775F30))(0, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat);
	}
	template <typename T = void> static T DrawTexture_3(Il2CppRect screenRect, uintptr_t texture, Il2CppRect sourceRect, int32_t leftBorder, int32_t rightBorder, int32_t topBorder, int32_t bottomBorder, uintptr_t color, uintptr_t mat, int32_t pass) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, Il2CppRect, int32_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4776080))(0, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat, pass);
	}
	template <typename T = void> static T Internal_DrawTexture(uintptr_t args) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47761D0))(0, args);
	}
	template <typename T = void> static T Blit(uintptr_t source, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4776268))(0, source, dest);
	}
	template <typename T = void> static T Blit_1(uintptr_t source, uintptr_t dest, uintptr_t mat) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4776308))(0, source, dest, mat);
	}
	template <typename T = void> static T Blit_2(uintptr_t source, uintptr_t dest, uintptr_t mat, int32_t pass) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x47763C8))(0, source, dest, mat, pass);
	}
	template <typename T = void> static T Blit_3(uintptr_t source, uintptr_t mat) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4776548))(0, source, mat);
	}
	template <typename T = void> static T Blit_4(uintptr_t source, uintptr_t mat, int32_t pass) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x47765FC))(0, source, mat, pass);
	}
	template <typename T = void> static T Internal_BlitMaterial(uintptr_t source, uintptr_t dest, uintptr_t mat, int32_t pass, bool setRT) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4776490))(0, source, dest, mat, pass, setRT);
	}
	template <typename T = void> static T Internal_SetNullRT() {
		return ((T (*)(void *))(Il2CppBase() + 0x47766C0))(0);
	}
	template <typename T = void> static T Internal_SetRTSimple(uintptr_t* color, uintptr_t* depth, int32_t mip, uintptr_t face, int32_t depthSlice) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4776750))(0, color, depth, mip, face, depthSlice);
	}
	template <typename T = void> static T set_cascadedShadowMaps(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4776808))(0, value);
	}
	template <typename T = void> static T set_ignoreAdrenoShaderWorkarounds(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x47768A0))(0, value);
	}
	template <typename T = bool> static T get_enableMeshRendererVaInstancing() {
		return ((T (*)(void *))(Il2CppBase() + 0x4776938))(0);
	}
	template <typename T = void> static T set_enableMeshRendererVaInstancing(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x47769C8))(0, value);
	}
	template <typename T = void> static T set_useAdrenoGLLinkProgramWorkaround(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4776A60))(0, value);
	}
	template <typename T = void> static T SetRenderTargetImpl(uintptr_t colorBuffer, uintptr_t depthBuffer, int32_t mipLevel, uintptr_t face, int32_t depthSlice) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4776AF8))(0, colorBuffer, depthBuffer, mipLevel, face, depthSlice);
	}
	template <typename T = void> static T SetRenderTargetImpl_1(uintptr_t rt, int32_t mipLevel, uintptr_t face, int32_t depthSlice) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4776BE8))(0, rt, mipLevel, face, depthSlice);
	}
	template <typename T = void> static T SetRenderTarget(uintptr_t rt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4776D70))(0, rt);
	}
	template <typename T = void> static T SetRenderTarget_1(uintptr_t rt, int32_t mipLevel, uintptr_t face) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4776E28))(0, rt, mipLevel, face);
	}
	template <typename T = void> static T DrawMeshImpl(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t layer, int32_t passTypeMask, uintptr_t camera, int32_t submeshIndex, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, uintptr_t probeAnchor, bool useLightProbes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, uintptr_t, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x47733D0))(0, mesh, matrix, material, layer, passTypeMask, camera, submeshIndex, properties, castShadows, receiveShadows, probeAnchor, useLightProbes);
	}
	template <typename T = void> static T DrawTextureImpl(Il2CppRect screenRect, uintptr_t texture, Il2CppRect sourceRect, int32_t leftBorder, int32_t rightBorder, int32_t topBorder, int32_t bottomBorder, uintptr_t color, uintptr_t mat, int32_t pass) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, Il2CppRect, int32_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4775D50))(0, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat, pass);
	}
	template <typename T = void> static T DrawMeshNow(uintptr_t mesh, uintptr_t matrix) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4776EE8))(0, mesh, matrix);
	}
	template <typename T = void> static T DrawMeshNow_1(uintptr_t mesh, uintptr_t matrix, int32_t materialIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x477703C))(0, mesh, matrix, materialIndex);
	}
	template <typename T = void> static T DrawMeshInstancedImpl(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4774434))(0, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T DrawMeshInstancedImpl_1(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, uintptr_t bounds, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x4774EA4))(0, mesh, submeshIndex, material, bounds, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}
	template <typename T = void> static T DrawMeshInstancedWithShaderPassImpl(uintptr_t mesh, int32_t submeshIndex, uintptr_t material, int32_t passtTypeMask, Il2CppArray<uintptr_t>* matrices, int32_t count, uintptr_t properties, uintptr_t castShadows, bool receiveShadows, int32_t layer, uintptr_t camera, bool ignorePerformanceRendering, int32_t debugIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, bool, int32_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x477539C))(0, mesh, submeshIndex, material, passtTypeMask, matrices, count, properties, castShadows, receiveShadows, layer, camera, ignorePerformanceRendering, debugIndex);
	}

};

}
