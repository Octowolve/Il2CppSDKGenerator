#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Rendering {

class CommandBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Rendering", "CommandBuffer"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(CommandBuffer*))(Il2CppBase() + 0x4E72990))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CommandBuffer*))(Il2CppBase() + 0x4E72A88))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(CommandBuffer*, bool))(Il2CppBase() + 0x4E729F8))(this, disposing);
	}
	template <typename T = void> static T InitBuffer(uintptr_t buf) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E728F8))(0, buf);
	}
	template <typename T = void> T ReleaseBuffer() {
		return ((T (*)(CommandBuffer*))(Il2CppBase() + 0x4E72AB0))(this);
	}
	template <typename T = void> T SetComputeVectorParam(uintptr_t computeShader, Il2CppString* name, uintptr_t val) {
		return ((T (*)(CommandBuffer*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E72B48))(this, computeShader, name, val);
	}
	template <typename T = void> static T INTERNAL_CALL_SetComputeVectorParam(uintptr_t self, uintptr_t computeShader, Il2CppString* name, uintptr_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E72B94))(0, self, computeShader, name, val);
	}
	template <typename T = void> T SetComputeTextureParam(uintptr_t computeShader, int32_t kernelIndex, Il2CppString* name, uintptr_t rt) {
		return ((T (*)(CommandBuffer*, uintptr_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E72C44))(this, computeShader, kernelIndex, name, rt);
	}
	template <typename T = void> T Internal_SetComputeTextureParam(uintptr_t computeShader, int32_t kernelIndex, Il2CppString* name, uintptr_t rt) {
		return ((T (*)(CommandBuffer*, uintptr_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E72C7C))(this, computeShader, kernelIndex, name, rt);
	}
	template <typename T = void> T DispatchCompute(uintptr_t computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ) {
		return ((T (*)(CommandBuffer*, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E72D2C))(this, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
	}
	template <typename T = void> T Internal_DispatchCompute(uintptr_t computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ) {
		return ((T (*)(CommandBuffer*, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E72D50))(this, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(CommandBuffer*))(Il2CppBase() + 0x4E72E00))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(CommandBuffer*, Il2CppString*))(Il2CppBase() + 0x4E72E98))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CommandBuffer*))(Il2CppBase() + 0x4E72F38))(this);
	}
	template <typename T = void> T DrawMesh(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t submeshIndex, int32_t shaderPass) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4E72FD0))(this, mesh, matrix, material, submeshIndex, shaderPass);
	}
	template <typename T = void> T DrawMesh_1(uintptr_t mesh, uintptr_t matrix, uintptr_t material) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E73410))(this, mesh, matrix, material);
	}
	template <typename T = void> T DrawMesh_2(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t submeshIndex, int32_t shaderPass, uintptr_t properties) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E73068))(this, mesh, matrix, material, submeshIndex, shaderPass, properties);
	}
	template <typename T = void> T Internal_DrawMesh(uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t submeshIndex, int32_t shaderPass, uintptr_t properties) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E734A0))(this, mesh, matrix, material, submeshIndex, shaderPass, properties);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_DrawMesh(uintptr_t self, uintptr_t mesh, uintptr_t matrix, uintptr_t material, int32_t submeshIndex, int32_t shaderPass, uintptr_t properties) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E7354C))(0, self, mesh, matrix, material, submeshIndex, shaderPass, properties);
	}
	template <typename T = void> T DrawRenderer(uintptr_t renderer, uintptr_t material, int32_t submeshIndex) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E7361C))(this, renderer, material, submeshIndex);
	}
	template <typename T = void> T DrawRenderer_1(uintptr_t renderer, uintptr_t material, int32_t submeshIndex, int32_t shaderPass) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4E7363C))(this, renderer, material, submeshIndex, shaderPass);
	}
	template <typename T = void> T Internal_DrawRenderer(uintptr_t renderer, uintptr_t material, int32_t submeshIndex, int32_t shaderPass) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4E73904))(this, renderer, material, submeshIndex, shaderPass);
	}
	template <typename T = void> T SetRenderTarget(uintptr_t rt) {
		return ((T (*)(CommandBuffer*, uintptr_t))(Il2CppBase() + 0x4E739B4))(this, rt);
	}
	template <typename T = void> T SetRenderTarget_1(uintptr_t color, uintptr_t depth) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E73A98))(this, color, depth);
	}
	template <typename T = void> T SetRenderTarget_Single(uintptr_t rt, int32_t mipLevel, uintptr_t cubemapFace, int32_t depthSlice) {
		return ((T (*)(CommandBuffer*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E739E8))(this, rt, mipLevel, cubemapFace, depthSlice);
	}
	template <typename T = void> T SetRenderTarget_ColDepth(uintptr_t color, uintptr_t depth, int32_t mipLevel, uintptr_t cubemapFace, int32_t depthSlice) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E73AE4))(this, color, depth, mipLevel, cubemapFace, depthSlice);
	}
	template <typename T = void> T CopyTexture(uintptr_t src, uintptr_t dst) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E73B94))(this, src, dst);
	}
	template <typename T = void> T CopyTexture_Internal(uintptr_t src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, uintptr_t dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY, int32_t mode) {
		return ((T (*)(CommandBuffer*, uintptr_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uintptr_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E73C04))(this, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY, mode);
	}
	template <typename T = void> T Blit(uintptr_t source, uintptr_t dest) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E73CB4))(this, source, dest);
	}
	template <typename T = void> T Blit_1(uintptr_t source, uintptr_t dest, uintptr_t mat) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E73D98))(this, source, dest, mat);
	}
	template <typename T = void> T Blit_2(uintptr_t source, uintptr_t dest, uintptr_t mat, int32_t pass) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E73DD4))(this, source, dest, mat, pass);
	}
	template <typename T = void> T Blit_Texture(uintptr_t source, uintptr_t dest, uintptr_t mat, int32_t pass) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E73CE8))(this, source, dest, mat, pass);
	}
	template <typename T = void> T Blit_3(uintptr_t source, uintptr_t dest) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E73E0C))(this, source, dest);
	}
	template <typename T = void> T Blit_4(uintptr_t source, uintptr_t dest, uintptr_t mat) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E73F00))(this, source, dest, mat);
	}
	template <typename T = void> T Blit_5(uintptr_t source, uintptr_t dest, uintptr_t mat, int32_t pass) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E73F50))(this, source, dest, mat, pass);
	}
	template <typename T = void> T Blit_Identifier(uintptr_t source, uintptr_t dest, uintptr_t mat, int32_t pass) {
		return ((T (*)(CommandBuffer*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E73E50))(this, source, dest, mat, pass);
	}
	template <typename T = void> T GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, uintptr_t filter, uintptr_t format, uintptr_t readWrite, int32_t antiAliasing, bool enableRandomWrite) {
		return ((T (*)(CommandBuffer*, int32_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4E73FA4))(this, nameID, width, height, depthBuffer, filter, format, readWrite, antiAliasing, enableRandomWrite);
	}
	template <typename T = void> T GetTemporaryRT_1(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, uintptr_t filter, uintptr_t format, uintptr_t readWrite, int32_t antiAliasing) {
		return ((T (*)(CommandBuffer*, int32_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E740A0))(this, nameID, width, height, depthBuffer, filter, format, readWrite, antiAliasing);
	}
	template <typename T = void> T GetTemporaryRT_2(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, uintptr_t filter, uintptr_t format, uintptr_t readWrite) {
		return ((T (*)(CommandBuffer*, int32_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E740E4))(this, nameID, width, height, depthBuffer, filter, format, readWrite);
	}
	template <typename T = void> T GetTemporaryRT_3(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer) {
		return ((T (*)(CommandBuffer*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E7412C))(this, nameID, width, height, depthBuffer);
	}
	template <typename T = void> T GetTemporaryRT_4(int32_t nameID, int32_t width, int32_t height) {
		return ((T (*)(CommandBuffer*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4E74168))(this, nameID, width, height);
	}
	template <typename T = void> T ReleaseTemporaryRT(int32_t nameID) {
		return ((T (*)(CommandBuffer*, int32_t))(Il2CppBase() + 0x4E741A4))(this, nameID);
	}
	template <typename T = void> T ClearRenderTarget(bool clearDepth, bool clearColor, uintptr_t backgroundColor) {
		return ((T (*)(CommandBuffer*, bool, bool, uintptr_t))(Il2CppBase() + 0x4E74244))(this, clearDepth, clearColor, backgroundColor);
	}
	template <typename T = void> static T INTERNAL_CALL_ClearRenderTarget(uintptr_t self, bool clearDepth, bool clearColor, uintptr_t backgroundColor, float depth) {
		return ((T (*)(void *, uintptr_t, bool, bool, uintptr_t, float))(Il2CppBase() + 0x4E74298))(0, self, clearDepth, clearColor, backgroundColor, depth);
	}
	template <typename T = void> T SetGlobalFloat(int32_t nameID, float value) {
		return ((T (*)(CommandBuffer*, int32_t, float))(Il2CppBase() + 0x4E74360))(this, nameID, value);
	}
	template <typename T = void> T SetGlobalTexture(Il2CppString* name, uintptr_t value) {
		return ((T (*)(CommandBuffer*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E74408))(this, name, value);
	}
	template <typename T = void> T SetGlobalTexture_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(CommandBuffer*, int32_t, uintptr_t))(Il2CppBase() + 0x4E744E4))(this, nameID, value);
	}
	template <typename T = void> T SetGlobalTexture_Impl(int32_t nameID, uintptr_t rt) {
		return ((T (*)(CommandBuffer*, int32_t, uintptr_t))(Il2CppBase() + 0x4E74508))(this, nameID, rt);
	}
	template <typename T = void> T BeginSample(Il2CppString* name) {
		return ((T (*)(CommandBuffer*, Il2CppString*))(Il2CppBase() + 0x4E745B0))(this, name);
	}
	template <typename T = void> T EndSample(Il2CppString* name) {
		return ((T (*)(CommandBuffer*, Il2CppString*))(Il2CppBase() + 0x4E74650))(this, name);
	}

};

}
