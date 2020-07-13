#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RenderTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RenderTexture"));
	}


	template <typename T = void> static T Internal_CreateRenderTexture(uintptr_t rt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E76FCC))(0, rt);
	}
	template <typename T = uintptr_t> static T GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, uintptr_t format, uintptr_t readWrite, int32_t antiAliasing, uintptr_t vrUsage) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E77344))(0, width, height, depthBuffer, format, readWrite, antiAliasing, vrUsage);
	}
	template <typename T = uintptr_t> static T GetTemporary_1(int32_t width, int32_t height, int32_t depthBuffer, uintptr_t format, uintptr_t readWrite, int32_t antiAliasing) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E77414))(0, width, height, depthBuffer, format, readWrite, antiAliasing);
	}
	template <typename T = uintptr_t> static T GetTemporary_2(int32_t width, int32_t height, int32_t depthBuffer, uintptr_t format, uintptr_t readWrite) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E77440))(0, width, height, depthBuffer, format, readWrite);
	}
	template <typename T = uintptr_t> static T GetTemporary_3(int32_t width, int32_t height, int32_t depthBuffer, uintptr_t format) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E77474))(0, width, height, depthBuffer, format);
	}
	template <typename T = uintptr_t> static T GetTemporary_4(int32_t width, int32_t height, int32_t depthBuffer) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E774A4))(0, width, height, depthBuffer);
	}
	template <typename T = uintptr_t> static T GetTemporary_5(int32_t width, int32_t height) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4E774D4))(0, width, height);
	}
	template <typename T = void> static T ReleaseTemporary(uintptr_t temp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E77508))(0, temp);
	}
	template <typename T = int32_t> static T Internal_GetWidth(uintptr_t mono) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E775A0))(0, mono);
	}
	template <typename T = void> static T Internal_SetWidth(uintptr_t mono, int32_t width) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4E77638))(0, mono, width);
	}
	template <typename T = int32_t> static T Internal_GetHeight(uintptr_t mono) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E776D8))(0, mono);
	}
	template <typename T = void> static T Internal_SetHeight(uintptr_t mono, int32_t width) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4E77770))(0, mono, width);
	}
	template <typename T = void> static T Internal_SetRenderTextureMemoryless(uintptr_t mono, uintptr_t memoryless) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E77810))(0, mono, memoryless);
	}
	template <typename T = void> static T Internal_SetSRGBReadWrite(uintptr_t mono, bool sRGB) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4E771A4))(0, mono, sRGB);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E778B0))(this);
	}
	template <typename T = void> T set_width(int32_t value) {
		return ((T (*)(RenderTexture*, int32_t))(Il2CppBase() + 0x4E778B8))(this, value);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E778C4))(this);
	}
	template <typename T = void> T set_height(int32_t value) {
		return ((T (*)(RenderTexture*, int32_t))(Il2CppBase() + 0x4E778CC))(this, value);
	}
	template <typename T = void> T set_memorylessMode(uintptr_t value) {
		return ((T (*)(RenderTexture*, uintptr_t))(Il2CppBase() + 0x4E778D8))(this, value);
	}
	template <typename T = int32_t> T get_depth() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E778E4))(this);
	}
	template <typename T = void> T set_depth(int32_t value) {
		return ((T (*)(RenderTexture*, int32_t))(Il2CppBase() + 0x4E77064))(this, value);
	}
	template <typename T = void> T set_isPowerOfTwo(bool value) {
		return ((T (*)(RenderTexture*, bool))(Il2CppBase() + 0x4E7797C))(this, value);
	}
	template <typename T = uintptr_t> T get_format() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E77A1C))(this);
	}
	template <typename T = void> T set_format(uintptr_t value) {
		return ((T (*)(RenderTexture*, uintptr_t))(Il2CppBase() + 0x4E77104))(this, value);
	}
	template <typename T = void> T set_useMipMap(bool value) {
		return ((T (*)(RenderTexture*, bool))(Il2CppBase() + 0x4E77AB4))(this, value);
	}
	template <typename T = void> T set_autoGenerateMips(bool value) {
		return ((T (*)(RenderTexture*, bool))(Il2CppBase() + 0x4E77B54))(this, value);
	}
	template <typename T = uintptr_t> static T Internal_GetDimension(uintptr_t rt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E77BF4))(0, rt);
	}
	template <typename T = void> static T Internal_SetDimension(uintptr_t rt, uintptr_t dim) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E77C8C))(0, rt, dim);
	}
	template <typename T = uintptr_t> T get_dimension() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E77D2C))(this);
	}
	template <typename T = void> T set_dimension(uintptr_t value) {
		return ((T (*)(RenderTexture*, uintptr_t))(Il2CppBase() + 0x4E77D34))(this, value);
	}
	template <typename T = int32_t> T get_volumeDepth() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E77D40))(this);
	}
	template <typename T = void> T set_volumeDepth(int32_t value) {
		return ((T (*)(RenderTexture*, int32_t))(Il2CppBase() + 0x4E77DD8))(this, value);
	}
	template <typename T = int32_t> T get_antiAliasing() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E77E78))(this);
	}
	template <typename T = void> T set_antiAliasing(int32_t value) {
		return ((T (*)(RenderTexture*, int32_t))(Il2CppBase() + 0x4E77F10))(this, value);
	}
	template <typename T = bool> T get_enableRandomWrite() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E77FB0))(this);
	}
	template <typename T = void> T set_enableRandomWrite(bool value) {
		return ((T (*)(RenderTexture*, bool))(Il2CppBase() + 0x4E78048))(this, value);
	}
	template <typename T = bool> T Create() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E780E8))(this);
	}
	template <typename T = bool> static T INTERNAL_CALL_Create(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E780F0))(0, self);
	}
	template <typename T = void> T Release() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E78188))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_Release(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E78190))(0, self);
	}
	template <typename T = bool> T IsCreated() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E78228))(this);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsCreated(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E78230))(0, self);
	}
	template <typename T = void> T DiscardContents() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E782C8))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_DiscardContents(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E782D0))(0, self);
	}
	template <typename T = void> T MarkRestoreExpected() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E78368))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_MarkRestoreExpected(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E78370))(0, self);
	}
	template <typename T = uintptr_t> T get_colorBuffer() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E78408))(this);
	}
	template <typename T = uintptr_t> T get_depthBuffer() {
		return ((T (*)(RenderTexture*))(Il2CppBase() + 0x4E784E4))(this);
	}
	template <typename T = void> T GetColorBuffer(uintptr_t* res) {
		return ((T (*)(RenderTexture*, uintptr_t*))(Il2CppBase() + 0x4E78444))(this, res);
	}
	template <typename T = void> T GetDepthBuffer(uintptr_t* res) {
		return ((T (*)(RenderTexture*, uintptr_t*))(Il2CppBase() + 0x4E78520))(this, res);
	}
	template <typename T = uintptr_t> static T get_active() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E785C0))(0);
	}
	template <typename T = void> static T set_active(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E78650))(0, value);
	}

};

}
