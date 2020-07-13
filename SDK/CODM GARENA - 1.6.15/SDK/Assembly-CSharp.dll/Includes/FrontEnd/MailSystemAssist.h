#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheMailList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isShowTipsGiftSend() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CacheMail() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestMailList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetMailListResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMailDelFlagReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetMailDelFlagRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqDel_MailDelFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResDel_MailDelFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestReadMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReadMailResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDelMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteMailResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyNewMails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDeleteMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfMailDel_Flag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGoldBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpecialMailResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInSendFriendList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T RequestMailList() {
		return ((T (*)(MailSystemAssist*))(Il2CppBase() + 0x3835500))(this);
	}
	template <typename T = void> T OnGetMailListResponse(uintptr_t data) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x38356B4))(this, data);
	}
	template <typename T = void> T GetMailDelFlagReq() {
		return ((T (*)(MailSystemAssist*))(Il2CppBase() + 0x38357C4))(this);
	}
	template <typename T = void> T OnGetMailDelFlagRes(uintptr_t res) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x38358F4))(this, res);
	}
	template <typename T = void> T ReqDel_MailDelFlag() {
		return ((T (*)(MailSystemAssist*))(Il2CppBase() + 0x3835B20))(this);
	}
	template <typename T = void> T ResDel_MailDelFlag(uintptr_t res) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x3835CE0))(this, res);
	}
	template <typename T = void> T RequestReadMail(Il2CppList<uintptr_t>* mailList, bool flag, uintptr_t mailType) {
		return ((T (*)(MailSystemAssist*, Il2CppList<uintptr_t>*, bool, uintptr_t))(Il2CppBase() + 0x3835ED0))(this, mailList, flag, mailType);
	}
	template <typename T = void> T OnReadMailResponse(uintptr_t res) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x3836198))(this, res);
	}
	template <typename T = void> T RequestDelMail(Il2CppList<uintptr_t>* mails) {
		return ((T (*)(MailSystemAssist*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3836930))(this, mails);
	}
	template <typename T = void> T OnDeleteMailResponse(uintptr_t res) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x3836E3C))(this, res);
	}
	template <typename T = void> T OnNotifyNewMails(uintptr_t nty) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x383720C))(this, nty);
	}
	template <typename T = void> T OnNotifyDeleteMail(uintptr_t nty) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x3837388))(this, nty);
	}
	template <typename T = void> T OnNtfMailDel_Flag(uintptr_t ntf) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x3837550))(this, ntf);
	}
	template <typename T = void> T SendGoldBack(uint64_t PlayerID) {
		return ((T (*)(MailSystemAssist*, uint64_t))(Il2CppBase() + 0x38376C4))(this, PlayerID);
	}
	template <typename T = void> T OnSpecialMailResponse(uintptr_t m_CacheMail) {
		return ((T (*)(MailSystemAssist*, uintptr_t))(Il2CppBase() + 0x38379A0))(this, m_CacheMail);
	}
	template <typename T = bool> T IsInSendFriendList(uint64_t PlayerID) {
		return ((T (*)(MailSystemAssist*, uint64_t))(Il2CppBase() + 0x3838748))(this, PlayerID);
	}

};

}
