#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class CaptureBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "CaptureBase"));
	}

	template <typename T = uintptr_t> T& _postCaptureSettings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _captureKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _captureOnStart() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _startPaused() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& _listVideoCodecsOnStart() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& _isRealTime() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& _persistAcrossSceneLoads() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _stopMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _stopFrames() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _stopSeconds() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _useMediaFoundationH264() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _videoCodecPriority() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _frameRate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _timelapseScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _downScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& _maxVideoSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _forceVideoCodecIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _flipVertically() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _supportAlpha() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& _forceGpuFlush() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = bool> T& _noAudio() {
		return *(T*)((uintptr_t)this + 0x4B);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _audioCodecPriority() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _forceAudioCodecIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _forceAudioDeviceIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _audioCapture() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _autoGenerateFilename() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _outputFolderType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _outputFolderPath() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& _autoFilenamePrefix() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _autoFilenameExtension() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& _forceFilename() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _imageSequenceStartFrame() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _imageSequenceZeroDigits() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _outputType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& _imageSequenceFormat() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _renderResolution() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector2> T& _renderSize() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _renderAntiAliasing() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _useMotionBlur() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _motionBlurSamples() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _motionBlurCameras() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& _motionBlur() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _allowVSyncDisable() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& _supportTextureRecreate() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = bool> T& _captureMouseCursor() {
		return *(T*)((uintptr_t)this + 0xA6);
	}
	template <typename T = uintptr_t> T& _mouseCursor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& _codecName() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& _codecIndex() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _audioCodecName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& _audioCodecIndex() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _audioDeviceName() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& _audioDeviceIndex() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& _unityAudioSampleRate() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& _unityAudioChannelCount() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _texture() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& _handle() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _targetWidth() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& _targetHeight() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& _capturing() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& _paused() {
		return *(T*)((uintptr_t)this + 0xDD);
	}
	template <typename T = Il2CppString*> T& _filePath() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _fileInfo() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& _pixelFormat() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& _oldVSyncCount() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& _oldFixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& _isTopDown() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& _isDirectX11() {
		return *(T*)((uintptr_t)this + 0xF5);
	}
	template <typename T = bool> T& _queuedStartCapture() {
		return *(T*)((uintptr_t)this + 0xF6);
	}
	template <typename T = bool> T& _queuedStopCapture() {
		return *(T*)((uintptr_t)this + 0xF7);
	}
	template <typename T = float> T& _captureStartTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& _timeSinceLastFrame() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& _minimumDiskSpaceMB() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int64_t> T& _freeDiskSpaceMB() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uint32_t> T& _numDroppedFrames() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uint32_t> T& _numDroppedEncoderFrames() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uint32_t> T& _numEncodedFrames() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uint32_t> T& _totalEncodedSeconds() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> static T& _isInitialised() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _renderEventFunction() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _freeEventFunction() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& _fps() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& _frameTotal() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& _frameCount() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& _startFrameTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}

	template <typename T = Il2CppString*> T get_LastFilePath() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF8864))(this);
	}
	template <typename T = uint32_t> T get_NumDroppedFrames() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF886C))(this);
	}
	template <typename T = uint32_t> T get_NumDroppedEncoderFrames() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF8874))(this);
	}
	template <typename T = uint32_t> T get_NumEncodedFrames() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF887C))(this);
	}
	template <typename T = uint32_t> T get_TotalEncodedSeconds() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF8884))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_VideoCodecPriority() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF888C))(this);
	}
	template <typename T = void> T set_VideoCodecPriority(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CaptureBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BF8894))(this, value);
	}
	template <typename T = int32_t> T get_TimelapseScale() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF8EA4))(this);
	}
	template <typename T = void> T set_TimelapseScale(int32_t value) {
		return ((T (*)(CaptureBase*, int32_t))(Il2CppBase() + 0x2BF8EAC))(this, value);
	}
	template <typename T = uintptr_t> T get_PostCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF8EB4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF8EBC))(this);
	}
	template <typename T = void> T SetupRenderFunctions() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BF9928))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFA28C))(this);
	}
	template <typename T = void> T SelectCodec(bool listCodecs) {
		return ((T (*)(CaptureBase*, bool))(Il2CppBase() + 0x2BF88A0))(this, listCodecs);
	}
	template <typename T = void> T SelectAudioCodec(bool listCodecs) {
		return ((T (*)(CaptureBase*, bool))(Il2CppBase() + 0x2BF9958))(this, listCodecs);
	}
	template <typename T = void> T SelectAudioDevice(bool display) {
		return ((T (*)(CaptureBase*, bool))(Il2CppBase() + 0x2BF9EF8))(this, display);
	}
	template <typename T = Il2CppVector2> static T GetRecordingResolution(int32_t width, int32_t height, uintptr_t downscale, Il2CppVector2 maxVideoSize) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2BFA4A0))(0, width, height, downscale, maxVideoSize);
	}
	template <typename T = void> T SelectRecordingResolution(int32_t width, int32_t height) {
		return ((T (*)(CaptureBase*, int32_t, int32_t))(Il2CppBase() + 0x2BFA64C))(this, width, height);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFA7DC))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFA7F0))(this);
	}
	template <typename T = void> T EncodeTexture(uintptr_t texture) {
		return ((T (*)(CaptureBase*, uintptr_t))(Il2CppBase() + 0x2BFA920))(this, texture);
	}
	template <typename T = bool> T IsUsingUnityAudio() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFA9C0))(this);
	}
	template <typename T = bool> T IsRecordingUnityAudio() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFAA98))(this);
	}
	template <typename T = bool> T IsUsingMotionBlur() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFAADC))(this);
	}
	template <typename T = void> T EncodePointer(uintptr_t ptr) {
		return ((T (*)(CaptureBase*, uintptr_t))(Il2CppBase() + 0x2BFABA8))(this, ptr);
	}
	template <typename T = bool> T IsCapturing() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFAC58))(this);
	}
	template <typename T = bool> T IsPaused() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFAC60))(this);
	}
	template <typename T = int32_t> T GetRecordingWidth() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFAC68))(this);
	}
	template <typename T = int32_t> T GetRecordingHeight() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFAC70))(this);
	}
	template <typename T = Il2CppString*> T GenerateTimestampedFilename(Il2CppString* filenamePrefix, Il2CppString* filenameExtension) {
		return ((T (*)(CaptureBase*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BFAC78))(this, filenamePrefix, filenameExtension);
	}
	template <typename T = Il2CppString*> static T GetFolder(uintptr_t outputPathType, Il2CppString* path) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BFB214))(0, outputPathType, path);
	}
	template <typename T = Il2CppString*> static T AutoGenerateFilename(uintptr_t outputPathType, Il2CppString* path, Il2CppString* filename) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BFB3D4))(0, outputPathType, path, filename);
	}
	template <typename T = Il2CppString*> static T ManualGenerateFilename(uintptr_t outputPathType, Il2CppString* path, Il2CppString* filename) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BFB4D0))(0, outputPathType, path, filename);
	}
	template <typename T = bool> static T HasExtension(Il2CppString* path, Il2CppString* extension) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BFB61C))(0, path, extension);
	}
	template <typename T = void> T GenerateFilename() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFB664))(this);
	}
	template <typename T = bool> T PrepareCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFBD70))(this);
	}
	template <typename T = void> T QueueStartCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFD458))(this);
	}
	template <typename T = bool> T StartCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFA2C0))(this);
	}
	template <typename T = void> T PauseCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFD4A8))(this);
	}
	template <typename T = void> T ResumeCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFD544))(this);
	}
	template <typename T = void> T CancelCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFD608))(this);
	}
	template <typename T = void> T UnprepareCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFD668))(this);
	}
	template <typename T = Il2CppString*> static T get_LastFileSaved() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BFD744))(0);
	}
	template <typename T = void> static T set_LastFileSaved(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BFD81C))(0, value);
	}
	template <typename T = void> T RenderThreadEvent(uintptr_t renderEvent) {
		return ((T (*)(CaptureBase*, uintptr_t))(Il2CppBase() + 0x2BFD8A8))(this, renderEvent);
	}
	template <typename T = void> T StopCapture(bool skipPendingFrames) {
		return ((T (*)(CaptureBase*, bool))(Il2CppBase() + 0x2BFD9A4))(this, skipPendingFrames);
	}
	template <typename T = void> T ApplyPostOperations(Il2CppString* path) {
		return ((T (*)(CaptureBase*, Il2CppString*))(Il2CppBase() + 0x2BFDE74))(this, path);
	}
	template <typename T = void> T ToggleCapture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE0F4))(this);
	}
	template <typename T = bool> T IsEnoughDiskSpace() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE118))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE120))(this);
	}
	template <typename T = void> T CheckFreeDiskSpace() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE1AC))(this);
	}
	template <typename T = bool> T IsProgressComplete() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE208))(this);
	}
	template <typename T = float> T GetProgress() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE2CC))(this);
	}
	template <typename T = float> T GetSecondsPerCaptureFrame() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFD474))(this);
	}
	template <typename T = bool> T CanOutputFrame() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE374))(this);
	}
	template <typename T = void> T TickFrameTimer() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE504))(this);
	}
	template <typename T = void> T RenormTimer() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE538))(this);
	}
	template <typename T = uintptr_t> T GetPreviewTexture() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE57C))(this);
	}
	template <typename T = void> T UpdateFrame() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE584))(this);
	}
	template <typename T = float> T get_FPS() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE708))(this);
	}
	template <typename T = float> T get_FramesTotal() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE710))(this);
	}
	template <typename T = void> T ResetFPS() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFD464))(this);
	}
	template <typename T = void> T UpdateFPS() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFE720))(this);
	}
	template <typename T = int32_t> T GetCameraAntiAliasingLevel(uintptr_t camera) {
		return ((T (*)(CaptureBase*, uintptr_t))(Il2CppBase() + 0x2BFE78C))(this, camera);
	}
	template <typename T = void> T ConfigureCodec() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFEA38))(this);
	}
	template <typename T = int64_t> T GetCaptureFileSize() {
		return ((T (*)(CaptureBase*))(Il2CppBase() + 0x2BFEA78))(this);
	}
	template <typename T = void> static T GetResolution(uintptr_t res, uintptr_t width, uintptr_t height) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BFEB94))(0, res, width, height);
	}
	template <typename T = int32_t> static T NextMultipleOf4(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2BFA640))(0, value);
	}

};

}
