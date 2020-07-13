#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameUIScenePVE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameUIScene_PVE"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInjuredScreenEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInjureNumberHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SPGameUIScenePVE*))(Il2CppBase() + 0x391D824))(this);
	}
	template <typename T = int32_t> T GetInjuredScreenEffectAssetID() {
		return ((T (*)(SPGameUIScenePVE*))(Il2CppBase() + 0x391DA1C))(this);
	}
	template <typename T = void> T ShowInjureNumberHUD(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePVE*, uintptr_t))(Il2CppBase() + 0x391DAC0))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUIScenePVE*))(Il2CppBase() + 0x391DF9C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetInjuredScreenEffectAssetID() {
		return ((T (*)(SPGameUIScenePVE*))(Il2CppBase() + 0x391DFA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowInjureNumberHUD(uintptr_t P0) {
		return ((T (*)(SPGameUIScenePVE*, uintptr_t))(Il2CppBase() + 0x391DFA8))(this, P0);
	}

};

}
