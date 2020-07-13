#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ActivityNoticeDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ActivityNoticeDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_ActivityDatas() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NoticeDatas() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Test() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Test() {
		return ((T (*)(ActivityNoticeDataStore*))(Il2CppBase() + 0x32D49E0))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(ActivityNoticeDataStore*))(Il2CppBase() + 0x32D4A78))(this);
	}
	template <typename T = void> T InitActivity() {
		return ((T (*)(ActivityNoticeDataStore*))(Il2CppBase() + 0x32D4B20))(this);
	}
	template <typename T = void> T InitNotice(Il2CppList<uintptr_t>* noticeDatas) {
		return ((T (*)(ActivityNoticeDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x32D4BF4))(this, noticeDatas);
	}
	template <typename T = int32_t> static T InitNoticem__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x32D4EC8))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(ActivityNoticeDataStore*))(Il2CppBase() + 0x32D4EF8))(this);
	}

};

}
