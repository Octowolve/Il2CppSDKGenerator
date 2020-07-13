#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mChatDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendChatMsgReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRChatMsgRespond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MsgContentTranslate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendChatShortcutReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRChatShortcutRespond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMsgHeaderFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMpMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCampColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShortCutIDTranslate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendNotifyMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_ChatDS() {
		return ((T (*)(BRChatDataAgent*))(Il2CppBase() + 0x24EE620))(this);
	}
	template <typename T = uintptr_t> T get_rds() {
		return ((T (*)(BRChatDataAgent*))(Il2CppBase() + 0x24EE6D0))(this);
	}
	template <typename T = bool> T SendChatMsgReq(Il2CppString* content, uint32_t broadcastType) {
		return ((T (*)(BRChatDataAgent*, Il2CppString*, uint32_t))(Il2CppBase() + 0x24E8910))(this, content, broadcastType);
	}
	template <typename T = void> T OnBRChatMsgRespond(uintptr_t msg) {
		return ((T (*)(BRChatDataAgent*, uintptr_t))(Il2CppBase() + 0x24EE76C))(this, msg);
	}
	template <typename T = Il2CppString*> T MsgContentTranslate(Il2CppString* OriginalText, uint32_t PlayerID) {
		return ((T (*)(BRChatDataAgent*, Il2CppString*, uint32_t))(Il2CppBase() + 0x24EF77C))(this, OriginalText, PlayerID);
	}
	template <typename T = bool> T SendChatShortcutReq(int32_t id, uint32_t broadcastType) {
		return ((T (*)(BRChatDataAgent*, int32_t, uint32_t))(Il2CppBase() + 0x24ED5C4))(this, id, broadcastType);
	}
	template <typename T = void> T OnBRChatShortcutRespond(uintptr_t msg) {
		return ((T (*)(BRChatDataAgent*, uintptr_t))(Il2CppBase() + 0x24EFE7C))(this, msg);
	}
	template <typename T = void> T SetMsgHeaderFormat(uint32_t playerID, uintptr_t sb, int16_t broadcastType) {
		return ((T (*)(BRChatDataAgent*, uint32_t, uintptr_t, int16_t))(Il2CppBase() + 0x24EED40))(this, playerID, sb, broadcastType);
	}
	template <typename T = bool> T IsMpMode() {
		return ((T (*)(BRChatDataAgent*))(Il2CppBase() + 0x24E69FC))(this);
	}
	template <typename T = bool> T IsAllMode() {
		return ((T (*)(BRChatDataAgent*))(Il2CppBase() + 0x24E6B50))(this);
	}
	template <typename T = Il2CppString*> T GetCampColors(uint32_t playerID) {
		return ((T (*)(BRChatDataAgent*, uint32_t))(Il2CppBase() + 0x24EF070))(this, playerID);
	}
	template <typename T = void> T ShortCutIDTranslate(int32_t MsgId, uint32_t PlayerID) {
		return ((T (*)(BRChatDataAgent*, int32_t, uint32_t))(Il2CppBase() + 0x24F04B4))(this, MsgId, PlayerID);
	}
	template <typename T = Il2CppString*> T GetAudioString(uint64_t playerId, int16_t msgId) {
		return ((T (*)(BRChatDataAgent*, uint64_t, int16_t))(Il2CppBase() + 0x24F092C))(this, playerId, msgId);
	}
	template <typename T = void> T SendNotifyMessage(Il2CppString* msg) {
		return ((T (*)(BRChatDataAgent*, Il2CppString*))(Il2CppBase() + 0x24F0CC4))(this, msg);
	}

};

}
