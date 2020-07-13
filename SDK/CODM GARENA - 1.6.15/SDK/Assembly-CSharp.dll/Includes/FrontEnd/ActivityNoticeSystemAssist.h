#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ActivityNoticeSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ActivityNoticeSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& HasCheckNeedForcePopupActivityTimes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetNoticeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_NeedForcePopup() {
		return ((T (*)(ActivityNoticeSystemAssist*))(Il2CppBase() + 0x32D5018))(this);
	}
	template <typename T = void> T OnGetNoticeData(uintptr_t res) {
		return ((T (*)(ActivityNoticeSystemAssist*, uintptr_t))(Il2CppBase() + 0x32D5038))(this, res);
	}

};

}
