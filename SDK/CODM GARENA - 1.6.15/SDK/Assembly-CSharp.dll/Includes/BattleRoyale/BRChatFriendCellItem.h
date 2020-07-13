#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatFriendCellItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatFriendCellItem"));
	}

	template <typename T = uintptr_t> static T& VoicePlayFlowDele() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TextHtml() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Arrow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& VoiceBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& VoiceBtnBackground() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& VoiceProgressBar() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> static T& TextPosOrg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> static T& TextPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& CacheMsgInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ClickedVoicePlayFlow() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnVoiceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VoicePlayFlowCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCellHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T Configure(uintptr_t data, bool isShowVoiceTranslate) {
		return ((T (*)(BRChatFriendCellItem*, uintptr_t, bool))(Il2CppBase() + 0x24F3078))(this, data, isShowVoiceTranslate);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRChatFriendCellItem*))(Il2CppBase() + 0x24F37D4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRChatFriendCellItem*))(Il2CppBase() + 0x24F3920))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRChatFriendCellItem*))(Il2CppBase() + 0x24F3B9C))(this);
	}
	template <typename T = void> T OnVoiceClick(uintptr_t obj) {
		return ((T (*)(BRChatFriendCellItem*, uintptr_t))(Il2CppBase() + 0x24F3E04))(this, obj);
	}
	template <typename T = void> T VoicePlayFlowCallback(bool voiceNeedPlay) {
		return ((T (*)(BRChatFriendCellItem*, bool))(Il2CppBase() + 0x24F40D8))(this, voiceNeedPlay);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BRChatFriendCellItem*))(Il2CppBase() + 0x24F42D4))(this);
	}
	template <typename T = void> T StopProgress() {
		return ((T (*)(BRChatFriendCellItem*))(Il2CppBase() + 0x24F4550))(this);
	}
	template <typename T = void> T PauseProgress() {
		return ((T (*)(BRChatFriendCellItem*))(Il2CppBase() + 0x24F41EC))(this);
	}
	template <typename T = void> T StartProgress() {
		return ((T (*)(BRChatFriendCellItem*))(Il2CppBase() + 0x24F3FC0))(this);
	}
	template <typename T = float> T SetCellHeightOf(uintptr_t info) {
		return ((T (*)(BRChatFriendCellItem*, uintptr_t))(Il2CppBase() + 0x24EDF84))(this, info);
	}
	template <typename T = int32_t> T CalHeight(uintptr_t info) {
		return ((T (*)(BRChatFriendCellItem*, uintptr_t))(Il2CppBase() + 0x24F46D8))(this, info);
	}

};

}
