#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatSerializeClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatSerializeClass"));
	}

	template <typename T = bool> static T& OPEN_TESTMODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& MAX_SAVE_SECOND() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MAX_CHAT_NUMBER() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ONCE_DELETE_NUMBER() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CHAT_RECORD_VERSION() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& DEFAULT_PER_LOAD_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CHAT_CACHE_PATH_ROOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& FileNameFormat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LocalPlayerPath() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*>*> T& FriendRecord() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& GuildRecord() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& UnloadRecord() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& UnWriteList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<Il2CppString*>*>*> T& UnReadRecord() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& HasInit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Config() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTestMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFriendsChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChatInfoToDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DictToChatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUnWriteMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReadedMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLocationRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUnloadRecordDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasDataToLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRecordToDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRecentRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetLastUnloadRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_WriteFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterChatMessageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllChatRecords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOverMaxDays() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowDisk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllFiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteRecordID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteAllFiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteOverRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOverMaxRecordNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRecordCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintAllRecordCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A068AC))(0);
	}
	template <typename T = void> T Config() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0695C))(this);
	}
	template <typename T = void> T SetTestMode() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A06EF8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A07004))(this);
	}
	template <typename T = void> T LoadFriendsChat(Il2CppList<uintptr_t>* friendList) {
		return ((T (*)(ChatSerializeClass*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A08438))(this, friendList);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T ChatInfoToDict(uintptr_t data) {
		return ((T (*)(ChatSerializeClass*, uintptr_t))(Il2CppBase() + 0x3A085E0))(this, data);
	}
	template <typename T = uintptr_t> T DictToChatInfo(Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(ChatSerializeClass*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x3A08CC4))(this, dict);
	}
	template <typename T = void> T AddUnWriteMsg(uintptr_t info) {
		return ((T (*)(ChatSerializeClass*, uintptr_t))(Il2CppBase() + 0x3A09C08))(this, info);
	}
	template <typename T = void> T CheckReadedMsg(uintptr_t info) {
		return ((T (*)(ChatSerializeClass*, uintptr_t))(Il2CppBase() + 0x3A09D18))(this, info);
	}
	template <typename T = Il2CppList<uintptr_t>*> T UpdateLocationRecord(Il2CppString* fileName, Il2CppList<Il2CppString*>* changeChatList) {
		return ((T (*)(ChatSerializeClass*, Il2CppString*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x3A0A008))(this, fileName, changeChatList);
	}
	template <typename T = uintptr_t> T SaveData() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0A70C))(this);
	}
	template <typename T = void> T RefreshUnloadRecordDict() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A079B4))(this);
	}
	template <typename T = bool> T HasDataToLoad(uintptr_t type, uint64_t ID) {
		return ((T (*)(ChatSerializeClass*, uintptr_t, uint64_t))(Il2CppBase() + 0x3A0ADAC))(this, type, ID);
	}
	template <typename T = bool> T LoadRecord(uintptr_t type, uint64_t ID) {
		return ((T (*)(ChatSerializeClass*, uintptr_t, uint64_t))(Il2CppBase() + 0x3A07DDC))(this, type, ID);
	}
	template <typename T = void> T AddRecordToDataStore(Il2CppList<uintptr_t>* chatList, uintptr_t type, uint64_t ID) {
		return ((T (*)(ChatSerializeClass*, Il2CppList<uintptr_t>*, uintptr_t, uint64_t))(Il2CppBase() + 0x3A0B4D4))(this, chatList, type, ID);
	}
	template <typename T = uintptr_t> T GetRecentRecord(Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>* dict) {
		return ((T (*)(ChatSerializeClass*, Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*))(Il2CppBase() + 0x3A0B0E8))(this, dict);
	}
	template <typename T = bool> T LoadData(uintptr_t pathInfo) {
		return ((T (*)(ChatSerializeClass*, uintptr_t))(Il2CppBase() + 0x3A0B9D8))(this, pathInfo);
	}
	template <typename T = uintptr_t> T TryGetLastUnloadRecord() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0AF90))(this);
	}
	template <typename T = void> T WriteFile(Il2CppString* fileName, Il2CppList<Il2CppString*>* changedRecord, Il2CppList<uintptr_t>* newRecord) {
		return ((T (*)(ChatSerializeClass*, Il2CppString*, Il2CppList<Il2CppString*>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A0BF40))(this, fileName, changedRecord, newRecord);
	}
	template <typename T = void> T WriteFile_1(Il2CppString* fileName, Il2CppList<uintptr_t>* records) {
		return ((T (*)(ChatSerializeClass*, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A0C660))(this, fileName, records);
	}
	template <typename T = bool> T FilterChatMessageInfo(uintptr_t data) {
		return ((T (*)(ChatSerializeClass*, uintptr_t))(Il2CppBase() + 0x3A0CABC))(this, data);
	}
	template <typename T = Il2CppList<uintptr_t>*> T ReadFile(Il2CppString* fullName) {
		return ((T (*)(ChatSerializeClass*, Il2CppString*))(Il2CppBase() + 0x3A0A264))(this, fullName);
	}
	template <typename T = void> T CheckAllChatRecords() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A073A0))(this);
	}
	template <typename T = bool> T IsOverMaxDays(int32_t time) {
		return ((T (*)(ChatSerializeClass*, int32_t))(Il2CppBase() + 0x3A0CBD4))(this, time);
	}
	template <typename T = bool> T IsLowDisk() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0CD14))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllFiles() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0A824))(this);
	}
	template <typename T = void> T DeleteRecordID(uint64_t headID, uintptr_t type) {
		return ((T (*)(ChatSerializeClass*, uint64_t, uintptr_t))(Il2CppBase() + 0x3A0DD64))(this, headID, type);
	}
	template <typename T = void> T DeleteAllFiles() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0CE28))(this);
	}
	template <typename T = void> T DeleteOverRecord(Il2CppList<uintptr_t>* extraInfoList) {
		return ((T (*)(ChatSerializeClass*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A0D768))(this, extraInfoList);
	}
	template <typename T = bool> T IsOverMaxRecordNum() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0D614))(this);
	}
	template <typename T = void> T UpdateRecordCount(bool isDeleteFile, Il2CppString* dateTime, int32_t changeCount) {
		return ((T (*)(ChatSerializeClass*, bool, Il2CppString*, int32_t))(Il2CppBase() + 0x3A0C33C))(this, isDeleteFile, dateTime, changeCount);
	}
	template <typename T = void> T PrintAllRecordCount() {
		return ((T (*)(ChatSerializeClass*))(Il2CppBase() + 0x3A0D1AC))(this);
	}
	template <typename T = void> T PrintDict(Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(ChatSerializeClass*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x3A0E500))(this, dict);
	}
	template <typename T = uintptr_t> static T GetRecentRecordm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A0E868))(0, x);
	}
	template <typename T = int32_t> static T DeleteOverRecordm__1(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A0E894))(0, r);
	}

};

}
