#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsChatDataManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsChatDataManager"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& msgId2DataMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& chatDataMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cachePhraseType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& cachePhraseData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& cachePhraseList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& curSelectMsgId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isEditing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMsgCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultChatMsgByGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatCsvByMsgId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatDataByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultChatSystemSettingsByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatListWholeByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMsgInMyPhrase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMyPhrase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefaultMyPhrase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteMsgInMyPhrase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMsgInMyPhrase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveMyPhrase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ArrangePhreseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentShowType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255B808))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255B8B8))(this);
	}
	template <typename T = void> T InitMsgCsv() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255C55C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetDefaultChatMsgByGameMode(uintptr_t gameMode, int32_t MsgListIndex) {
		return ((T (*)(SettingsChatDataManager*, uintptr_t, int32_t))(Il2CppBase() + 0x255CE40))(this, gameMode, MsgListIndex);
	}
	template <typename T = uintptr_t> T GetChatCsvByMsgId(int32_t msgId) {
		return ((T (*)(SettingsChatDataManager*, int32_t))(Il2CppBase() + 0x255D0C8))(this, msgId);
	}
	template <typename T = uintptr_t> T GetChatDataByType(uintptr_t msgType) {
		return ((T (*)(SettingsChatDataManager*, uintptr_t))(Il2CppBase() + 0x255D1E8))(this, msgType);
	}
	template <typename T = Il2CppList<int32_t>*> T GetDefaultChatSystemSettingsByType(uintptr_t msgType) {
		return ((T (*)(SettingsChatDataManager*, uintptr_t))(Il2CppBase() + 0x255D308))(this, msgType);
	}
	template <typename T = Il2CppList<int32_t>*> T GetChatListWholeByType(uintptr_t msgType) {
		return ((T (*)(SettingsChatDataManager*, uintptr_t))(Il2CppBase() + 0x255D4AC))(this, msgType);
	}
	template <typename T = bool> T IsMsgInMyPhrase(int32_t msgId) {
		return ((T (*)(SettingsChatDataManager*, int32_t))(Il2CppBase() + 0x255D760))(this, msgId);
	}
	template <typename T = void> T ResetMyPhrase() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255D8A0))(this);
	}
	template <typename T = void> T ResetDefaultMyPhrase() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255DA1C))(this);
	}
	template <typename T = void> T DeleteMsgInMyPhrase(int32_t msgId) {
		return ((T (*)(SettingsChatDataManager*, int32_t))(Il2CppBase() + 0x255DB98))(this, msgId);
	}
	template <typename T = void> T SetMsgInMyPhrase(int32_t msgId, int32_t index) {
		return ((T (*)(SettingsChatDataManager*, int32_t, int32_t))(Il2CppBase() + 0x255DCFC))(this, msgId, index);
	}
	template <typename T = void> T SaveMyPhrase() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255DFA4))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T ArrangePhreseList(Il2CppList<int32_t>* originalList) {
		return ((T (*)(SettingsChatDataManager*, Il2CppList<int32_t>*))(Il2CppBase() + 0x255E25C))(this, originalList);
	}
	template <typename T = uintptr_t> T GetCurrentShowType() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255E4B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(SettingsChatDataManager*))(Il2CppBase() + 0x255E74C))(this);
	}

};

}
