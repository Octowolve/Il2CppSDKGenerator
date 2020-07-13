#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKNoticeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKNoticeInfo"));
	}

	template <typename T = int32_t> T& noticeID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& noticeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& noticeGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& beginTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& updateTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& contentType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& language() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& textInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& picUrlList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& webUrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& extraJson() {
		return *(T*)((uintptr_t)this + 0x38);
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

	template <typename T = int32_t> T get_NoticeId() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D902C))(this);
	}
	template <typename T = void> T set_NoticeId(int32_t value) {
		return ((T (*)(MSDKNoticeInfo*, int32_t))(Il2CppBase() + 0x46D9034))(this, value);
	}
	template <typename T = int32_t> T get_NoticeType() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D903C))(this);
	}
	template <typename T = void> T set_NoticeType(int32_t value) {
		return ((T (*)(MSDKNoticeInfo*, int32_t))(Il2CppBase() + 0x46D9044))(this, value);
	}
	template <typename T = Il2CppString*> T get_NoticeGroup() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D904C))(this);
	}
	template <typename T = void> T set_NoticeGroup(Il2CppString* value) {
		return ((T (*)(MSDKNoticeInfo*, Il2CppString*))(Il2CppBase() + 0x46D9054))(this, value);
	}
	template <typename T = int32_t> T get_BeginTime() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D905C))(this);
	}
	template <typename T = void> T set_BeginTime(int32_t value) {
		return ((T (*)(MSDKNoticeInfo*, int32_t))(Il2CppBase() + 0x46D9064))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D906C))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(MSDKNoticeInfo*, int32_t))(Il2CppBase() + 0x46D9074))(this, value);
	}
	template <typename T = int32_t> T get_UpdateTime() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D907C))(this);
	}
	template <typename T = void> T set_UpdateTime(int32_t value) {
		return ((T (*)(MSDKNoticeInfo*, int32_t))(Il2CppBase() + 0x46D9084))(this, value);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D908C))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(MSDKNoticeInfo*, int32_t))(Il2CppBase() + 0x46D9094))(this, value);
	}
	template <typename T = int32_t> T get_ContentType() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D909C))(this);
	}
	template <typename T = void> T set_ContentType(int32_t value) {
		return ((T (*)(MSDKNoticeInfo*, int32_t))(Il2CppBase() + 0x46D90A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Language() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D90AC))(this);
	}
	template <typename T = void> T set_Language(Il2CppString* value) {
		return ((T (*)(MSDKNoticeInfo*, Il2CppString*))(Il2CppBase() + 0x46D90B4))(this, value);
	}
	template <typename T = uintptr_t> T get_TextInfo() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D90BC))(this);
	}
	template <typename T = void> T set_TextInfo(uintptr_t value) {
		return ((T (*)(MSDKNoticeInfo*, uintptr_t))(Il2CppBase() + 0x46D90C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PicUrlList() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D90CC))(this);
	}
	template <typename T = void> T set_PicUrlList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(MSDKNoticeInfo*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x46D90D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_WebUrl() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D90DC))(this);
	}
	template <typename T = void> T set_WebUrl(Il2CppString* value) {
		return ((T (*)(MSDKNoticeInfo*, Il2CppString*))(Il2CppBase() + 0x46D90E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtraJson() {
		return ((T (*)(MSDKNoticeInfo*))(Il2CppBase() + 0x46D90EC))(this);
	}
	template <typename T = void> T set_ExtraJson(Il2CppString* value) {
		return ((T (*)(MSDKNoticeInfo*, Il2CppString*))(Il2CppBase() + 0x46D90F4))(this, value);
	}

};

}
