#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class AudioOutputManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "AudioOutputManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& _accessTrackers() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& _pcmData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GrabAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x410BB68))(0);
	}
	template <typename T = void> T RequestAudio(uintptr_t _outputComponent, uintptr_t mediaPlayer, Il2CppArray<uintptr_t>* data, int32_t channelMask, int32_t totalChannels, uintptr_t audioOutputMode) {
		return ((T (*)(AudioOutputManager*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x410BCC4))(this, _outputComponent, mediaPlayer, data, channelMask, totalChannels, audioOutputMode);
	}
	template <typename T = void> T GrabAudio(uintptr_t player, Il2CppArray<uintptr_t>* data, int32_t channels) {
		return ((T (*)(AudioOutputManager*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x410C634))(this, player, data, channels);
	}

};

}
