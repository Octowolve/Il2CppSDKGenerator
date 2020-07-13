#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatVoiceToWordView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatVoiceToWordView"));
	}

	template <typename T = uintptr_t> T& RecordContainer() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SpeakContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& FailedContainer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpreakFX() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& RetryBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TransitionBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TransitionBlock() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TransistionLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RecordProgressbar() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TransitionedContainer() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& BackBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SendBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& TextInput() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& InputLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ARInputLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToRecordView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSpeakEnableUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToFailedView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToTransitionedView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLanguageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRChatVoiceToWordView*))(Il2CppBase() + 0x24FA07C))(this);
	}
	template <typename T = void> T ToRecordView() {
		return ((T (*)(BRChatVoiceToWordView*))(Il2CppBase() + 0x24F6634))(this);
	}
	template <typename T = void> T ShowSpeakEnableUI(bool flag) {
		return ((T (*)(BRChatVoiceToWordView*, bool))(Il2CppBase() + 0x24F6954))(this, flag);
	}
	template <typename T = void> T ToFailedView() {
		return ((T (*)(BRChatVoiceToWordView*))(Il2CppBase() + 0x24F7DF8))(this);
	}
	template <typename T = void> T ToTransitionedView() {
		return ((T (*)(BRChatVoiceToWordView*))(Il2CppBase() + 0x24F9160))(this);
	}
	template <typename T = void> T SetLanguageType() {
		return ((T (*)(BRChatVoiceToWordView*))(Il2CppBase() + 0x24FA12C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRChatVoiceToWordView*))(Il2CppBase() + 0x24FA274))(this);
	}

};

}
