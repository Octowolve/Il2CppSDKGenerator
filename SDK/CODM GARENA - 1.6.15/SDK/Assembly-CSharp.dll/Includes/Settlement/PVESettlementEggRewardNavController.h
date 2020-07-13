#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementEggRewardNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementEggRewardNavController"));
	}

	template <typename T = uintptr_t> T& mCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(PVESettlementEggRewardNavController*))(Il2CppBase() + 0x3B3217C))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(PVESettlementEggRewardNavController*))(Il2CppBase() + 0x3B32234))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(PVESettlementEggRewardNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B322D4))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(PVESettlementEggRewardNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B32470))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(PVESettlementEggRewardNavController*))(Il2CppBase() + 0x3B3254C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(PVESettlementEggRewardNavController*))(Il2CppBase() + 0x3B32554))(this);
	}

};

}
