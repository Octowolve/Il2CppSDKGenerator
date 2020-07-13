#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyExpBuffDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyExpBuffDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LobbyExpBuffDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCSActvGetExpBuffReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCSActvExpBuffRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddExpBuffNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeCategoryByCurrentNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_LobbyExpBuffDS() {
		return ((T (*)(LobbyExpBuffDataAgent*))(Il2CppBase() + 0x4338A88))(this);
	}
	template <typename T = void> T SendCSActvGetExpBuffReq() {
		return ((T (*)(LobbyExpBuffDataAgent*))(Il2CppBase() + 0x4338B38))(this);
	}
	template <typename T = void> T OnGetCSActvExpBuffRes(uintptr_t message) {
		return ((T (*)(LobbyExpBuffDataAgent*, uintptr_t))(Il2CppBase() + 0x4338CC4))(this, message);
	}
	template <typename T = void> T OnAddExpBuffNtf(uintptr_t message) {
		return ((T (*)(LobbyExpBuffDataAgent*, uintptr_t))(Il2CppBase() + 0x433924C))(this, message);
	}
	template <typename T = uintptr_t> T GetModeCategoryByCurrentNavController() {
		return ((T (*)(LobbyExpBuffDataAgent*))(Il2CppBase() + 0x433A314))(this);
	}

};

}
