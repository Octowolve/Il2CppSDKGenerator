#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailDataStore"));
	}

	template <typename T = int32_t> static T& NotificationIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MailDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MaxSystemCapacity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxFriendSendCapacity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MailTipsCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TipsCount_system() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TipsCount_friend() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_TopBarNewMailCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mNewMailCount_System() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mNewMailCount_Friend() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& misAutoDelMail() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMailData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DeleteMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNewMails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMailDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTopBarNewMailCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBadgeNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BBC98))(this);
	}
	template <typename T = void> T InitMailData(Il2CppList<uintptr_t>* typeMailList) {
		return ((T (*)(MailDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36BBD70))(this, typeMailList);
	}
	template <typename T = void> T DeleteMail(Il2CppList<uintptr_t>* mails) {
		return ((T (*)(MailDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36BC868))(this, mails);
	}
	template <typename T = void> T DeleteMail_1(uintptr_t serverType, int32_t index) {
		return ((T (*)(MailDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x36BCAFC))(this, serverType, index);
	}
	template <typename T = int32_t> T get_TopBarNewMailCount() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BD164))(this);
	}
	template <typename T = void> T set_TopBarNewMailCount(int32_t value) {
		return ((T (*)(MailDataStore*, int32_t))(Il2CppBase() + 0x36BD16C))(this, value);
	}
	template <typename T = int32_t> T get_NewMailCount_System() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BD174))(this);
	}
	template <typename T = void> T set_NewMailCount_System(int32_t value) {
		return ((T (*)(MailDataStore*, int32_t))(Il2CppBase() + 0x36BD17C))(this, value);
	}
	template <typename T = int32_t> T get_NewMailCount_Friend() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BD184))(this);
	}
	template <typename T = void> T set_NewMailCount_Friend(int32_t value) {
		return ((T (*)(MailDataStore*, int32_t))(Il2CppBase() + 0x36BD18C))(this, value);
	}
	template <typename T = void> T AddNewMails(Il2CppList<uintptr_t>* typeMailList, bool bAdd) {
		return ((T (*)(MailDataStore*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x36BBE8C))(this, typeMailList, bAdd);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetMailDataList() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36B8F20))(this);
	}
	template <typename T = void> T RefreshTopBarNewMailCount() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BD194))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BD46C))(this);
	}
	template <typename T = int32_t> T GetBadgeNumber() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x369FBE8))(this);
	}
	template <typename T = bool> T get_isAutoDelMail() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BA254))(this);
	}
	template <typename T = void> T set_isAutoDelMail(bool value) {
		return ((T (*)(MailDataStore*, bool))(Il2CppBase() + 0x36BA25C))(this, value);
	}
	template <typename T = bool> static T DeleteMailm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BD5E0))(0, it);
	}
	template <typename T = bool> static T DeleteMailm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BD610))(0, it);
	}
	template <typename T = bool> static T DeleteMailm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BD63C))(0, it);
	}
	template <typename T = bool> static T AddNewMailsm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BD66C))(0, it);
	}
	template <typename T = bool> static T AddNewMailsm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BD69C))(0, it);
	}
	template <typename T = bool> static T AddNewMailsm__5(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BD6C8))(0, it);
	}
	template <typename T = bool> static T RefreshTopBarNewMailCountm__6(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BD6F8))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BD728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(MailDataStore*))(Il2CppBase() + 0x36BD730))(this);
	}

};

}
