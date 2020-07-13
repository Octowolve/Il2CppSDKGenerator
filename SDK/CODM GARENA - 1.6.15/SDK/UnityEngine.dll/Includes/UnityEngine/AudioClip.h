#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AudioClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AudioClip"));
	}

	template <typename T = uintptr_t> T& m_PCMReaderCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_PCMSetPositionCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T get_length() {
		return ((T (*)(AudioClip*))(Il2CppBase() + 0x469CD54))(this);
	}
	template <typename T = void> T InvokePCMReaderCallback_Internal(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(AudioClip*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x469CDEC))(this, data);
	}
	template <typename T = void> T InvokePCMSetPositionCallback_Internal(int32_t position) {
		return ((T (*)(AudioClip*, int32_t))(Il2CppBase() + 0x469CE98))(this, position);
	}

};

}
