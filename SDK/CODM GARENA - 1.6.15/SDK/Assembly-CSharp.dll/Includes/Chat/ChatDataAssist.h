#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatDataAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatDataAssist"));
	}

	template <typename T = int32_t> static T& CHAT_WORLD_SEND_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CHAT_WORLD_RECEIVED_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& CHAT_SEND_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& CHAT_RECEIVED_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& CHAT_VOICE_SEND_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& CHAT_VOICE_RECEIVED_CELL_MAX_WIDTH_LINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& ExtraLabelLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& MaxContentLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> static T& m_CacheTicket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uint32_t> static T& m_LastRoomId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateLanguageCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterChatContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterEmoticonSuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinOneInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLatestRoomInfoFromDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSatisfyLevelRestrict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCacheTicket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogAfterRoomEnterResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogAfterJoinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = Il2CppString*> static T TranslateLanguageCode(uintptr_t code) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D2E028))(0, code);
	}
	template <typename T = Il2CppString*> static T FilterChatContent(Il2CppString* OriginalString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1D2E170))(0, OriginalString);
	}
	template <typename T = void> static T FilterEmoticonSuffix(uintptr_t OriginalString) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D2E3C4))(0, OriginalString);
	}
	template <typename T = void> static T RoomChange(bool bChange) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1D2E658))(0, bChange);
	}
	template <typename T = int32_t> static T GetReportScene(uintptr_t infoType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D2E968))(0, infoType);
	}
	template <typename T = bool> static T JoinOneInvitation(uintptr_t info, uintptr_t js, bool showTip) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D2EA60))(0, info, js, showTip);
	}
	template <typename T = uintptr_t> static T GetLatestRoomInfoFromDic(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D2F0CC))(0, info);
	}
	template <typename T = bool> static T OnSatisfyLevelRestrict(uintptr_t msgInfo, uintptr_t info) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D2F24C))(0, msgInfo, info);
	}
	template <typename T = void> static T AddCacheTicket(uint32_t roomId, uintptr_t btnId) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x1D2F458))(0, roomId, btnId);
	}
	template <typename T = void> static T TLogAfterRoomEnterResponse(uint32_t roomId, bool success) {
		return ((T (*)(void *, uint32_t, bool))(Il2CppBase() + 0x1D2F6DC))(0, roomId, success);
	}
	template <typename T = void> static T TLogAfterJoinBtnClick(uintptr_t btnId, bool success) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1D2F9D0))(0, btnId, success);
	}

};

}
