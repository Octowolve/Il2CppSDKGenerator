#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceBtnHUDBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceBtnHUDBase"));
	}

	template <typename T = uintptr_t> T& mIamTalkingEffectObj() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mTeammateVoiceList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mVoiceAudioBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mVoiceAudioState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mVoiceAudioLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mVoiceAudioSelectObj() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& mVoiceAudioUnSelectObj() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& mAudioVoiceBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneState() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneSelectObj() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mVoiceMicrophoneUnSelectObj() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& mMicrophoneVoiceBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& bIsAudioHideUiOpen() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& bIsMicrophoneHideUiOpen() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = uintptr_t> T& mCacheAudioMode() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& mClickTipObj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mClickTipTween() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& mVoiceContainer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_holdTalkingTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& b_isBeginTalking() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_pressingTimeCount() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& bRunningVoiceFlag() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& bEnableTouch() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = float> T& minX() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& maxX() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& minY() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& maxY() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& cacheFingerId() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& CAMERA_DISTANCE_Z() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& bTouching() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& fingerTouch() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMcBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMcEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseTouchOrNgui() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTouchPosToMic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfClickMicrophone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVoiceContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedClickTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshClickTipView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowClickTipTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVoiceDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadVoiceAudioBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceAudioBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceMicrophoneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVoiceAudioUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVoiceMicrophoneUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVoiceAudioUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVoiceMicrophoneUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceMicrophoneBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChannelAdapter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTopVoiceChannelMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAudioView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsInVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAudioVoiceBtnSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMicrophoneView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMicrophoneVoiceBtnSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTalkingEffectObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoomMemberStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOpenUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E3340))(this);
	}
	template <typename T = uint64_t> T get_AlwaysShowGameHudState() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E3348))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E34B4))(this);
	}
	template <typename T = bool> T get_RunningVoiceFlag() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E1D4C))(this);
	}
	template <typename T = void> T set_RunningVoiceFlag(bool value) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E34C4))(this, value);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E34CC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E34D4))(this);
	}
	template <typename T = bool> T OnGamepadMcBegin() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E3614))(this);
	}
	template <typename T = bool> T OnGamepadMcEnd() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E3A64))(this);
	}
	template <typename T = void> T CheckUseTouchOrNgui() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E3BE0))(this);
	}
	template <typename T = Il2CppVector3> T GetTouchPosToMic(Il2CppVector3 touchPos) {
		return ((T (*)(VoiceBtnHUDBase*, Il2CppVector3))(Il2CppBase() + 0x27E3C84))(this, touchPos);
	}
	template <typename T = bool> T CheckIfClickMicrophone(Il2CppVector3 pos) {
		return ((T (*)(VoiceBtnHUDBase*, Il2CppVector3))(Il2CppBase() + 0x27E3EB0))(this, pos);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E3FC4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E4440))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E4730))(this);
	}
	template <typename T = void> T ShowVoiceContainer(bool isShow) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E4E50))(this, isShow);
	}
	template <typename T = void> T RefreshView(bool isCacheValue) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E4F5C))(this, isCacheValue);
	}
	template <typename T = bool> T CheckNeedClickTip() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E2744))(this);
	}
	template <typename T = void> T SetClickTip(bool show) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E27E8))(this, show);
	}
	template <typename T = void> T RefreshClickTipView() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E4CA4))(this);
	}
	template <typename T = void> T ShowClickTipTween(bool show) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E5954))(this, show);
	}
	template <typename T = void> T CloseVoiceDetail() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E5B40))(this);
	}
	template <typename T = bool> T OnGamepadVoiceAudioBtnClick() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E5C1C))(this);
	}
	template <typename T = void> T OnVoiceAudioBtnClick() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E5CC4))(this);
	}
	template <typename T = void> T OnVoiceMicrophoneBtnClick(uintptr_t obj) {
		return ((T (*)(VoiceBtnHUDBase*, uintptr_t))(Il2CppBase() + 0x27E5DB0))(this, obj);
	}
	template <typename T = void> T RefreshVoiceAudioUI(bool open) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E5EC4))(this, open);
	}
	template <typename T = void> T RefreshVoiceMicrophoneUI(bool open) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E6064))(this, open);
	}
	template <typename T = void> T CloseVoiceAudioUI() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E6204))(this);
	}
	template <typename T = void> T CloseVoiceMicrophoneUI() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E62C0))(this);
	}
	template <typename T = void> T OnVoiceMicrophoneBtnPress(uintptr_t obj, bool isPress) {
		return ((T (*)(VoiceBtnHUDBase*, uintptr_t, bool))(Il2CppBase() + 0x27E3744))(this, obj, isPress);
	}
	template <typename T = void> T UpdateChannelAdapter() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E4800))(this);
	}
	template <typename T = uintptr_t> T GetTopVoiceChannelMode(Il2CppList<uintptr_t>* searchList) {
		return ((T (*)(VoiceBtnHUDBase*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27E637C))(this, searchList);
	}
	template <typename T = void> T RefreshAudioView(bool isCacheValue) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E5020))(this, isCacheValue);
	}
	template <typename T = bool> T CheckIsInVoiceRoom(uintptr_t mode, bool isHodeMode) {
		return ((T (*)(VoiceBtnHUDBase*, uintptr_t, bool))(Il2CppBase() + 0x27E663C))(this, mode, isHodeMode);
	}
	template <typename T = void> T OnAudioVoiceBtnSwitch(uintptr_t audioMode, bool hold) {
		return ((T (*)(VoiceBtnHUDBase*, uintptr_t, bool))(Il2CppBase() + 0x27E6B64))(this, audioMode, hold);
	}
	template <typename T = void> T RefreshMicrophoneView(bool isCacheValue) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E546C))(this, isCacheValue);
	}
	template <typename T = void> T OnMicrophoneVoiceBtnSwitch(uintptr_t mode, bool hold) {
		return ((T (*)(VoiceBtnHUDBase*, uintptr_t, bool))(Il2CppBase() + 0x27E6F60))(this, mode, hold);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(VoiceBtnHUDBase*, float))(Il2CppBase() + 0x27E1994))(this, dt);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E7CD0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E7D90))(this);
	}
	template <typename T = void> T TickImpl(float dt) {
		return ((T (*)(VoiceBtnHUDBase*, float))(Il2CppBase() + 0x27E79EC))(this, dt);
	}
	template <typename T = void> T SetTalkingEffectObj(bool show) {
		return ((T (*)(VoiceBtnHUDBase*, bool))(Il2CppBase() + 0x27E7E50))(this, show);
	}
	template <typename T = void> T UpdateRoomMemberStatus(Il2CppString* roomName) {
		return ((T (*)(VoiceBtnHUDBase*, Il2CppString*))(Il2CppBase() + 0x27E7F44))(this, roomName);
	}
	template <typename T = void> T NotifyOpenUI(uintptr_t msg) {
		return ((T (*)(VoiceBtnHUDBase*, uintptr_t))(Il2CppBase() + 0x27E8158))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E8294))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E829C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E82A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E82AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(VoiceBtnHUDBase*, float))(Il2CppBase() + 0x27E82B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E82BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(VoiceBtnHUDBase*))(Il2CppBase() + 0x27E82C4))(this);
	}

};

}
