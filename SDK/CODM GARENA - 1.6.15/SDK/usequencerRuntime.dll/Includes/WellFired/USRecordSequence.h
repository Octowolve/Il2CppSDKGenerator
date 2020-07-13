#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USRecordSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USRecordSequence"));
	}

	template <typename T = bool> T& isRecording() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& recordOnStart() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int32_t> T& imageCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& captureFrameRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& upscaleAmount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& capturePath() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T set_CaptureFrameRate(int32_t value) {
		return ((T (*)(USRecordSequence*, int32_t))(Il2CppBase() + 0x486CF48))(this, value);
	}
	template <typename T = void> T set_UpscaleAmount(int32_t value) {
		return ((T (*)(USRecordSequence*, int32_t))(Il2CppBase() + 0x486D00C))(this, value);
	}
	template <typename T = void> T set_CapturePath(Il2CppString* value) {
		return ((T (*)(USRecordSequence*, Il2CppString*))(Il2CppBase() + 0x486D0D0))(this, value);
	}
	template <typename T = void> T set_RecordOnStart(bool value) {
		return ((T (*)(USRecordSequence*, bool))(Il2CppBase() + 0x486D0D8))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(USRecordSequence*))(Il2CppBase() + 0x486D0E0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(USRecordSequence*))(Il2CppBase() + 0x486D0F4))(this);
	}
	template <typename T = void> T StartRecording() {
		return ((T (*)(USRecordSequence*))(Il2CppBase() + 0x486D3B4))(this);
	}
	template <typename T = void> T PauseRecording() {
		return ((T (*)(USRecordSequence*))(Il2CppBase() + 0x486D3C0))(this);
	}
	template <typename T = void> T StopRecording() {
		return ((T (*)(USRecordSequence*))(Il2CppBase() + 0x486D3CC))(this);
	}

};

}
