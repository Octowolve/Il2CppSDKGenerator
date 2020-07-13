#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ShootOutGame {

class ShootOutMsgHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ShootOutGame", "ShootOutMsgHUD"));
	}

	template <typename T = uintptr_t> T& MessageSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MessageTable() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MessageLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MessageTween() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_lastMessage() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> T& m_messageQueue() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_showMsg() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountDownOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Message() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageEnqueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareCountDownOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TweenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMsgFromQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckQueueLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T CountDownOver() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C8920))(this);
	}
	template <typename T = void> T Message(Il2CppString* spriteName, Il2CppString* msg, uintptr_t labelColor, uintptr_t messageType) {
		return ((T (*)(ShootOutMsgHUD*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C633C))(this, spriteName, msg, labelColor, messageType);
	}
	template <typename T = bool> T MessageEnqueue(Il2CppString* spriteName, Il2CppString* msg, uintptr_t labelColor, uintptr_t messageType) {
		return ((T (*)(ShootOutMsgHUD*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34C8B20))(this, spriteName, msg, labelColor, messageType);
	}
	template <typename T = void> T PrepareCountDownOver() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C67B8))(this);
	}
	template <typename T = void> T TweenFinished() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C937C))(this);
	}
	template <typename T = void> T ShowMsgFromQueue() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C8DEC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C9580))(this);
	}
	template <typename T = bool> T CheckQueueLength() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C929C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C9770))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C9778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(ShootOutMsgHUD*))(Il2CppBase() + 0x34C9788))(this);
	}

};

}
