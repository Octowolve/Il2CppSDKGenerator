#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementWindowBeSpectatorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementWindowBeSpectatorController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& RemainTime() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshObserveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnObserveClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnQuitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C3526C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C35378))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C3541C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C3566C))(this);
	}
	template <typename T = void> T ShowBtn(bool showOb, bool showQuit, int32_t waitTime) {
		return ((T (*)(BRSettlementWindowBeSpectatorController*, bool, bool, int32_t))(Il2CppBase() + 0x3C357FC))(this, showOb, showQuit, waitTime);
	}
	template <typename T = void> T RefreshObserveTime() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C35954))(this);
	}
	template <typename T = void> T OnBtnObserveClick() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C35B28))(this);
	}
	template <typename T = void> T OnBtnQuitClick() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C35CC8))(this);
	}
	template <typename T = void> T OnQuitCallBack(uintptr_t result, int32_t context) {
		return ((T (*)(BRSettlementWindowBeSpectatorController*, uintptr_t, int32_t))(Il2CppBase() + 0x3C35F58))(this, result, context);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C36058))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C36504))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C3650C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C36514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSettlementWindowBeSpectatorController*))(Il2CppBase() + 0x3C3651C))(this);
	}

};

}
