#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPTutorialDifficultyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPTutorialDifficultyController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_EasyFSM() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_HardFSM() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyModeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHardModeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42F9B54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42F9BF8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42F9D04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42F9EBC))(this);
	}
	template <typename T = void> T OnEasyModeBtnClick() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42FA074))(this);
	}
	template <typename T = void> T OnHardModeBtnClick() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42FA468))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42FA85C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42FA864))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42FA86C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SPTutorialDifficultyController*))(Il2CppBase() + 0x42FA874))(this);
	}

};

}
