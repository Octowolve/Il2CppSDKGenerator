#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking {

class DownloadHandlerAudioClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking", "DownloadHandlerAudioClip"));
	}


	template <typename T = void> T InternalCreateAudioClip(Il2CppString* url, uintptr_t audioType) {
		return ((T (*)(DownloadHandlerAudioClip*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4ABA208))(this, url, audioType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetData() {
		return ((T (*)(DownloadHandlerAudioClip*))(Il2CppBase() + 0x4ABA2B0))(this);
	}
	template <typename T = Il2CppString*> T GetText() {
		return ((T (*)(DownloadHandlerAudioClip*))(Il2CppBase() + 0x4ABA34C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T InternalGetData() {
		return ((T (*)(DownloadHandlerAudioClip*))(Il2CppBase() + 0x4ABA2B4))(this);
	}

};

}
