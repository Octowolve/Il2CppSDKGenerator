#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class UnityAudioCapture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "UnityAudioCapture"));
	}

	template <typename T = bool> T& _debugLogging() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _muteAudio() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int32_t> static T& BufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _readBuffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _bufferIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _bufferHandle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _numChannels() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _overflowCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _lockObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Buffer() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3896EAC))(this);
	}
	template <typename T = int32_t> T get_BufferLength() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3896EB4))(this);
	}
	template <typename T = int32_t> T get_NumChannels() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3896EBC))(this);
	}
	template <typename T = uintptr_t> T get_BufferPtr() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3896EC4))(this);
	}
	template <typename T = int32_t> T get_OverflowCount() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3891900))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3896ED0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3897488))(this);
	}
	template <typename T = uintptr_t> T ReadData(uintptr_t* length) {
		return ((T (*)(UnityAudioCapture*, uintptr_t*))(Il2CppBase() + 0x38845D0))(this, length);
	}
	template <typename T = void> T FlushBuffer() {
		return ((T (*)(UnityAudioCapture*))(Il2CppBase() + 0x3897534))(this);
	}
	template <typename T = void> T OnAudioFilterRead(Il2CppArray<uintptr_t>* data, int32_t channels) {
		return ((T (*)(UnityAudioCapture*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3897574))(this, data, channels);
	}
	template <typename T = int32_t> static T GetNumChannels(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3897458))(0, mode);
	}

};

}
