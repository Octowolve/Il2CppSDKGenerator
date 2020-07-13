#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatBroadcastView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatBroadcastView"));
	}

	template <typename T = uintptr_t> T& ShowChatBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& InviteBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& WideInviteBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& FriendMsgUnReadLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& FriendMsgBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& noMessageSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TextHtml() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& QuickTeamCell() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& horn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& tweenPos() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& MsgRedDot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MsgUnReadNum() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& MsgBG() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& MsgClickArea() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TextHtmlPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& MsgSprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& contentWidget() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& iconWidget() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& inviteWidget() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& contentTable() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RollBigHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RollBigHornContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRollBigHornFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshReddotNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReddotNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ChatBroadcastView*))(Il2CppBase() + 0x1D268D4))(this);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(ChatBroadcastView*))(Il2CppBase() + 0x1D223E0))(this);
	}
	template <typename T = void> T RollBigHorn() {
		return ((T (*)(ChatBroadcastView*))(Il2CppBase() + 0x1D26A74))(this);
	}
	template <typename T = void> T RollBigHornContent() {
		return ((T (*)(ChatBroadcastView*))(Il2CppBase() + 0x1D26B18))(this);
	}
	template <typename T = void> T OnRollBigHornFinished() {
		return ((T (*)(ChatBroadcastView*))(Il2CppBase() + 0x1D26F3C))(this);
	}
	template <typename T = void> T RefreshReddotNum(uintptr_t msg) {
		return ((T (*)(ChatBroadcastView*, uintptr_t))(Il2CppBase() + 0x1D2697C))(this, msg);
	}
	template <typename T = void> T UpdateReddotNum(int32_t num) {
		return ((T (*)(ChatBroadcastView*, int32_t))(Il2CppBase() + 0x1D27108))(this, num);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(ChatBroadcastView*))(Il2CppBase() + 0x1D273E0))(this);
	}

};

}
