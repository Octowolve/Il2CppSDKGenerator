#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class NativePlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "NativePlugin"));
	}

	template <typename T = int32_t> static T& PluginID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ScriptVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ExpectedPluginVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxRenderWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxRenderHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetRenderEventFunc() {
		return ((T (*)(void *))(Il2CppBase() + 0x3895738))(0);
	}
	template <typename T = uintptr_t> static T GetFreeResourcesEventFunc() {
		return ((T (*)(void *))(Il2CppBase() + 0x3895808))(0);
	}
	template <typename T = bool> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x38958D8))(0);
	}
	template <typename T = void> static T Deinit() {
		return ((T (*)(void *))(Il2CppBase() + 0x38959B0))(0);
	}
	template <typename T = Il2CppString*> static T GetPluginVersionString() {
		return ((T (*)(void *))(Il2CppBase() + 0x3895A80))(0);
	}
	template <typename T = bool> static T IsTrialVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x3895BFC))(0);
	}
	template <typename T = int32_t> static T GetNumAVIVideoCodecs() {
		return ((T (*)(void *))(Il2CppBase() + 0x388CD44))(0);
	}
	template <typename T = bool> static T IsConfigureVideoCodecSupported(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x388CF14))(0, index);
	}
	template <typename T = void> static T ConfigureVideoCodec(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x38912BC))(0, index);
	}
	template <typename T = Il2CppString*> static T GetAVIVideoCodecName(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x388CE14))(0, index);
	}
	template <typename T = int32_t> static T GetNumAVIAudioCodecs() {
		return ((T (*)(void *))(Il2CppBase() + 0x388D1CC))(0);
	}
	template <typename T = bool> static T IsConfigureAudioCodecSupported(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x388D39C))(0, index);
	}
	template <typename T = void> static T ConfigureAudioCodec(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x389139C))(0, index);
	}
	template <typename T = Il2CppString*> static T GetAVIAudioCodecName(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x388D29C))(0, index);
	}
	template <typename T = int32_t> static T GetNumAVIAudioInputDevices() {
		return ((T (*)(void *))(Il2CppBase() + 0x388CFFC))(0);
	}
	template <typename T = Il2CppString*> static T GetAVIAudioInputDeviceName(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x388D0CC))(0, index);
	}
	template <typename T = int32_t> static T CreateRecorderVideo(Il2CppString* filename, uint32_t width, uint32_t height, int32_t frameRate, int32_t format, bool isTopDown, int32_t videoCodecIndex, bool hasAudio, int32_t audioSampleRate, int32_t audioChannelCount, int32_t audioInputDeviceIndex, int32_t audioCodecIndex, bool isRealTime, bool useMediaFoundation, bool supportAlpha, bool forceGpuFlush) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint32_t, int32_t, int32_t, bool, int32_t, bool, int32_t, int32_t, int32_t, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x3896064))(0, filename, width, height, frameRate, format, isTopDown, videoCodecIndex, hasAudio, audioSampleRate, audioChannelCount, audioInputDeviceIndex, audioCodecIndex, isRealTime, useMediaFoundation, supportAlpha, forceGpuFlush);
	}
	template <typename T = int32_t> static T CreateRecorderImages(Il2CppString* filename, uint32_t width, uint32_t height, int32_t frameRate, int32_t format, bool isTopDown, bool isRealTime, int32_t imageFormatType, bool supportAlpha, bool forceGpuFlush, int32_t startFrame) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint32_t, int32_t, int32_t, bool, bool, int32_t, bool, bool, int32_t))(Il2CppBase() + 0x38961B8))(0, filename, width, height, frameRate, format, isTopDown, isRealTime, imageFormatType, supportAlpha, forceGpuFlush, startFrame);
	}
	template <typename T = int32_t> static T CreateRecorderPipe(Il2CppString* filename, uint32_t width, uint32_t height, int32_t frameRate, int32_t format, bool isTopDown, bool supportAlpha, bool forceGpuFlush) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint32_t, int32_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x38962E0))(0, filename, width, height, frameRate, format, isTopDown, supportAlpha, forceGpuFlush);
	}
	template <typename T = bool> static T Start(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x38963FC))(0, handle);
	}
	template <typename T = bool> static T IsNewFrameDue(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x38964E4))(0, handle);
	}
	template <typename T = void> static T EncodeFrame(int32_t handle, uintptr_t data) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x38965CC))(0, handle, data);
	}
	template <typename T = void> static T EncodeAudio(int32_t handle, uintptr_t data, uint32_t length) {
		return ((T (*)(void *, int32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x388468C))(0, handle, data, length);
	}
	template <typename T = void> static T EncodeFrameWithAudio(int32_t handle, uintptr_t videoData, uintptr_t audioData, uint32_t audioLength) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x38966B4))(0, handle, videoData, audioData, audioLength);
	}
	template <typename T = void> static T Pause(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x38967A8))(0, handle);
	}
	template <typename T = void> static T Stop(int32_t handle, bool skipPendingFrames) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x3896888))(0, handle, skipPendingFrames);
	}
	template <typename T = void> static T SetTexturePointer(int32_t handle, uintptr_t texture) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x38844EC))(0, handle, texture);
	}
	template <typename T = void> static T FreeRecorder(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3896970))(0, handle);
	}
	template <typename T = uint32_t> static T GetNumDroppedFrames(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3896A50))(0, handle);
	}
	template <typename T = uint32_t> static T GetNumDroppedEncoderFrames(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3896B30))(0, handle);
	}
	template <typename T = uint32_t> static T GetNumEncodedFrames(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3896C10))(0, handle);
	}
	template <typename T = uint32_t> static T GetEncodedSeconds(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3896CF0))(0, handle);
	}
	template <typename T = uintptr_t> static T GetPluginVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x3895B2C))(0);
	}
	template <typename T = bool> static T GetAVIVideoCodecName_1(int32_t index, uintptr_t name, int32_t nameBufferLength) {
		return ((T (*)(void *, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3895CD4))(0, index, name, nameBufferLength);
	}
	template <typename T = bool> static T GetAVIAudioCodecName_1(int32_t index, uintptr_t name, int32_t nameBufferLength) {
		return ((T (*)(void *, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3895E04))(0, index, name, nameBufferLength);
	}
	template <typename T = bool> static T GetAVIAudioInputDeviceName_1(int32_t index, uintptr_t name, int32_t nameBufferLength) {
		return ((T (*)(void *, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3895F34))(0, index, name, nameBufferLength);
	}

};

}
