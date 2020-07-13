#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKNoticeRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKNoticeRet"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& noticeInfoList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& reqID() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = Il2CppList<uintptr_t>*> T get_NoticeInfoList() {
		return ((T (*)(MSDKNoticeRet*))(Il2CppBase() + 0x46D9490))(this);
	}
	template <typename T = void> T set_NoticeInfoList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(MSDKNoticeRet*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x46D9498))(this, value);
	}
	template <typename T = Il2CppString*> T get_ReqID() {
		return ((T (*)(MSDKNoticeRet*))(Il2CppBase() + 0x46D94A0))(this);
	}
	template <typename T = void> T set_ReqID(Il2CppString* value) {
		return ((T (*)(MSDKNoticeRet*, Il2CppString*))(Il2CppBase() + 0x46D94A8))(this, value);
	}

};

}
