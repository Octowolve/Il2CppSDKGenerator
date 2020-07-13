#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatView"));
	}

	template <typename T = uintptr_t> T& chatInput() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& chatButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& chatOpenSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& chatCloseSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& chatMsgHUD() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& shortcutTab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& historyTab() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& friendTab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& mIgnoreCTabChanged() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& mTabChanged() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = uintptr_t> T& shortcutScrollView() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& historyMsg() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& inputView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ChatInputTable() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ChatMsgTable() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Contanier() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = void*> T& ChatFriendItemPool() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& FriendContentForHeight() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& HistoryContentForHeight() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ShortcutContentForHeight() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& MessageContentForHeight() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& DontDisturb() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& friendRedDot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& OnFriendMsgSprite() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& voicePlayerName() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& voiceRoot() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& showVoice() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& switchChannelBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& VoiceToWordBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& channelLabel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& CloseObj() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& PreloadObjsParent() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& startTimer() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& msgShowTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> static T& ChatTableHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSpec() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = void*> T& OnTabChanged() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> T& OnDontDisturbToggleChange() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SwitchChatGroup() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& ConstDisableChatTime() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& DisableChatTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& DisableChatAnimation() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& bDisableChat() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TabChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInputView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideInputView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDisableChatAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMsgHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontDisturbToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVoiceState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannelLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecyleBRCFCItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRCFCltem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVoiceToTextBtnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F4C34))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F4C3C))(this);
	}
	template <typename T = bool> T get_StartTimer() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F4C4C))(this);
	}
	template <typename T = void> T set_StartTimer(bool value) {
		return ((T (*)(BRChatView*, bool))(Il2CppBase() + 0x24E921C))(this, value);
	}
	template <typename T = float> T get_Timer() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F4C54))(this);
	}
	template <typename T = void> T set_Timer(float value) {
		return ((T (*)(BRChatView*, float))(Il2CppBase() + 0x24E9224))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F4C5C))(this);
	}
	template <typename T = void> T Configure(uintptr_t ds) {
		return ((T (*)(BRChatView*, uintptr_t))(Il2CppBase() + 0x24F5310))(this, ds);
	}
	template <typename T = void> T TabChange() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F53E0))(this);
	}
	template <typename T = void> T ShowInputView() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24E817C))(this);
	}
	template <typename T = void> T HideInputView(bool bDisable) {
		return ((T (*)(BRChatView*, bool))(Il2CppBase() + 0x24E7934))(this, bDisable);
	}
	template <typename T = void> T EnableChat() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F57EC))(this);
	}
	template <typename T = bool> T get_ChatEnable() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24E7D1C))(this);
	}
	template <typename T = void> T DisableChat(bool bDisable) {
		return ((T (*)(BRChatView*, bool))(Il2CppBase() + 0x24F563C))(this, bDisable);
	}
	template <typename T = void> T UpdateDisableChatAnimation(float dt) {
		return ((T (*)(BRChatView*, float))(Il2CppBase() + 0x24F593C))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F5AA8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRChatView*, float))(Il2CppBase() + 0x24F5AB0))(this, dt);
	}
	template <typename T = void> T ClearMsgHud() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24E62A4))(this);
	}
	template <typename T = void> T DontDisturbToggleChange() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F5FD8))(this);
	}
	template <typename T = void> T UpdateVoiceState() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F5C70))(this);
	}
	template <typename T = void> T SetChannelLabel(uintptr_t channel) {
		return ((T (*)(BRChatView*, uintptr_t))(Il2CppBase() + 0x24E9FF4))(this, channel);
	}
	template <typename T = void> T RecyleBRCFCItem(uintptr_t item) {
		return ((T (*)(BRChatView*, uintptr_t))(Il2CppBase() + 0x24EE360))(this, item);
	}
	template <typename T = uintptr_t> T GetBRCFCltem(int32_t expendCount, bool isVisible) {
		return ((T (*)(BRChatView*, int32_t, bool))(Il2CppBase() + 0x24E6790))(this, expendCount, isVisible);
	}
	template <typename T = void> T SetVoiceToTextBtnPos(bool isLeft) {
		return ((T (*)(BRChatView*, bool))(Il2CppBase() + 0x24E9588))(this, isLeft);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRChatView*))(Il2CppBase() + 0x24F60C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRChatView*, float))(Il2CppBase() + 0x24F60D0))(this, P0);
	}

};

}
