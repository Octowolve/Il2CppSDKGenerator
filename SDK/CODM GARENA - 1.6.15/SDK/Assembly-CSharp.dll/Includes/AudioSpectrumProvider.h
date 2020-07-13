#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioSpectrumProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioSpectrumProvider"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& targetMaterials() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& audioData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& shaderChannelName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& shaderAudioDataName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& shaderTimeElapseaName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& enableProvideData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& amplifier() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_timeOnStartPlaying() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_audioTimeElapse() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_state() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_spectrumData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_audioData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& playTest() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T get_timeElapse() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324BA94))(this);
	}
	template <typename T = void> T set_timeElapse(float value) {
		return ((T (*)(AudioSpectrumProvider*, float))(Il2CppBase() + 0x324F584))(this, value);
	}
	template <typename T = uintptr_t> T get_spectrumData() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324F6C4))(this);
	}
	template <typename T = uintptr_t> T get_audioSourceData() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324F6D4))(this);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324BA8C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324F6E4))(this);
	}
	template <typename T = void> T OnPlaying() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324F9C4))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324FB28))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324FBCC))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(AudioSpectrumProvider*))(Il2CppBase() + 0x324FE3C))(this);
	}

};

}
