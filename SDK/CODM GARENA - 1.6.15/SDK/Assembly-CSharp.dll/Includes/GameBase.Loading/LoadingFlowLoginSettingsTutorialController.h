#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoginSettingsTutorialController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoginSettingsTutorialController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnterSettingsTutorialLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteCustomConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadCompelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5A41C))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5A4E0))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5A580))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5A620))(this);
	}
	template <typename T = void> T EnterSettingsTutorialLevel() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5A858))(this);
	}
	template <typename T = void> T DeleteCustomConfig() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5A9F8))(this);
	}
	template <typename T = void> T OnLoadCompelete() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5AC18))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5ACC4))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5ACC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoginSettingsTutorialController*))(Il2CppBase() + 0x2E5ACCC))(this);
	}

};

}
