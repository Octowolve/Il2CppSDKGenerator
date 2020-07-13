#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyVoiceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyVoiceView"));
	}

	template <typename T = uintptr_t> T& mVoiceAudioBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mVoiceAudioState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mTranslateOpenBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mTranslateBtnObj() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& mTranslateStartRecordBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& mTranslateEndRecordBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& mTranslateCancellRecordBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mTranslateSendBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mTranslateText() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& translateInput() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mTranslateProgress() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mTranslateProgressTweener() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BgAndTitle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SoundTimeRecond() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RecordCountDown() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& NothingTranslate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& translateTextShow() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& Intransition() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ProgressObj() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& Talking() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& mCacheSendText() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateTextChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LobbyVoiceView*))(Il2CppBase() + 0x36B3E34))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(LobbyVoiceView*))(Il2CppBase() + 0x36B3EDC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(LobbyVoiceView*, float))(Il2CppBase() + 0x36B3FE4))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(LobbyVoiceView*))(Il2CppBase() + 0x36B42A0))(this);
	}
	template <typename T = void> T TranslateTextChange() {
		return ((T (*)(LobbyVoiceView*))(Il2CppBase() + 0x36B42A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyVoiceView*))(Il2CppBase() + 0x36B43C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(LobbyVoiceView*))(Il2CppBase() + 0x36B43C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LobbyVoiceView*, float))(Il2CppBase() + 0x36B43D0))(this, P0);
	}

};

}
