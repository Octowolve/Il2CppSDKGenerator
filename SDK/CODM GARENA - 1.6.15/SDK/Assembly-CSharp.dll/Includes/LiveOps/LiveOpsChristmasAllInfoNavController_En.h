#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsChristmasAllInfoNavControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsChristmasAllInfoNavController_En"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsChristmasAllInfoNavControllerEn*))(Il2CppBase() + 0x34E167C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsChristmasAllInfoNavControllerEn*))(Il2CppBase() + 0x34E1724))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LiveOpsChristmasAllInfoNavControllerEn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34E17C4))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LiveOpsChristmasAllInfoNavControllerEn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34E19D8))(this, data, nextData);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsChristmasAllInfoNavControllerEn*))(Il2CppBase() + 0x34E1ABC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsChristmasAllInfoNavControllerEn*))(Il2CppBase() + 0x34E1AC4))(this);
	}

};

}
