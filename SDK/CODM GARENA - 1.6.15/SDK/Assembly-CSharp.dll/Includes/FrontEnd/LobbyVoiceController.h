#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyVoiceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyVoiceController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& bIsRecording() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& mRecordFileName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bIsTranslating() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAudioView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMicrophoneView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTurnOnMic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMicrophoneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLobbyVoiceDeviceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRecordPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateOpenBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateCancellRecordBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateStartRecordBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateEndRecordBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUploadVoiceError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateVoiceFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDroppedVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateSendRecordBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AD524))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AD5C8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AD7AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36ADA94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36ADFE4))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AD864))(this);
	}
	template <typename T = void> T RefreshAudioView() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AE390))(this);
	}
	template <typename T = void> T RefreshMicrophoneView() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AE524))(this);
	}
	template <typename T = void> T OnVoiceBtnClick() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AE794))(this);
	}
	template <typename T = void> T OnNotifyTurnOnMic(uintptr_t msg) {
		return ((T (*)(LobbyVoiceController*, uintptr_t))(Il2CppBase() + 0x36AF9D4))(this, msg);
	}
	template <typename T = void> T OnMicrophoneBtnClick() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AFA80))(this);
	}
	template <typename T = void> T OnNotifyLobbyVoiceDeviceChange(uintptr_t msg) {
		return ((T (*)(LobbyVoiceController*, uintptr_t))(Il2CppBase() + 0x36B05F4))(this, msg);
	}
	template <typename T = void> T ResetRecordPanel() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36AD910))(this);
	}
	template <typename T = void> T RecordTime() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B06A0))(this);
	}
	template <typename T = void> T OnTranslateOpenBtnClick() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B08A0))(this);
	}
	template <typename T = void> T OnTranslateCancellRecordBtnClick() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B0BB8))(this);
	}
	template <typename T = void> T OnTranslateStartRecordBtnClick() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B1080))(this);
	}
	template <typename T = void> T OnTranslateFinish() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B146C))(this);
	}
	template <typename T = void> T OnTranslateEndRecordBtnClick() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B1510))(this);
	}
	template <typename T = void> T OnUploadVoiceFinish(uintptr_t msg) {
		return ((T (*)(LobbyVoiceController*, uintptr_t))(Il2CppBase() + 0x36B18B4))(this, msg);
	}
	template <typename T = void> T OnUploadVoiceError(uintptr_t msg) {
		return ((T (*)(LobbyVoiceController*, uintptr_t))(Il2CppBase() + 0x36B1CC4))(this, msg);
	}
	template <typename T = void> T OnTranslateVoiceFinish(uintptr_t msg) {
		return ((T (*)(LobbyVoiceController*, uintptr_t))(Il2CppBase() + 0x36B1D70))(this, msg);
	}
	template <typename T = void> T OnNotifyDroppedVoiceRoom(uintptr_t msg) {
		return ((T (*)(LobbyVoiceController*, uintptr_t))(Il2CppBase() + 0x36B2334))(this, msg);
	}
	template <typename T = void> T OnTranslateSendRecordBtnClick() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B24C0))(this);
	}
	template <typename T = void> T OnCloseView() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B265C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B2700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B2708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B2710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B2718))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LobbyVoiceController*))(Il2CppBase() + 0x36B2720))(this);
	}

};

}
