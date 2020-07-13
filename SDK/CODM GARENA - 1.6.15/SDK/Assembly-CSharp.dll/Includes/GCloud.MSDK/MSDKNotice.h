#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKNotice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKNotice"));
	}

	template <typename T = void*> static T& NoticeRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_NoticeRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_NoticeRetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadNoticeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T loadNoticeDataAdapter(Il2CppString* noticeGroup, Il2CppString* language, int32_t region, Il2CppString* partition, Il2CppString* extra) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D8134))(0, noticeGroup, language, region, partition, extra);
	}
	template <typename T = void> static T add_NoticeRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46D82AC))(0, value);
	}
	template <typename T = void> static T remove_NoticeRetEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x46D84AC))(0, value);
	}
	template <typename T = Il2CppString*> static T LoadNoticeData(Il2CppString* noticeGroup, Il2CppString* language, int32_t region, Il2CppString* partition, Il2CppString* extraJson) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46D86AC))(0, noticeGroup, language, region, partition, extraJson);
	}
	template <typename T = void> static T OnNoticeRet(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46D7494))(0, json);
	}

};

}
