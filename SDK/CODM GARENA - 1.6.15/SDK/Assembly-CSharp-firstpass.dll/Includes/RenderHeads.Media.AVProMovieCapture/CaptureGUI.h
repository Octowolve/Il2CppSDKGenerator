#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class CaptureGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "CaptureGUI"));
	}

	template <typename T = uintptr_t> T& _movieCapture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _showUI() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _whenRecordingAutoHideUI() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& _guiSkin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _shownSection() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _videoCodecNames() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _audioCodecNames() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _videoCodecConfigurable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _audioCodecConfigurable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _audioDeviceNames() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _downScales() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _frameRates() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _outputType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _downScaleIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _frameRateIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& _videoPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& _audioPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector2> T& _audioCodecPos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int64_t> T& _lastFileSize() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _lastEncodedMinutes() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _lastEncodedSeconds() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _lastEncodedFrame() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x388BB9C))(this);
	}
	template <typename T = void> T CreateGUI() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x388BC5C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x388D484))(this);
	}
	template <typename T = void> T MyWindow(int32_t id) {
		return ((T (*)(CaptureGUI*, int32_t))(Il2CppBase() + 0x388D7C8))(this, id);
	}
	template <typename T = void> T GUI_RecordingStatus() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x388FBC8))(this);
	}
	template <typename T = void> T DrawGuiField(Il2CppString* a, Il2CppString* b) {
		return ((T (*)(CaptureGUI*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x38917EC))(this, a, b);
	}
	template <typename T = void> T StartCapture() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x389147C))(this);
	}
	template <typename T = void> T StopCapture() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x3891B90))(this);
	}
	template <typename T = void> T CancelCapture() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x3891AB8))(this);
	}
	template <typename T = void> T ResumeCapture() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x38919E0))(this);
	}
	template <typename T = void> T PauseCapture() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x3891908))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CaptureGUI*))(Il2CppBase() + 0x3891C74))(this);
	}

};

}
