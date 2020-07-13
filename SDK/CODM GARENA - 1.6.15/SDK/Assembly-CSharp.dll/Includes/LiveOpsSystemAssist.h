#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LiveOpsSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LiveOpsSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& HasCheckNeedForcePopupTimes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& kDecodeFailedDescription() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& kNetWorkErrorDescription() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqLiveOpsDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetLiveOpsDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowLiveOpsIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_NeedForcePopup() {
		return ((T (*)(LiveOpsSystemAssist*))(Il2CppBase() + 0x432CD54))(this);
	}
	template <typename T = uintptr_t> T get_LiveOpsDS() {
		return ((T (*)(LiveOpsSystemAssist*))(Il2CppBase() + 0x432CD9C))(this);
	}
	template <typename T = void> T ReqLiveOpsDesc() {
		return ((T (*)(LiveOpsSystemAssist*))(Il2CppBase() + 0x432CE4C))(this);
	}
	template <typename T = bool> T OnGetLiveOpsDesc(uintptr_t Msg) {
		return ((T (*)(LiveOpsSystemAssist*, uintptr_t))(Il2CppBase() + 0x432CF7C))(this, Msg);
	}
	template <typename T = bool> T IsShowLiveOpsIcon(uintptr_t bonus, uintptr_t type) {
		return ((T (*)(LiveOpsSystemAssist*, uintptr_t, uintptr_t))(Il2CppBase() + 0x432D280))(this, bonus, type);
	}

};

}
