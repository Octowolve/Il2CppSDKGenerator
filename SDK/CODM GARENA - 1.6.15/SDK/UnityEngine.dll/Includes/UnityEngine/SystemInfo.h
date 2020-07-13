#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SystemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SystemInfo"));
	}


	template <typename T = float> static T get_batteryLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E899D0))(0);
	}
	template <typename T = int32_t> static T get_executableSizeMB() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89A60))(0);
	}
	template <typename T = int32_t> static T get_footPrintSizeMB() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89AF0))(0);
	}
	template <typename T = uintptr_t> static T get_batteryStatus() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89B80))(0);
	}
	template <typename T = Il2CppString*> static T get_operatingSystem() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89C10))(0);
	}
	template <typename T = uintptr_t> static T get_operatingSystemFamily() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89CA0))(0);
	}
	template <typename T = Il2CppString*> static T get_processorType() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89D30))(0);
	}
	template <typename T = int32_t> static T get_processorFrequency() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89DC0))(0);
	}
	template <typename T = int32_t> static T get_processorCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89E50))(0);
	}
	template <typename T = void> static T PrintMemoryStats() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89EE0))(0);
	}
	template <typename T = int32_t> static T get_systemMemorySize() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E89F70))(0);
	}
	template <typename T = int32_t> static T get_graphicsMemorySize() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A000))(0);
	}
	template <typename T = Il2CppString*> static T get_graphicsDeviceName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A090))(0);
	}
	template <typename T = Il2CppString*> static T get_graphicsDeviceVendor() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A120))(0);
	}
	template <typename T = int32_t> static T get_graphicsDeviceID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A1B0))(0);
	}
	template <typename T = int32_t> static T get_graphicsDeviceVendorID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A240))(0);
	}
	template <typename T = uintptr_t> static T get_graphicsDeviceType() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A2D0))(0);
	}
	template <typename T = bool> static T get_graphicsUVStartsAtTop() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A360))(0);
	}
	template <typename T = Il2CppString*> static T get_graphicsDeviceVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A3F0))(0);
	}
	template <typename T = int32_t> static T get_graphicsShaderLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A480))(0);
	}
	template <typename T = bool> static T get_graphicsMultiThreaded() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A510))(0);
	}
	template <typename T = bool> static T get_supportsShadows() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A5A0))(0);
	}
	template <typename T = bool> static T get_supportsRawShadowDepthSampling() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A630))(0);
	}
	template <typename T = bool> static T get_supportsRenderTextures() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A6C0))(0);
	}
	template <typename T = bool> static T get_supportsRenderToCubemap() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A750))(0);
	}
	template <typename T = bool> static T get_supportsImageEffects() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A7E0))(0);
	}
	template <typename T = bool> static T get_supports3DTextures() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A870))(0);
	}
	template <typename T = bool> static T get_supports2DArrayTextures() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8A900))(0);
	}
	template <typename T = bool> static T commonSupportsQuery(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E8A990))(0, str);
	}
	template <typename T = bool> static T get_supports3DRenderTextures() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8AA28))(0);
	}
	template <typename T = bool> static T get_supportsCubemapArrayTextures() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8AAB8))(0);
	}
	template <typename T = uintptr_t> static T get_copyTextureSupport() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8AB48))(0);
	}
	template <typename T = bool> static T get_supportsComputeShaders() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8ABD8))(0);
	}
	template <typename T = bool> static T get_supportsInstancing() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8AC68))(0);
	}
	template <typename T = bool> static T get_supportsVertexAttributeInstancing() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8ACF8))(0);
	}
	template <typename T = bool> static T get_supportsSparseTextures() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8AD88))(0);
	}
	template <typename T = int32_t> static T get_supportedRenderTargetCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8AE18))(0);
	}
	template <typename T = bool> static T get_usesReversedZBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8AEA8))(0);
	}
	template <typename T = bool> static T SupportsRenderTextureFormat(uintptr_t format) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E8AF38))(0, format);
	}
	template <typename T = bool> static T SupportsTextureFormat(uintptr_t format) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E8AFD0))(0, format);
	}
	template <typename T = uintptr_t> static T get_npotSupport() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B068))(0);
	}
	template <typename T = Il2CppString*> static T get_deviceUniqueIdentifier() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B0F8))(0);
	}
	template <typename T = Il2CppString*> static T get_deviceName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B188))(0);
	}
	template <typename T = Il2CppString*> static T get_deviceModel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B218))(0);
	}
	template <typename T = bool> static T get_supportsGyroscope() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B2A8))(0);
	}
	template <typename T = uintptr_t> static T get_deviceType() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B338))(0);
	}
	template <typename T = int32_t> static T get_maxTextureSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B3C8))(0);
	}
	template <typename T = int32_t> static T get_maxCubemapSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B458))(0);
	}
	template <typename T = bool> static T get_supportsAsyncCompute() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B4E8))(0);
	}
	template <typename T = bool> static T get_supportsGPUFence() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B578))(0);
	}
	template <typename T = bool> static T get_supportsAsyncGPUReadback() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B608))(0);
	}
	template <typename T = bool> static T get_supportsMipStreaming() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8B698))(0);
	}

};

}
