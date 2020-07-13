#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementExpDetailNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementExpDetailNavController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& TopBarDepth() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TopBarView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWinnerCircleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C21CFC))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C21DB4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C21E54))(this);
	}
	template <typename T = bool> T IsShowWinnerCircleAvatar() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C21EF4))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(BRSettlementExpDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C21F94))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(BRSettlementExpDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C2212C))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C221FC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C22204))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C2220C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWinnerCircleAvatar() {
		return ((T (*)(BRSettlementExpDetailNavController*))(Il2CppBase() + 0x3C22214))(this);
	}

};

}
