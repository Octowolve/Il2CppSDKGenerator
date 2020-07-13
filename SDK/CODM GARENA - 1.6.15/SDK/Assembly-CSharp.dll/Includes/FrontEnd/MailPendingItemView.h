#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailPendingItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailPendingItemView"));
	}

	template <typename T = uintptr_t> T& SystemInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FriendInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& systemMail() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& friendMail() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSystemMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFriendMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T SetEasyListData(uintptr_t data, int32_t index) {
		return ((T (*)(MailPendingItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x36C0EB8))(this, data, index);
	}
	template <typename T = void> T SetSystemMail(uintptr_t data) {
		return ((T (*)(MailPendingItemView*, uintptr_t))(Il2CppBase() + 0x36C146C))(this, data);
	}
	template <typename T = void> T SetFriendMail(uintptr_t data) {
		return ((T (*)(MailPendingItemView*, uintptr_t))(Il2CppBase() + 0x36C1AFC))(this, data);
	}
	template <typename T = void> T SetCell(Il2CppList<uintptr_t>* dataList, int32_t mailStatus, bool bReadFlag, bool isWeasponExpire) {
		return ((T (*)(MailPendingItemView*, Il2CppList<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x36C1F6C))(this, dataList, mailStatus, bReadFlag, isWeasponExpire);
	}
	template <typename T = bool> static T SetSystemMailm__0(uintptr_t MailAttachData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C2524))(0, MailAttachData);
	}

};

}
