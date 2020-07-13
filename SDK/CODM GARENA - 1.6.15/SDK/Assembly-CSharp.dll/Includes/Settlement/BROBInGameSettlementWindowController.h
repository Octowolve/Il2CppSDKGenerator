#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BROBInGameSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BROBInGameSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_TimerQuitGame() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstTeamStatis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOneAlivePlayerStatis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogoutDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1BED4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1BFE0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1C084))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1C12C))(this);
	}
	template <typename T = uintptr_t> T GetFirstTeamStatis() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1C1E8))(this);
	}
	template <typename T = uintptr_t> T GetOneAlivePlayerStatis() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1C378))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1C4D8))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1CAA8))(this);
	}
	template <typename T = void> T LogoutDS() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1CB64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1CC50))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1CC58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1CC60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1CC68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(BROBInGameSettlementWindowController*))(Il2CppBase() + 0x3C1CC70))(this);
	}

};

}
