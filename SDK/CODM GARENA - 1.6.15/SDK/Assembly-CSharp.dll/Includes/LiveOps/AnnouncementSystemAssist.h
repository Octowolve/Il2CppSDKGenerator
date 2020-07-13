#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class AnnouncementSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "AnnouncementSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqSubscribeAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAnnouncementRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ReqAnnouncement() {
		return ((T (*)(AnnouncementSystemAssist*))(Il2CppBase() + 0x4943324))(this);
	}
	template <typename T = void> T ReqSubscribeAnnouncement() {
		return ((T (*)(AnnouncementSystemAssist*))(Il2CppBase() + 0x49434C4))(this);
	}
	template <typename T = bool> T OnGetAnnouncementRes(uintptr_t Msg) {
		return ((T (*)(AnnouncementSystemAssist*, uintptr_t))(Il2CppBase() + 0x4943664))(this, Msg);
	}

};

}
