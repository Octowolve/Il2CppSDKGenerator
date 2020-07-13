#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKNoticeTextInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKNoticeTextInfo"));
	}

	template <typename T = Il2CppString*> T& noticeTitle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& noticeContent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& noticeRedirectUrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_NoticeTitle() {
		return ((T (*)(MSDKNoticeTextInfo*))(Il2CppBase() + 0x46D96A8))(this);
	}
	template <typename T = void> T set_NoticeTitle(Il2CppString* value) {
		return ((T (*)(MSDKNoticeTextInfo*, Il2CppString*))(Il2CppBase() + 0x46D96B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_NoticeContent() {
		return ((T (*)(MSDKNoticeTextInfo*))(Il2CppBase() + 0x46D96B8))(this);
	}
	template <typename T = void> T set_NoticeContent(Il2CppString* value) {
		return ((T (*)(MSDKNoticeTextInfo*, Il2CppString*))(Il2CppBase() + 0x46D96C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_NoticeRedirectUrl() {
		return ((T (*)(MSDKNoticeTextInfo*))(Il2CppBase() + 0x46D96C8))(this);
	}
	template <typename T = void> T set_NoticeRedirectUrl(Il2CppString* value) {
		return ((T (*)(MSDKNoticeTextInfo*, Il2CppString*))(Il2CppBase() + 0x46D96D0))(this, value);
	}

};

}
