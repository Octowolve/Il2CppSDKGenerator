#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatVoiceToWordController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatVoiceToWordController"));
	}

	template <typename T = bool> static T& ISOPEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& sendChatMsgMothod() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MAX_RECORD_TIME() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsRecording() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsSuccessRecord() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = Il2CppString*> T& mRecordingFilePath() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int64_t> T& RecordStartTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& recordTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ChatDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& mContent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& BRCtrl() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTransitionBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClickTextInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressTextInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRetryBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckApplyMessageKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestApplyMessageKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyMessageKeyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSpeechToText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputDeselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F61B8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F628C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F6B08))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F6FC0))(this);
	}
	template <typename T = void> T OpenView(uintptr_t SendMethod) {
		return ((T (*)(BRChatVoiceToWordController*, uintptr_t))(Il2CppBase() + 0x24EA340))(this, SendMethod);
	}
	template <typename T = void> T OnTransitionBtnClick() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F79EC))(this);
	}
	template <typename T = void> T OnDoubleClickTextInput(uintptr_t obj) {
		return ((T (*)(BRChatVoiceToWordController*, uintptr_t))(Il2CppBase() + 0x24F7F20))(this, obj);
	}
	template <typename T = void> T OnPressTextInput(uintptr_t go, bool state) {
		return ((T (*)(BRChatVoiceToWordController*, uintptr_t, bool))(Il2CppBase() + 0x24F8118))(this, go, state);
	}
	template <typename T = void> T OnSendBtnClick() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F82DC))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F8524))(this);
	}
	template <typename T = void> T OnBackBtnClick() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F8790))(this);
	}
	template <typename T = void> T OnRetryBtnClick() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F8864))(this);
	}
	template <typename T = void> T CheckApplyMessageKey() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F73D8))(this);
	}
	template <typename T = uintptr_t> T RequestApplyMessageKey() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F8938))(this);
	}
	template <typename T = void> T OnApplyMessageKeyStatus(uintptr_t msg) {
		return ((T (*)(BRChatVoiceToWordController*, uintptr_t))(Il2CppBase() + 0x24F8A3C))(this, msg);
	}
	template <typename T = uintptr_t> T RequestSpeechToText(Il2CppString* voiceFileId) {
		return ((T (*)(BRChatVoiceToWordController*, Il2CppString*))(Il2CppBase() + 0x24F8BAC))(this, voiceFileId);
	}
	template <typename T = void> T OnTranslateVoiceFinish(uintptr_t msg) {
		return ((T (*)(BRChatVoiceToWordController*, uintptr_t))(Il2CppBase() + 0x24F8CCC))(this, msg);
	}
	template <typename T = void> T BeginRecord() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F7564))(this);
	}
	template <typename T = bool> T EndRecord() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F7AF8))(this);
	}
	template <typename T = void> T CancelRecord() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F955C))(this);
	}
	template <typename T = void> T ResetRecord() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F86BC))(this);
	}
	template <typename T = void> T CountDown() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F96E8))(this);
	}
	template <typename T = void> T OnInputDeselect() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F99E8))(this);
	}
	template <typename T = void> T OnInputSubmit() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F9ABC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F9B94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F9B9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F9BA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRChatVoiceToWordController*))(Il2CppBase() + 0x24F9BAC))(this);
	}

};

}
