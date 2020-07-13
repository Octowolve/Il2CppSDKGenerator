#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BuyResourceAwardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BuyResourceAwardController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_DisableTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BuyResourceAwardController*))(Il2CppBase() + 0x3DD8C90))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BuyResourceAwardController*))(Il2CppBase() + 0x3DD8D30))(this);
	}
	template <typename T = void> T DisableTween() {
		return ((T (*)(BuyResourceAwardController*))(Il2CppBase() + 0x3DD8EEC))(this);
	}
	template <typename T = void> T SetAwardInfo(uintptr_t resourceType, int32_t resourceNum, int32_t critNum) {
		return ((T (*)(BuyResourceAwardController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3DD9034))(this, resourceType, resourceNum, critNum);
	}
	template <typename T = void> T OnCloseSelf() {
		return ((T (*)(BuyResourceAwardController*))(Il2CppBase() + 0x3DD9684))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BuyResourceAwardController*))(Il2CppBase() + 0x3DD9750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BuyResourceAwardController*))(Il2CppBase() + 0x3DD9758))(this);
	}

};

}
